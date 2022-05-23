//===========================================================================TODOS OS VALORES SÃO DEMONSTRATIVOS===============================================================================          


int in1 = 5;       //definição das portas dos motores (baseando em microdriver de motor padrão)
int in2 = 6; 
int in3 = 7;
int in4 = 8;

int pwma = 9;     //força motor direita
int pwmb = 10;    //força motor esquerda

int movimento[] = {1, 2, 3, 4, 5};                      //reto = 1 esq = 2 dir = 3 tras = 4 parar = 5


int sensor[] = {0, 1, 2};      //leitura sensores
int psensor[] = {A0, A1, A2};   //portas sensores


int erro;
int integral;
int derivado;
int lasterro;
int turn;


int marcacao = 0;     //variavel que fará o robo parar

void setup() {
  
Serial.begin(9600);

pinMode(psensor[0], INPUT);    
pinMode(psensor[1], INPUT);
pinMode(psensor[2], INPUT);



pinMode(in[0], OUTPUT);
pinMode(in[1], OUTPUT);
pinMode(in[2], OUTPUT);
pinMode(in[3], OUTPUT);

pinMode(pwma, OUTPUT);
pinMode(pwmb, OUTPUT);

}

void loop (){
 
while (marcacao < 2) {                     //se o robo ler duas marcações, sai do loop while e para de seguir linha
atsensor();  
                
  if (sensor[2] < 50){ marcacao += 1;}     //se o robo ler a marcação, aumentará uma unidade em "marcacao"

  pid(1, 0, 0);                            //faz as contas do pid
  
  }

mover(4, 0, 0);                           //para o robo
  
} 
