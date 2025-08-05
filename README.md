# SensorAmonia
Sensor de gás Amônia
 

ELIANDRO APARECIDO ELIAS DA SILVA
HEINRICH BELFORT FELTRIN
JOWILSON RIBAS NUNES







SISTEMA DE DETECÇÃO DE GÁS DE AMÔNIA EM AVIÁRIOS COM ARDUINO UNO E SENSOR MQ-135: UMA SOLUÇÃO DE BAIXO CUSTO PARA A AGRICULTURA FAMILIAR.












 
Campo Grande - MS
2025 

ELIANDRO APARECIDO ELIAS DA SILVA
HEINRICH BELFORT FELTRIN
JOWILSON RIBAS NUNES









SISTEMA DE DETECÇÃO DE GÁS DE AMÔNIA EM AVIÁRIOS COM ARDUINO UNO E SENSOR MQ-135: UMA SOLUÇÃO DE BAIXO CUSTO PARA A AGRICULTURA FAMILIAR.


Artigo Científico apresentado ao Curso de Tecnologia em Análise e Desenvolvimento de Sistemas da Faculdade Senac Hub Academy, como requisito parcial à obtenção do título de Bacharel em Tecnologia em Análise e Desenvolvimento de Sistemas.

Orientador: Prof. Me. Ederson Roberto Da Costa









Campo Grande - MS
2025 
ELIANDRO APARECIDO ELIAS DA SILVA
HEINRICH BELFORT FELTRIN
JOWILSON RIBAS NUNES





SISTEMA DE DETECÇÃO DE GÁS DE AMÔNIA EM AVIÁRIOS COM ARDUINO UNO E SENSOR MQ-135: UMA SOLUÇÃO DE BAIXO CUSTO PARA A AGRICULTURA FAMILIAR.


Artigo Científico apresentado ao Curso de Tecnologia em Análise e Desenvolvimento de Sistemas da Faculdade Senac Hub Academy, como requisito parcial à obtenção do título de Bacharel em Tecnologia em Análise e Desenvolvimento de Sistemas.


BANCA EXAMINADORA


____________________________________
Orientador: Prof(a). Dr(a).
Faculdade SENAC - SENAC - MS


____________________________________
Prof(a). Dr(a).  Componente da Banca
Faculdade SENAC - SENAC - MS


____________________________________
Prof(a). Dr(a). Componente da Banca
Faculdade SENAC - SENAC - MS



Campo Grande, ____de ___________de ______. 
SISTEMA DE DETECÇÃO DE GÁS DE AMÔNIA EM AVIÁRIOS COM ARDUINO UNO E SENSOR MQ-135: UMA SOLUÇÃO DE BAIXO CUSTO PARA A AGRICULTURA FAMILIAR.

AMMONIA GAS DETECTION SYSTEM IN POULTRY HOUSES WITH ARDUINO UNO AND MQ-135 SENSOR: A LOW-COST SOLUTION FOR FAMILY FARMING. 
Silva, E. A. E.  	Feltrin, H. B.  	Nunes, J. R.  	COSTA, E. R.  

RESUMO
Este artigo apresenta o desenvolvimento de um sistema de detecção de gás amônia em aviários, utilizando o sensor MQ-135 acoplado à plataforma Arduino Uno R3. O sistema foi projetado para atuar preventivamente, emitindo alertas sonoros e visuais quando a concentração de amônia ultrapassar 15 ppm, promovendo o bem-estar animal e a segurança ocupacional. A solução propõe uma alternativa de baixo custo e fácil implementação voltada à agricultura familiar, contribuindo para a redução de perdas comerciais e melhora das condições ambientais em granjas avícolas. O sistema foi validado em protótipo funcional e apresenta potencial para aplicação prática.

Palavras-chave: amônia; Arduino Uno; sensor MQ-135; agricultura familiar; automação.

ABSTRACT
 This article presents the development of an ammonia gas detection system for poultry houses using the MQ-135 sensor coupled with the Arduino Uno R3 platform. The system was designed to act preventively, issuing audible and visual alerts when ammonia concentration exceeds 15 ppm, promoting animal welfare and occupational safety. The solution proposes a low-cost and easy-to-implement alternative aimed at family farming, contributing to the reduction of commercial losses and improvement of environmental conditions in poultry farms. The system was validated through a functional prototype and shows potential for practical application.

