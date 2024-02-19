void readEncoder1(){
  if(digitalRead(E1A) == digitalRead(E1B)){
    pos1--;
  }
  else{
    pos1++;
  }
}

void readEncoder2(){
  if(digitalRead(E2A) == digitalRead(E2B)){
    pos2--;
  }
  else{
    pos2++;
  }
}

void readEncoder3(){
  if(digitalRead(E3A) == digitalRead(E3B)){
    pos3--;
  }
  else{
    pos3++;
  }
}

void readEncoder4(){
  if(digitalRead(E4A) == digitalRead(E4B)){
    pos4--;
  }
  else{
    pos4++;
  }
}