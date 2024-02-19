#define M1A 23
#define M1B 22
#define M2A 21
#define M2B 19
#define M3A 18
#define M3B 5
#define M4A 17
#define M4B 16

#define MP1 4
#define MP2 0
#define MP3 2
#define MP4 15

#define E1A 12
#define E1B 13
#define E2A 32
#define E2B 33
#define E3A 25
#define E3B 26
#define E4A 27
#define E4B 14 

int pinMotor[12] = {23,22,21,19,18,5,17,16,4,0,2,15};

int pos1, pos2, pos3, pos4;

void setup() {
  Serial.begin(115200);

  for (int i=0; i<12; i++){
    pinMode(pinMotor[i], OUTPUT);
  }

  ledcSetup(0, 5000, 8);
  ledcAttachPin(MP1, 0);
  ledcAttachPin(MP2, 0);
  ledcAttachPin(MP3, 0);
  ledcAttachPin(MP4, 0);

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
  Serial.print(pos1);Serial.print("|");
  Serial.print(pos2);Serial.print("|");
  Serial.print(pos3);Serial.print("|");
  Serial.println(pos4);

  int O1 = pos1/56;
  int O2 = pos2/248;
  int O3 = pos3/57;
  int O4 = pos4/244;

  if (O1 < 1 && O2 < 1 && O3 < 1 && O4 < 1){
    motor(255,255,255,255);
  } else {
    motor(0,0,0,0);
  }
}