Keywords: ammonia; Arduino Uno; MQ-135 sensor; family farming; automation.


1 INTRODUÇÃO

O estado de Mato Grosso do Sul tem em suas atividades econômicas em sua grande parte o Agronegócio, e segundo a FAMASUL (ed. n°8/2024), a exportação de carne de frango in natura gerou uma receita de US$ 34,1 milhões e totalizou 17,2 mil toneladas no mês de julho/2024. No acumulado dos sete meses de 2024, MS exportou US$205,0 milhões e 102,9 mil toneladas de carne de frango, o que equivale a uma porcentagem aproximada de 4% do volume total de exportação pelo estado de MS. 
Alguns dos parceiros comercial do estado na compra da carne in natura do frango é: China, Japão, Iraque, Países Baixos (Holanda), Emirados Árabes Unidos, Chile, Suíça, Jordânia, Filipinas e Reino Unido (FAMASUL, ed. n° 8/2024 – Setembro). 
A avicultura está presente na agricultura familiar em pequenas granjas em todo o estado, porém no município de Sidrolândia-MS, Terenos-MS e Campo Grande-MS conta com granjas maiores com processos mais industrializados. 
Dado a importância econômica e da sobrevivência de pequenos produtores, cuidar da saúde do frango não é só incentivado e sim pode ser o limitante para vendas e acordos com outros países que apreciam os produtos. A China por exemplo é um grande comprador de pés de frango que se estiverem com pododermatite (Calo de Pata), leva à diminuição do valor comercial e até condenação das patas das aves e é uma questão crítica com relação ao bem-estar das aves no mercado global (SHEPHERD, 2010). 
Outro ponto que merece atenção, segundo o Boletim de Avicultura (FAMASUL, ed. n° 8, 2024)(Tabela 01), é o manejo da cama aviária, essencial para a prevenção do calo de pata (pododermatite), já que a umidade excessiva contribui para o surgimento dessa condição. A mistura da cama úmida com fezes e urina favorece a produção de gás amônia, que em altas concentrações pode intoxicar os frangos e prejudicar a saúde humana durante o manejo, podendo até levar à morte. Além disso, para a comercialização da carne de frango in natura, é exigido que a exposição ao gás amônia não ultrapasse níveis entre 20 e 30 ppm.
O gás de amônia (NH₃), apesar de incolor, possui odor muito forte e característico, semelhante ao de produtos de limpeza ou urina, podendo ser inflamável em concentrações elevadas. Segundo o Boletim de Avicultura (FAMASUL, 2024), seu acúmulo em ambientes fechados de produção pode causar sérios danos à saúde de frangos e seres humanos, sendo um dos pontos críticos no manejo da cama aviária.

Tabela 01: efeitos na saúde mediante a exposição ao gás de amônia. (AGROCERES MULTIMIX, 2023; CARVALHO; MELO, 2022).
Concentração no ar (ppm)	Efeito
Até 25 ppm	Tolerável por curto tempo (limite de exposição recomendada para humanos)
25 – 50 ppm	Irritação nos olhos, nariz e garganta
50 – 100 ppm	Irritação respiratória forte, lacrimejamento, tosse
Acima de 100 ppm	Risco severo de danos pulmonares e intoxicação
Acima de 300 ppm	Perigo de vida com exposição prolongada

