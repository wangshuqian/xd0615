int i;
void setup()
{  for(i=0;i<8;i++)
   {
     pinMode(i, OUTPUT);
   }
}

void loop()
{
  for(i=0;i<4;i++)
  {
   digitalWrite(i, HIGH);
   digitalWrite(7-i,HIGH);
   delay(200); // Wait for 1000 millisecond(s)
   digitalWrite(i, LOW);
   digitalWrite(7-i,LOW);
   delay(200); // Wait for 1000 millisecond(s)
  }
}