/*
* Projeto caixa inútil - Unsless box
* Projeto desenvolvido por Venancio Miranda e Proesi Componentes*/

#include <Servo.h>
#define enablePin  11
#define botao      10
#define servo_pata  9
#define servo_tampa 8

// Posições da tampa

#define fecha   152
#define meio     70
#define abre      0
#define bate    165
#define fresta  140
#define Tbatida 100

// Posições pata

#define guarda 180
#define aceno   60
#define desl    10

boolean limite = true;
int count = 0, button = 0 , enable = 0;

Servo pata;
Servo tampa;

// Função que orienta posição dos servos e delay entre nova movimentação

void comando (Servo nome_servo,int grau ,int tempo)

{
nome_servo.write(grau);
delay(tempo);
}

void setup()
{
pinMode(botao , INPUT_PULLUP);
pinMode(enablePin , OUTPUT);
digitalWrite(enablePin,LOW);
pata.attach(servo_pata);
tampa.attach(servo_tampa);
}

void loop()
{
while(limite)                     //While que executa limite de execuções
{
digitalWrite(enablePin,LOW);
button = digitalRead(botao);

if(button == LOW)
{
switch(count)                 // contagem e sequencia dos movimentos
{
case 0:
digitalWrite(enablePin,HIGH);
delay(500);
comando(tampa , abre , 750);
comando(pata , desl, 1000);
comando(pata , guarda , 1000);
comando(tampa, fecha , 2000);
count++;
break;

case 1:
digitalWrite(enablePin,HIGH);
delay(1000);
comando(tampa , meio, 2000);
comando(tampa, fecha, 1000);
comando(tampa , abre , 1000);
comando(pata , desl, 1000);
comando(pata , guarda , 1000);
comando(tampa, fecha , 2000);
count++;
break;

case 2:
digitalWrite(enablePin,HIGH);
delay(2000);
comando(tampa , fresta , Tbatida);
comando(tampa , bate   , Tbatida);
comando(tampa , fresta , Tbatida);
comando(tampa , bate   , Tbatida);
comando(tampa , fresta , Tbatida);
comando(tampa , bate   , Tbatida);
comando(tampa , fresta , Tbatida);
comando(tampa , bate   , Tbatida);
comando(tampa , fresta , Tbatida);
comando(tampa , bate   , Tbatida);
comando(tampa , fresta , Tbatida);
comando(tampa , bate   , Tbatida);
comando(tampa , fresta , Tbatida);
comando(tampa , bate   , Tbatida);
comando(tampa , fresta , Tbatida);
comando(tampa , bate   , Tbatida);
comando(tampa , abre , 1000);
comando(pata , desl, 1000);
comando(pata,aceno,300);
comando(pata,desl,300);
comando(pata,aceno,300);
comando(pata,desl,300);
comando(pata,aceno,300);
comando(pata,desl,2000);
comando(pata , guarda , 1000);
comando(tampa, fecha , 2000);
count++;
break;

case 3:
digitalWrite(enablePin,HIGH);
delay(3000);
comando(tampa , abre , 750);
comando(pata , desl, 1000);
comando(pata , guarda , 1000);
comando(tampa, fecha , 1500);
comando(tampa , abre , 1500);
comando(pata,desl,300);
comando(pata,aceno,300);
comando(pata,desl,300);
comando(pata,aceno,300);
comando(pata,desl,2000);
comando(pata,guarda,1000);
comando(tampa, fecha , 2000);
comando(tampa , meio, 2000);
comando(tampa, fecha, 1000);
count++;
break;

case 4:
digitalWrite(enablePin,HIGH);
comando(tampa , fresta , Tbatida);
comando(tampa , bate   , Tbatida);
comando(tampa , fresta , Tbatida);
comando(tampa , bate   , Tbatida);
comando(tampa , fresta , Tbatida);
comando(tampa , bate   , Tbatida);
comando(tampa , fresta , Tbatida);
comando(tampa , bate   , Tbatida);
comando(tampa , fresta , Tbatida);
comando(tampa , bate   , Tbatida);
comando(tampa , fresta , Tbatida);
comando(tampa , bate   , Tbatida);
comando(tampa , fresta , Tbatida);
comando(tampa , bate   , Tbatida);
comando(tampa , fresta , Tbatida);
comando(tampa , bate   , Tbatida);
comando(tampa , fresta , Tbatida);
comando(tampa , bate   , Tbatida);
comando(tampa , fresta , Tbatida);
comando(tampa , bate   , Tbatida);
comando(tampa , fresta , Tbatida);
comando(tampa , bate   , Tbatida);
comando(tampa , fresta , Tbatida);
comando(tampa , bate   , Tbatida);
comando(tampa , fresta , Tbatida);
comando(tampa , bate   , Tbatida);
comando(tampa , fresta , Tbatida);
comando(tampa , bate   , Tbatida);
comando(tampa , fresta , Tbatida);
comando(tampa , bate   , Tbatida);
comando(tampa , fresta , Tbatida);
comando(tampa , bate   , Tbatida);
comando(tampa, abre, 750);
comando(tampa, bate, 750);
comando(tampa, abre, 1250);
comando(pata , desl, 1000);
comando(pata , guarda , 1000);
comando(tampa, fecha , 2000);
limite = false;                         //encerra while
break;

}

}

}

}
