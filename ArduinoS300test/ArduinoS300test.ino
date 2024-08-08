//for Arduino UNO or MEGA R3
//S-300 I2C test program
//s300i2c.h can get from https://github.com/mhorimoto/ELT_S300_HOLLY
#include "s300i2c.h"
#include <Wire.h>
S300I2C s3(Wire);

void setup() {
  Serial.begin(9600);
  Wire.begin();
  s3.begin(S300I2C_ADDR);
  delay(3000);
  Serial.println("START S300I2C");
}

void loop() {
  unsigned int co2;
  co2 = s3.getCO2ppm();
  Serial.print("CO2=");
  Serial.println(co2);
  delay(3000);
}