Nas aves, concentrações superiores a 25 ppm já começam a causar problemas respiratórios e dermatológicos (como o calo de pata). Para o meio ambiente o gás de amônia causa poluição atmosfera criando partículas finas que afetam a qualidade do ar, causa também a Acidificação do solo e da água que afeta o pH mexendo como o ecossistema, por fim, provoca a Eutrofização que é o aumento de nutrientes e proliferação excessiva de algas (AGROCERES MULTIMIX, 2023)
Nas grandes granjas eles utilizam sensores de gás de amônia para evitar todos os problemas que podem vir com seu acúmulo, porém nas agriculturas familiares esse custo não é uma opção. Nosso trabalho consiste em criar um sistema de detecção do gás de amônia abaixo de 15 ppm de gás de amônia. Dessa forma conseguimos emitir um aviso para que se faça a troca da cama aviária a fim de evitar ao máximo o acúmulo do gás de amônia tão nocivo. (CARVALHO, 2019).
Neste projeto, utilizaremos a placa Arduino Uno R3 em conjunto com o sensor MQ-135. A proposta é desenvolver um sistema eficiente e de baixo custo, com potencial para auxiliar pequenos produtores, contribuindo para o aumento da produtividade e a redução dos riscos à saúde humana e animal.


2. REFERENCIAL TEÓRICO

A avicultura moderna exige a adoção de práticas que garantam não apenas a produtividade, mas também o bem-estar animal e a conformidade com padrões sanitários internacionais. Nesse contexto, o controle da qualidade do ar nos aviários, especialmente quanto à presença de gases tóxicos como a amônia (NH₃), torna-se uma prática essencial. A amônia é um subproduto natural da decomposição de matéria orgânica, como urina e fezes das aves, e sua concentração pode alcançar níveis nocivos à saúde dos animais e dos trabalhadores (CARVALHO, 2019).
Segundo Shepherd (2010), a presença de pododermatite — conhecida popularmente como “calo de pata” — é frequentemente associada à alta umidade da cama aviária e à concentração de amônia acima de 25 ppm, o que compromete a saúde das aves e reduz o valor comercial dos produtos exportáveis, como as patas de frango, especialmente em mercados exigentes como o chinês. Portanto, controlar a presença desse gás não é apenas uma questão sanitária, mas também econômica e estratégica para a sustentabilidade da cadeia avícola.
No campo da automação, o uso de microcontroladores de código aberto, como o Arduino Uno R3, aliado a sensores de baixo custo, como o MQ-135, tem se mostrado uma alternativa viável para o monitoramento ambiental em pequenas propriedades. O Arduino Uno R3, baseado no microcontrolador ATmega328P, permite o processamento de sinais provenientes de sensores e o acionamento de atuadores, além de possibilitar integração com sistemas IoT (TECNOTRONICS, 2025). Sua interface simples e comunidade ativa o tornam uma plataforma acessível para protótipos de sistemas embarcados voltados ao agronegócio familiar.
O sensor MQ-135, por sua vez, é um semicondutor sensível a gases como amônia, benzeno, dióxido de carbono, monóxido de carbono, entre outros. Sua operação se dá por meio da variação da resistência elétrica em um substrato de óxido de estanho (SnO₂), que responde à concentração dos gases presentes no ambiente (PORTAL VIDA DE SILÍCIO, 2021). Embora seja um sensor de baixo custo e fácil integração com microcontroladores, sua precisão depende de calibração rigorosa, uma vez que fatores como temperatura e umidade podem afetar as leituras (REDDIT, 2023-2024).
Diversos estudos têm explorado o uso do MQ-135 em ambientes controlados. Karar et al. (2020) desenvolveram o GASDUINO, um sistema de monitoramento da qualidade do ar urbano baseado em Arduino e sensores MQ, destacando sua aplicabilidade em contextos diversos. Em ambientes avícolas, Carvalho (2019) demonstrou a eficácia da combinação entre os sensores MQ-135 e MQ-137 na detecção de amônia, embora tenha ressaltado a necessidade de validação em campo e da compensação de variáveis ambientais.
Complementarmente, o portal Embarcados (2021) e a comunidade Instructables (2021) apresentaram projetos funcionais de monitoramento da qualidade do ar em granjas, utilizando Arduino Uno, sensores MQ e módulos visuais de alerta, como displays e LEDs, para emissão de notificações em tempo real. Esses trabalhos reforçam a viabilidade técnica do uso dessas tecnologias em pequenas propriedades, embora ainda se observe uma carência de estudos que promovam validações sistemáticas com dados quantitativos.
A relevância do presente estudo se evidencia nesse ponto: ao propor um sistema de detecção de amônia calibrado para operar com precisão em limites inferiores a 15 ppm, pretende-se fornecer uma solução eficaz para os pequenos produtores, contribuindo com a lacuna existente na literatura quanto à aplicação prática de sistemas de baixo custo com alta sensibilidade. Além disso, o trabalho reforça a importância da automação como aliada no controle ambiental, promovendo não apenas bem-estar animal, mas também segurança ocupacional e conformidade com padrões de exportação.

