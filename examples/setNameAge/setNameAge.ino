#include <DFRobot_gxy.h> //引入头文件

void setup(void){
  Serial.begin(115200);  //初始化串口
  delay(100);
  DFRobot_gxy gxy;         //建立对象
  gxy.setName("zhangsan");gxy.setAge(18);//进行赋值
  Serial.print("name=");Serial.println(gxy.getName()); //打印和取值
  Serial.print("age=");Serial.println(gxy.getAge());
}

void loop(void){
  
}