void motor(int M1, int M2, int M3, int M4)
{
  if(M1 > 0)
  {
    digitalWrite(M1A, HIGH);
    digitalWrite(M1B, LOW); 
    ledcWrite(0, M1);
  }
  else if(M1 < 0)
  {
    digitalWrite(M1A, LOW);
    digitalWrite(M1B, HIGH); 
    ledcWrite(0, -M1);
  }
  else
  {
    digitalWrite(M1A, LOW);
    digitalWrite(M1B, LOW); 
    ledcWrite(0, M1);
  }
  
  if(M2 > 0)
  {
    digitalWrite(M2A, HIGH);
    digitalWrite(M2B, LOW); 
    ledcWrite(0, M2);
  }
  else if(M2 < 0)
  {
    digitalWrite(M2A, LOW);
    digitalWrite(M2B, HIGH); 
    ledcWrite(0, -M2);
  }
  else
  {
    digitalWrite(M2A, LOW);
    digitalWrite(M2B, LOW); 
    ledcWrite(0, M2);
  }
  
  if(M3 > 0)
  {
    digitalWrite(M3A, HIGH);
    digitalWrite(M3B, LOW); 
    ledcWrite(0, M3);
  }
  else if(M3 < 0)
  {
    digitalWrite(M3A, LOW);
    digitalWrite(M3B, HIGH); 
    ledcWrite(0, -M3);
  }
  else
  {
    digitalWrite(M3A, LOW);
    digitalWrite(M3B, LOW); 
    ledcWrite(0, M3);
  }
    
  if(M4 > 0)
  {
    digitalWrite(M4A, HIGH);
    digitalWrite(M4B, LOW); 
    ledcWrite(0, M4);
  }
  else if(M4 < 0)
  {
    digitalWrite(M4A, LOW);
    digitalWrite(M4B, HIGH); 
    ledcWrite(0, -M4);
  }
  else
  {
    digitalWrite(M4A, LOW);
    digitalWrite(M4B, LOW); 
    ledcWrite(0, M4);
  }
}