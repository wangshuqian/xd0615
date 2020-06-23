/*
模拟输入串行输出：就是从arduino的输入口读取模拟输入，范围为0-1023，
然后再将模拟输入的值转换为模拟输出，其范围为0-255.再利用这个数据来
处理PWM
*/
int sensorValue = 0;
//定义模拟输入的变量初始值为0；
int outputValue = 0;
//定义模拟输出的变量初始值为0；
void setup()
{
  pinMode(A0, INPUT);//将A0引脚设置为模拟输入引脚
  pinMode(9, OUTPUT);//将PWM的9号引脚设置为模拟输出引脚
  Serial.begin(9600);//串口通信
}

void loop()
{
  sensorValue = analogRead(A0);
  //analogRead(模拟输入引脚)来读取模拟输入的值--范围为0-1023；并把这个值放到sensorvalue这个变量
  outputValue = map(sensorValue, 0, 1023, 0, 255);
  // map函数，将模拟输入的值sensorValue从0到1023这个范围变换到PWM模拟可以输出的范围
  analogWrite(9, outputValue);
  // 利用analogWrite（输出引脚，输出值）；来将Outputvalue的模拟值输出
  Serial.print("sensor = ");
  Serial.print(sensorValue);
  Serial.print("\t output = ");
  Serial.println(outputValue);
 //在串口中，输出模拟输入的值和模拟输出的值
  delay(2); // Wait for 2 millisecond(s)
}