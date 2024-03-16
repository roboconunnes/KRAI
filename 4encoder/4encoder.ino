#include "KRAI_MotorESP32.h"

const int M1A = 23;
const int M1B = 22;
const int M1P = 21;

const int M2A = 19;
const int M2B = 18;
const int M2P = 5;

const int M3A = 17;
const int M3B = 16;
const int M3P = 4;

const int M4A = 0;
const int M4B = 2;
const int M4P = 15;

const int E1A = 34;
const int E1B = 35;
const int E2A = 32;
const int E2B = 33;
const int E3A = 25;
const int E3B = 26;
const int E4A = 27;
const int E4B = 14; 

int 
pos1, 
pos2, 
pos3, 
pos4;

KRAI_MotorESP32 motor1(M1A, M1B, M1P);
KRAI_MotorESP32 motor2(M2A, M2B, M2P);
KRAI_MotorESP32 motor3(M3A, M3B, M3P);
KRAI_MotorESP32 motor4(M4A, M4B, M4P);

void setup() {
  pinMode(E1A, INPUT_PULLUP);
  pinMode(E1B, INPUT_PULLUP);
  pinMode(E2A, INPUT_PULLUP);
  pinMode(E2B, INPUT_PULLUP);
  pinMode(E3A, INPUT_PULLUP);
  pinMode(E3B, INPUT_PULLUP);
  pinMode(E4A, INPUT_PULLUP);
  pinMode(E4B, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(E1A), readEncoder1, RISING);
  attachInterrupt(digitalPinToInterrupt(E2A), readEncoder2, RISING);
  attachInterrupt(digitalPinToInterrupt(E3A), readEncoder3, RISING);
  attachInterrupt(digitalPinToInterrupt(E4A), readEncoder4, RISING);
}

void loop() {
  Serial.print(pos1);Serial.print(" | ");
  Serial.print(pos2);Serial.print(" | ");
  Serial.print(pos3);Serial.print(" | ");
  Serial.println(pos4);

  delayMicroseconds(10);

  int w1 = pos1/56;
  int w2 = pos2/248;
  int w3 = pos3/57;
  int w4 = pos4/244;

  if(w1 < 5 && w2 < 5 && w3 < 5 && w4 < 5){
    motor1.run(1, 100);
    motor2.run(1, 100);
    motor3.run(1, 100);
    motor4.run(1, 100);
  } 
  else {
    motor1.run(1, 0);
    motor2.run(1, 0);
    motor3.run(1, 0);
    motor4.run(1, 0);
  }
}
