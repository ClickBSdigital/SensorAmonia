#include <MD_Parola.h>
#include <MD_MAX72xx.h>
#include <SPI.h>

// Configuração do display MAX7219 (4 matrizes 8x8)
#define HARDWARE_TYPE MD_MAX72XX::FC16_HW
#define MAX_DEVICES 4
#define DATA_PIN 11
#define CLK_PIN 13
#define CS_PIN 10

MD_Parola display = MD_Parola(HARDWARE_TYPE, CS_PIN, MAX_DEVICES);

// Pinos
const int sensorGas = A0;      // Sensor MQ-135
const int redPin = 3;          // LED RGB - Vermelho
const int greenPin = 4;        // LED RGB - Verde (pisca no normal)
const int bluePin = 5;         // LED RGB - Azul
const int ledIndicador = 2;    // LED Verde fixo (não usado mais)
const int buzzerPin = 6;       // Buzzer
const int sirenePin = 7;       // Sirene (via relé ou transistor)
const int coolerPin = 8;       // Cooler (via relé ou transistor)

// Faixas de alerta
const int nivelBaixo = 350;
const int nivelAlto = 500;

// Controle estado
bool alertaAtivado = false;

// Controle mensagens display
bool mensagemOKAtiva = false;
bool mensagemMediaAtiva = false;
bool mensagemAltoAtiva = false;

// Temporização sem delay
unsigned long previousMillisLed = 0;
unsigned long previousMillisBuzzer = 0;
unsigned long previousMillisVerde = 0;  // Piscar LED verde
const unsigned long intervaloBuzzer = 200;
const unsigned long intervaloVerde = 100;

bool ledLigado = false;
bool buzzerLigado = false;
bool verdeLigado = false;

const unsigned long ledOnTime = 1500;  // Corrigido para 1.5s real
const unsigned long ledOffTime = 500;

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(ledIndicador, OUTPUT); // Se quiser remover, pode
  pinMode(buzzerPin, OUTPUT);
  pinMode(sirenePin, OUTPUT);
  pinMode(coolerPin, OUTPUT);

  Serial.begin(9600);

  display.begin();
  display.setIntensity(5);
  display.displayClear();

  desligarRGB();
  desligarAlertas();
}

void loop() {
  int leituraGas = analogRead(sensorGas);
  Serial.print("Gás detectado: ");
  Serial.println(leituraGas);

  if (display.displayAnimate()) {
    display.displayReset();
  }

  unsigned long currentMillis = millis();

  if (leituraGas <= nivelBaixo) {
    // Estado normal
    alertaAtivado = false;
    desligarRGB();
    desligarAlertas();

    // Piscar LED verde (pino 4)
    if (currentMillis - previousMillisVerde >= intervaloVerde) {
      previousMillisVerde = currentMillis;
      verdeLigado = !verdeLigado;
      digitalWrite(greenPin, verdeLigado ? HIGH : LOW);
    }

    // Mensagem display
    if (!mensagemOKAtiva) {
      display.displayClear();
      display.displayScroll("SENSOR DE GAS OK", PA_CENTER, PA_SCROLL_LEFT, 80);
      mensagemOKAtiva = true;
      mensagemMediaAtiva = false;
      mensagemAltoAtiva = false;
    }

    // Zera estados
    ledLigado = false;
    buzzerLigado = false;

  } else if (leituraGas > nivelBaixo && leituraGas <= nivelAlto) {
    // Estado médio
    alertaAtivado = false;
    desligarAlertas();
    digitalWrite(greenPin, LOW); // Apaga verde se ligado
    verdeLigado = false;

    if (!mensagemMediaAtiva) {
      display.displayClear();
      display.displayScroll("NIVEL MEDIO DE AMONIA", PA_CENTER, PA_SCROLL_LEFT, 80);
      mensagemMediaAtiva = true;
      mensagemOKAtiva = false;
      mensagemAltoAtiva = false;
    }

    // Piscar LED azul
    if (currentMillis - previousMillisLed >= 500) {
      previousMillisLed = currentMillis;
      ledLigado = !ledLigado;
      digitalWrite(bluePin, ledLigado ? HIGH : LOW);
    }

    // Buzzer
    if (currentMillis - previousMillisBuzzer >= intervaloBuzzer) {
      previousMillisBuzzer = currentMillis;
      buzzerLigado = !buzzerLigado;
      digitalWrite(buzzerPin, buzzerLigado ? HIGH : LOW);
    }

    digitalWrite(sirenePin, LOW);
    digitalWrite(coolerPin, LOW);

  } else {
    // Estado crítico
    desligarRGB();
    verdeLigado = false;

    if (!alertaAtivado) {
      alertaAtivado = true;
      digitalWrite(sirenePin, HIGH);
      digitalWrite(coolerPin, HIGH);
    }

    if (!mensagemAltoAtiva) {
      display.displayClear();
      display.displayScroll("NIVEL ALTO DE GAS", PA_CENTER, PA_SCROLL_LEFT, 80);
      mensagemAltoAtiva = true;
      mensagemOKAtiva = false;
      mensagemMediaAtiva = false;
    }

    // Piscar LED vermelho com tempos diferentes
    if (ledLigado) {
      if (currentMillis - previousMillisLed >= ledOnTime) {
        ledLigado = false;
        previousMillisLed = currentMillis;
        digitalWrite(redPin, LOW);
      }
    } else {
      if (currentMillis - previousMillisLed >= ledOffTime) {
        ledLigado = true;
        previousMillisLed = currentMillis;
        digitalWrite(redPin, HIGH);
      }
    }

    // Buzzer com tom
    if (currentMillis - previousMillisBuzzer >= intervaloBuzzer) {
      previousMillisBuzzer = currentMillis;
      tone(buzzerPin, 2000, 500);
    }
  }
}

void desligarRGB() {
  digitalWrite(redPin, LOW);
  digitalWrite(greenPin, LOW);
  digitalWrite(bluePin, LOW);
}

void desligarAlertas() {
  digitalWrite(buzzerPin, LOW);
  digitalWrite(sirenePin, LOW);
  digitalWrite(coolerPin, LOW);
}