3. DESENVOLVIMENTO

A amônia (NH₃) é um gás de característica irritante, produzido principalmente pela decomposição de compostos nitrogenados presentes nas excretas de aves, como fezes e urina. Em ambientes de criação intensiva, como aviários, a concentração deste gás tende a se elevar, especialmente quando há acúmulo de umidade na cama, resultando em impactos negativos tanto na saúde respiratória dos animais quanto na dos trabalhadores (CARVALHO, 2019).
Para mitigar esses efeitos, o monitoramento constante da concentração de amônia nos aviários torna-se fundamental. Um dos sensores comumente utilizados para esse tipo de monitoramento é o MQ-135. Trata-se de um sensor semicondutor que apresenta variação de resistência elétrica conforme a concentração de diversos gases, incluindo amônia, dióxido de carbono, benzeno, fumaça, entre outros (PORTAL VIDA DE SILÍCIO, 2021). Seu princípio de funcionamento baseia-se em um filme sensível de óxido de estanho (SnO₂), cuja condutividade aumenta proporcionalmente à presença de gases poluentes. Contudo, apesar de ser uma alternativa de baixo custo, o MQ-135 apresenta limitações, tais como interferências por outros gases presentes no ambiente e sensibilidade a fatores como temperatura e umidade, o que exige calibração cuidadosa para garantir maior precisão nas medições (REDDIT, 2023-2024).
No campo da automação e monitoramento ambiental, o Arduino Uno R3 destaca-se como uma plataforma de prototipagem de baixo custo, de fácil programação e ampla aplicabilidade. Baseado no microcontrolador ATmega328P, o Arduíno Uno permite a leitura de sinais analógicos e digitais provenientes de sensores como o MQ-135, além de possibilitar o armazenamento de dados, acionamento de atuadores e integração com redes IoT para envio de alertas em tempo real (TECNOTRONICS, 2025).
Diversas pesquisas têm explorado o uso conjunto do Arduíno Uno R3 com o sensor MQ-135 para o monitoramento de gases. Carvalho (2019) desenvolveu uma rede de sensores voltada para o controle da concentração de amônia em aviários, utilizando os sensores MQ-135 e MQ-137. Seu estudo demonstrou que o MQ-135 apresentou melhor desempenho em relação à detecção de amônia, apesar das dificuldades encontradas com a estabilidade da rede de comunicação. A pesquisa também destacou a importância da calibração dos sensores e da compensação de variáveis ambientais como temperatura e umidade.
Projetos como o descrito no portal Embarcados (2021) e na comunidade Instructables (2021) apresentam exemplos práticos de monitoramento da qualidade do ar com o uso do MQ-135. Em especial, o projeto disponível no Instructables destaca a implementação de um sistema de alerta visual para controle da qualidade do ar em aviários, utilizando o Arduíno Uno e sensores adicionais como o DHT22 para aferição da temperatura e da umidade relativa.
No âmbito da Internet das Coisas (IoT), Karar et al. (2020) propuseram o GASDUINO, um sistema de monitoramento sem fio que utiliza o sensor MQ-135 para avaliar a qualidade do ar em ambientes urbanos. Embora o GASDUINO tenha sido desenvolvido com foco em áreas urbanas, seu princípio de funcionamento pode ser adaptado para aplicações em ambientes avícolas, demonstrando a versatilidade da tecnologia Arduíno combinada com sensores de baixo custo.
É importante ressaltar que, apesar dos avanços apresentados pelas soluções existentes, ainda existem lacunas na literatura no que diz respeito à validação quantitativa dos níveis de amônia detectados pelo MQ-135 em ambientes avícolas. A maioria dos trabalhos apresenta abordagens qualitativas ou com validação limitada, o que reforça a necessidade de estudos que considerem procedimentos rigorosos de calibração e validação em campo (REDDIT, 2023-2024; PORTAL VIDA DE SILÍCIO, 2021).
Neste contexto, o presente trabalho propõe o desenvolvimento de um sistema de monitoramento da concentração de amônia em aviários, utilizando a integração entre o sensor MQ-135 e a plataforma Arduíno Uno R3, com foco na calibração do equipamento e validação dos resultados em ambiente real de criação de frangos. A expectativa é que os resultados obtidos contribuam para a melhoria das condições ambientais nas granjas, promovendo bem-estar animal, saúde ocupacional e incremento na produtividade.
A tabela abaixo (Tabela 02), traz a relação dos componentes que foram utilizados na confecção da prototipagem de nosso sensor de gás de amônia:

