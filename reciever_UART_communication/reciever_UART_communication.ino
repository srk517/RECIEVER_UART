#include <SoftwareSerial.h>
SoftwareSerial softSerial(10, 11);
char ip;
void setup()  
{
  softSerial.begin(9600);
} 
void loop()  
{ 
  if (softSerial.available())
  {
    ip=softSerial.read();
    softSerial.print(ip);
  }
}
/*char str[10];
void setup()
{
  Serial.begin(115200);
}
void loop()
{

 Serial.readBytes(str,10);
 Serial.println(str);
 delay(1000); 

}
/*
/*int bs=10;
char get_data[10];
String s;
void setup()
{
  Serial.begin(115200);
}
void loop()
{
  if(Serial.available()>0)
  {
    Serial.readBytes(get_data,10);
     for(int i=0;i<bs;i++)
    {
      Serial.print(get_data[i]);
    }
    delay(1000);
    
  }
  while(Serial.available())
  {
  Serial.readBytes(get_data,10);
  }
  for(int i=0;i<bs;i++)
  {
  Serial.print(get_data[i]);
  }
  delay(1000);*/
//}
