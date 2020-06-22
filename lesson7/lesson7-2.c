#include <MsTimer2.h>     //定时器库的头文件
int tick = 0; //计数值
int temp;
int pinInterrupt=2;
//中断服务程序
void onTimer()
{ 
  Serial.print("timer ");
  tick++;
  Serial.println(tick);
  temp=tick-'0';
  digitalWrite(3,temp&0x1);
    digitalWrite(4,(temp>>1)&0x1);
    digitalWrite(5,(temp>>2)&0x1);
    digitalWrite(6,(temp>>3)&0x1);
}
void Onchange()
{
  tick=0;
}
 
void setup()
{ 
  Serial.begin(9600); //初始化串口
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  digitalWrite(8,HIGH);
  digitalWrite(9,HIGH);
  MsTimer2::set(800, onTimer); //设置中断，每1000ms进入一次中断服务程序 onTimer
  MsTimer2::start(); //开始计时
  attachInterrupt( digitalPinToInterrupt(pinInterrupt), Onchange, CHANGE);
  
}
 
void loop()
{
  
}
