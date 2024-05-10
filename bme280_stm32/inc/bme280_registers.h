#ifndef BME280_REGISTERS_H
#define BME280_REGISTERS_H

#define BME280_ID           0x60
#define BME280_RESET        0xE0
#define BME280_CTRL_HUM     0xF2

#define HUM_LSB             0xFE
#define HUM_MSB             0xFD
#define TEMP_XLSB           0xFC
#define TEMP_LSB            0xFB
#define TEMP_MSB            0xFA
#define PRESS_XLSB          0xF9
#define PRESS_LSB           0xF8
#define PRESS_MSB           0xF7
#define CONFIG              0xF5
#define CTRL_MEAS           0xF4
#define STATUS              0xF3 


#endif