Tabela 02: material utilizado na prototipagem.
Lista de material para a prototipagem
(a) Placa Arduíno Uno R3
(b) sensor mq-135
(c) junpers
(d) LED - 5v
(e) Cooler - 5v
(f) Fonte de tensão/cabo alimentação
(g) Sirene - 12v
(h) 3 LEDs - 3v
(i) 3 resistores – 100 Ohms ± 5% 
(j) 1protobord
(k) 1 módulo de display de LED 32x8


A imagem abaixo (imagem 01) mostra como ficou a montagem do nosso sensor. 







 
Imagem 01: prototipagem do sensor medidor de gás amônia, veja a tabela 02 para identificar cada elemento do sensor.

Para que o sensor possa funcionar de maneira adequada foi necessário criar o código para comandar o sensor, esse código foi escrito no programa Arduíno IDE Version: 2.3.6 / Date: 2025-04-09T11:26:55.498Z / CLI Version: 1.2.0 / Copyright © 2025 Arduíno SA. Segue abaixo o código.

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

A regulagem do sensor se dá por meio de uma chave seletora, que é um ajuste de sensibilidade (imagem 02) dessa forma regulando o potenciômetro conseguimos uma sensibilidade de 15 ~20 ppm de gás amônia no ar, sendo valores maiores que este o sensor será ligado e com isso a sirene, o LED e o display informando que está ocorrendo vazamento de gás de amônia. Esse acionamento emite um som alto indicando a necessidade de limpeza e remoção da cama dentro dos aviários. Garantindo a saúde dos aminais e com isso a evitando perdas comerciais.
   
Imagem 02 – sensor MQ - 135


3 CONCLUSÃO

O presente estudo teve como objetivo desenvolver um sistema de monitoramento de gás amônia voltado para granjas avícolas, utilizando o sensor MQ-135 acoplado à plataforma Arduino Uno R3, e calibrado para detectar concentrações a partir de 15 ppm. Esse objetivo foi plenamente alcançado, com a construção de um protótipo funcional, capaz de emitir alertas visuais e sonoros sempre que os níveis de gás atingirem valores prejudiciais à saúde das aves e dos trabalhadores.
Os principais resultados obtidos demonstraram que a solução proposta é de baixo custo, fácil implementação e capaz de atuar de maneira preventiva, antecipando a necessidade de troca da cama aviária antes que o gás atinja níveis críticos. Isso representa um avanço importante, sobretudo para pequenos produtores rurais que não dispõem de tecnologias industriais de controle ambiental.
A contribuição deste estudo para a área da automação rural e bem-estar animal reside na democratização do acesso a tecnologias de monitoramento, permitindo que sistemas simples, baseados em plataformas abertas como o Arduino, possam ser adaptados às condições de pequenas propriedades. Tais soluções têm o potencial de reduzir perdas econômicas e melhorar as condições sanitárias nas granjas.
Como limitação, destaca-se a necessidade de calibração rigorosa do sensor MQ-135, que pode apresentar variações na leitura em função de outros gases, temperatura e umidade do ambiente. Além disso, o sistema ainda não foi submetido a validações extensivas em campo em diferentes estações do ano ou em contextos variados de criação.
Recomenda-se que estudos futuros aprofundem a precisão do sistema por meio da incorporação de sensores complementares, como medidores de temperatura e umidade, bem como a integração com plataformas de Internet das Coisas (IoT), visando o armazenamento de dados em nuvem e análises preditivas.
Na prática, o uso desse sistema pode ser implementado em pequenas propriedades como ferramenta de apoio à gestão do ambiente aviário, contribuindo diretamente para a melhoria do bem-estar animal, segurança ocupacional e conformidade com exigências sanitárias internacionais. Em comparação com estudos anteriores, este projeto converge com os achados de Carvalho (2019) e iniciativas descritas no Instructables (2021), ao demonstrar a viabilidade do uso do sensor MQ-135 na avicultura, com um diferencial de ênfase na aplicabilidade direta para agricultura familiar.
 
