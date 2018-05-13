// Wire Master Writer
// by Nicholas Zambetti <http://www.zambetti.com>

// Demonstrates use of the Wire library
// Writes data to an I2C/TWI slave device
// Refer to the "Wire Slave Receiver" example for use with this

// Created 29 March 2006

// This example code is in the public domain.


#include <Wire.h>

// I2Cアドレス
#define DRV_ADR   0x64  // DRV8830のI2Cアドレス
#define CTR_ADR   0x00  // CONTROLレジスタのサブアドレス
#define FLT_ADR   0x01  // FAULTレジスタのアドレス

// ブリッジ制御
#define M_STANBY  B00   // スタンバイ   
#define M_REVERSE B01   // 逆転
#define M_NORMAL  B10   // 正転
#define M_BRAKE   B11   // ブレーキ

// 電圧定義
#define MIN_VSET 0x26   // 0.72V

void setup()
{
  Serial.begin(9600);
  Wire.begin(); // join i2c bus (address optional for master)

  Serial.println("BEGIN1");
  
  Wire.beginTransmission(DRV_ADR);
  //    uint8_t dt[2];
  //    dt[0] = CTR_ADR;
  //    dt[1] = (0x26 << 2) + M_STANBY;
  //     Wire.write((int)DRV_ADR, (char *)dt, 2);
  Wire.write((byte)CTR_ADR);
  Wire.write((0x26 << 2) + M_STANBY);
  Wire.endTransmission();

  Serial.println("BEGIN2");
}

//byte x = 0;

void loop()
{
  //  Wire.beginTransmission(DRV_ADR>>1); // transmit to device #4
  //  Wire.write("x is ");        // sends five bytes
  //  Wire.write(x);              // sends one byte
  //  Wire.endTransmission();    // stop transmitting
  //
  //  x++;
  //  delay(500);
  Wire.beginTransmission(DRV_ADR);
  //    uint8_t dt[2];
  //    dt[0] = CTR_ADR;
  //    dt[1] = (0x26 << 2) + M_STANBY;
  //     Wire.write((int)DRV_ADR, (char *)dt, 2);
  Wire.write((byte)CTR_ADR);
  Wire.write((0x3F << 2) + M_NORMAL);
  Wire.endTransmission();

  Serial.println("LOOP");
  delay(1000);
}
