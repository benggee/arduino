// 模拟量输入

int analogPin = A0;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int rawReading = analogRead(analogPin);
  // Arduino 上标记为A0到A5的引脚可以测量施加在其上的电压，电压必须介于0~5v之间。
  // 内置的Arduino函数是analogRead，它返回0~1023之间的值，0时指0V,1023时指5V，
  // 因此这个数字如要转换成介于0~5之间的数值，你必须划分成1023/5 = 204.6

  // 如果 连接A0 - 5V  数值在5左右
  float volts = rawReading / 204.6;
  Serial.println(volts);
  delay(1000);
}
