#define IN1 2
#define IN2 3
#define IN3 4
#define IN4 5

#define S1 8
#define S2 9
#define S3 10
#define S4 11

#define LT 6
#define BT 7
void setup()
{
  pinMode(IN1, OUTPUT);//输入1
  pinMode(IN2, OUTPUT);//输入2
  pinMode(IN3, OUTPUT);//输入3
  pinMode(IN4, OUTPUT);//输入4
  pinMode(S1, OUTPUT);//片选1
  pinMode(S2, OUTPUT);//片选2
  pinMode(S3, OUTPUT);//片选3
  pinMode(S4, OUTPUT);//片选4
  
  pinMode(LT,OUTPUT);//测试
  pinMode(BT,OUTPUT);//消隐
  
  digitalWrite(LT,HIGH);
  digitalWrite(BT,HIGH);
  
  digitalWrite(S1,HIGH);
  digitalWrite(S2,HIGH);
  digitalWrite(S3,HIGH);
  digitalWrite(S4,HIGH);
  Serial.begin(9600);

};
byte income=0;
byte temp[4];
String receive="";
void loop()
{   
 while(Serial.available()>0)
 {
   receive+=char(Serial.read());
   delay(3);
  
  for(int i=0;i<4;i++)
  {
    temp[i]=int(receive[i]);
    Serial.println(temp[i]);
    switch (i)
    {
      case 0:
        digitalWrite(S1,LOW);   
      case 1:
      digitalWrite(S2,LOW);
      case 2:
      digitalWrite(S3,LOW);
 
      case 3:
      digitalWrite(S4,LOW);  
    };
     income=temp[i]-'0';  
     digitalWrite(2,income&0x1);
    digitalWrite(3,(income>>1)&0x1);
    digitalWrite(4,(income>>2)&0x1);
    digitalWrite(5,(income>>3)&0x1);
    digitalWrite(S1,HIGH);
    digitalWrite(S2,HIGH);
    digitalWrite(S3,HIGH);
    digitalWrite(S4,HIGH);
    delay(4);
  }  
 }
     receive=""; 
}   