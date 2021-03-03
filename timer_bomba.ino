int rele = 0;// define um pino de saída para controle do rele shield

void setup() {
  pinMode(rele, OUTPUT);// define a variavel "rele" como saida
  digitalWrite(rele, HIGH); //inicia em modo de saida alto pois o arduino fica normalmente desligado, deste forma nao atraca o rele e desliga toda vez que for iniciado.
}

void loop() {

     digitalWrite(rele, HIGH);// inicia com o pino de saida em modo alto, mas com o rele desligado.
     delay(900000);// aguarda o tempo em ms, algo proximo de 15 minutos

     digitalWrite(rele, LOW);// coloca um nivel baixo de tensao na saida para o rele shield, acionando o mesmo.
     delay(5000);// aguarda um tempo qualquer para mudar o estado da saida novamente, mudando o estado do rele novamente.
   
}