REFERÊNCIAS

CARVALHO, Leandro Augusto de. Desenvolvimento de rede de sensores para monitoramento da concentração de gases em aviários. 2019. Dissertação (Mestrado em Tecnologias Computacionais para o Agronegócio) – Universidade Tecnológica Federal do Paraná, Medianeira, 2019. Disponível em: http://repositorio.utfpr.edu.br/jspui/handle/1/30847. Acesso em: 23 jun. 2025.
EMBARCADOS. Monitoramento da qualidade do ar com sensor MQ135. 2021. Disponível em: https://embarcados.com.br/projeto-monitoramento-da-qualidade-do-ar-com-sensor-mq135/. Acesso em: 23 jun. 2025.
INSTRUCTABLES. Monitoramento de temperatura, umidade e amônia em aviário com Arduino Uno. 2021. Disponível em: https://www.instructables.com/Monitoramento-De-Temperatura-Umidade-E-Am%C3%B4nia-Em-A/. Acesso em: 23 jun. 2025.
KARAR, M. E.; AL-MASAAD, A. M.; REYAD, O. GASDUINO – Wireless Air Quality Monitoring System Using Internet of Things. 2020. Disponível em: https://arxiv.org/abs/2005.04126. Acesso em: 23 jun. 2025.
PORTAL VIDA DE SILÍCIO. Sensor de gás MQ135 e a família de sensores MQ. 2021. Disponível em: https://portal.vidadesilicio.com.br/. Acesso em: 23 jun. 2025.
REDDIT. Discussões sobre calibração do MQ135. 2023-2024. Disponível em: https://www.reddit.com/r/arduino/. Acesso em: 23 jun. 2025.
SHEPHERD, E. M. Environmental impact on pododermatitis in poultry. Poultry Science, v. 89, n. 3, p. 204-209, 2010.
TECNOTRONICS. MQ-135 detector de gás – amônia, óxido nítrico, álcool. 2025. Disponível em: https://smartcomponentes.com.br/. Acesso em: 23 jun. 2025.
AGROCERES MULTIMIX. Impacto da ambiência sobre problemas respiratórios ligados ao gás amônia. Disponível em: https://agroceresmultimix.com.br/blog/impacto-da-ambiencia-sobre-problemas-respiratorios-ligados-ao-gas-amonia/. Acesso em: 30 JUN 2025
AGROCERES MULTIMIX. Impacto da ambiência sobre problemas respiratórios ligados ao gás amônia. 2023. Disponível em: https://agroceresmultimix.com.br/blog/impacto-da-ambiencia-sobre-problemas-respiratorios-ligados-ao-gas-amonia/. Acesso em: 30 jun 2025
CARVALHO, T. F.; MELO, V. B. Robô autônomo para monitoramento de gases. 2022. Monografia (Tecnologia em Mecatrônica Industrial) – Faculdade de Tecnologia de Santo André, FATEC Santo André.
FEDERAÇÃO DA AGRICULTURA E PECUÁRIA DE MATO GROSSO DO SUL – FAMASUL. Boletim de Avicultura: edição nº 8 – setembro/2024. Campo Grande: FAMASUL, 2024. Disponível em: https://portal.sistemafamasul.com.br/sites/default/files/boletimcasapdf/Boletim%20AVICULTURA%20-%20ED.08%20-%20SETEMBRO.2024.pdf. Acesso em: 03 jul. 2025.

