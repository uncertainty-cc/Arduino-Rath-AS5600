
#pragma once

#include "Rath_HAL.h"
#include "PositionSensor.h"

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif
#ifndef M_2PI
#define M_2PI 6.28318530717958647692
#endif

#define AS5600_I2C_ADDR             0x36U

#define AS5600_ZMCO_ADDR             0x00U
#define AS5600_ZPOS_L_ADDR           0x01U
#define AS5600_ZPOS_H_ADDR           0x02U
#define AS5600_MPOS_L_ADDR           0x03U
#define AS5600_MPOS_H_ADDR           0x04U
#define AS5600_MANG_L_ADDR           0x05U
#define AS5600_MANG_H_ADDR           0x06U
#define AS5600_CONF_L_ADDR           0x07U
#define AS5600_CONF_H_ADDR           0x08U
#define AS5600_RAW_ANGLE_L_ADDR      0x0CU
#define AS5600_RAW_ANGLE_H_ADDR      0x0DU
#define AS5600_ANGLE_L_ADDR          0x0EU
#define AS5600_ANGLE_H_ADDR          0x0FU
#define AS5600_STATUS_ADDR           0x0BU
#define AS5600_AGC_ADDR              0x1AU
#define AS5600_MAGNITUDE_L_ADDR      0x1BU
#define AS5600_MAGNITUDE_H_ADDR      0x1CU
#define AS5600_BURN_ADDR             0xFFU

#define AS5600_ZMCO_ZMCO_POS          0x0U
#define AS5600_ZMCO_ZMCO_MSK          (0x03U << AS5600_ZMCO_ZMCO_POS)
#define AS5600_ZPOS_L_ZPOS_11_8_POS   0x0U
#define AS5600_ZPOS_L_ZPOS_11_8_MSK   (0x0FU << AS5600_ZPOS_L_ZPOS_11_8_POS)
#define AS5600_ZPOS_H_ZPOS_7_0_POS    0x0U
#define AS5600_ZPOS_H_ZPOS_7_0_MSK    (0xFFU << AS5600_ZPOS_H_ZPOS_7_0_POS)
#define AS5600_MPOS_L_MPOS_11_8_POS   0x0U
#define AS5600_MPOS_L_MPOS_11_8_MSK   (0x0FU << AS5600_MPOS_L_MPOS_11_8_POS)
#define AS5600_MPOS_H_MPOS_7_0_POS    0x0U
#define AS5600_MPOS_H_MPOS_7_0_MSK    (0xFFU << AS5600_MPOS_H_MPOS_7_0_POS)
#define AS5600_MANG_L_MANG_11_8_POS   0x0U
#define AS5600_MANG_L_MANG_11_8_MSK   (0x0FU << AS5600_MANG_L_MANG_11_8_POS)
#define AS5600_MANG_H_MANG_7_0_POS    0x0U
#define AS5600_MANG_H_MANG_7_0_MSK    (0xFFU << AS5600_MANG_H_MANG_7_0_POS)
#define AS5600_CONF_L_SF_POS          0x0U
#define AS5600_CONF_L_SF_MSK          (0x03U << AS5600_CONF_L_SF_POS)
#define AS5600_CONF_L_FTH_POS         0x2U
#define AS5600_CONF_L_FTH_MSK         (0x07U << AS5600_CONF_L_FTH_POS)
#define AS5600_CONF_L_WD_POS          0x5U
#define AS5600_CONF_L_WD_MSK          (0x01U << AS5600_CONF_L_WD_POS)
#define AS5600_CONF_H_PM_POS          0x0U
#define AS5600_CONF_H_PM_MSK          (0x03U << AS5600_CONF_H_PM_POS)
#define AS5600_CONF_H_HYST_POS        0x2U
#define AS5600_CONF_H_HYST_MSK        (0x03U << AS5600_CONF_H_HYST_POS)
#define AS5600_CONF_H_OUTS_POS        0x4U
#define AS5600_CONF_H_OUTS_MSK        (0x03U << AS5600_CONF_H_OUTS_POS)
#define AS5600_CONF_H_PWMF_POS        0x6U
#define AS5600_CONF_H_PWMF_MSK        (0x03U << AS5600_CONF_H_PWMF_POS)

#define AS5600_RAW_ANGLE_L_RAW_ANGLE_11_8_POS   0x0U
#define AS5600_RAW_ANGLE_L_RAW_ANGLE_11_8_MSK   (0x0FU << AS5600_RAW_ANGLE_L_RAW_ANGLE_11_8_POS)
#define AS5600_RAW_ANGLE_H_RAW_ANGLE_7_0_POS    0x0U
#define AS5600_RAW_ANGLE_H_RAW_ANGLE_7_0_MSK    (0xFFU << AS5600_RAW_ANGLE_H_RAW_ANGLE_7_0_POS)
#define AS5600_ANGLE_L_ANGLE_11_8_POS           0x0U
#define AS5600_ANGLE_L_ANGLE_11_8_MSK           (0x0FU << AS5600_ANGLE_L_ANGLE_11_8_POS)
#define AS5600_ANGLE_H_ANGLE_7_0_POS            0x0U
#define AS5600_ANGLE_H_ANGLE_7_0_MSK            (0xFFU << AS5600_ANGLE_H_ANGLE_7_0_POS)

#define AS5600_STATUS_MH_POS          0x3U
#define AS5600_STATUS_MH_MSK          (0x01U << AS5600_STATUS_MH_POS)
#define AS5600_STATUS_ML_POS          0x4U
#define AS5600_STATUS_ML_MSK          (0x01U << AS5600_STATUS_ML_POS)
#define AS5600_STATUS_MD_POS          0x5U
#define AS5600_STATUS_MD_MSK          (0x01U << AS5600_STATUS_MD_POS)
#define AS5600_AGC_AGC_POS            0x0U
#define AS5600_AGC_AGC_MSK            (0xFFU << AS5600_AGC_AGC_POS)
#define AS5600_MAGNITUDE_L_MAGNITUDE_11_8_POS           0x0U
#define AS5600_MAGNITUDE_L_MAGNITUDE_11_8_MSK           (0x0FU << AS5600_MAGNITUDE_L_MAGNITUDE_11_8_POS)
#define AS5600_MAGNITUDE_H_MAGNITUDE_7_0_POS            0x0U
#define AS5600_MAGNITUDE_H_MAGNITUDE_7_0_MSK            (0xFFU << AS5600_MAGNITUDE_H_MAGNITUDE_7_0_POS)

#define AS5600_BURN_BURN_POS            0x0U
#define AS5600_BURN_BURN_MSK            (0xFFU << AS5600_BURN_BURN_POS)


namespace rath {

class AS5600 : public PositionSensor {
  public:
    enum PowerMode {
      POWERMODE_NOM  = (0b00 << AS5600_CONF_H_PM_POS),
      POWERMODE_LPM1 = (0b01 << AS5600_CONF_H_PM_POS),
      POWERMODE_LPM2 = (0b10 << AS5600_CONF_H_PM_POS),
      POWERMODE_LPM3 = (0b11 << AS5600_CONF_H_PM_POS),
      POWERMODE_NORMAL = POWERMODE_NOM,
    };

    enum Hysteresis {
      HYSTERESIS_OFF = (0b00 << AS5600_CONF_H_HYST_POS),
      HYSTERESIS_1_LSB = (0b01 << AS5600_CONF_H_HYST_POS),
      HYSTERESIS_2_LSB = (0b10 << AS5600_CONF_H_HYST_POS),
      HYSTERESIS_3_LSB = (0b11 << AS5600_CONF_H_HYST_POS),
    };
    
    enum OutputMode {
      OUTPUTMODE_ANALOG_FULL = (0b00 << AS5600_CONF_H_OUTS_POS),  /** full range from 0% to 100% between GND and VDD */
      OUTPUTMODE_ANALOG_REDUCED = (0b01 << AS5600_CONF_H_OUTS_POS),  /** reduced range from 10% to 90% between GND and VDD */
      OUTPUTMODE_PWM = (0b10 << AS5600_CONF_H_OUTS_POS),
    };

    enum PWMFrequency {
      PWMFREQUENCY_115_HZ = (0b00 << AS5600_CONF_H_PWMF_POS),
      PWMFREQUENCY_230_HZ = (0b01 << AS5600_CONF_H_PWMF_POS),
      PWMFREQUENCY_460_HZ = (0b10 << AS5600_CONF_H_PWMF_POS),
      PWMFREQUENCY_920_HZ = (0b11 << AS5600_CONF_H_PWMF_POS),
    };

    enum SlowFilter {
      SLOWFILTER_16X  = (0b00 << AS5600_CONF_L_SF_POS),
      SLOWFILTER_8X = (0b01 << AS5600_CONF_L_SF_POS),
      SLOWFILTER_4X = (0b10 << AS5600_CONF_L_SF_POS),
      SLOWFILTER_2X = (0b11 << AS5600_CONF_L_SF_POS),
    };

    enum FastFilterThreshold {
      FASTFILTERTHRESHOLD_SLOW_ONLY = (0b000 << AS5600_CONF_L_FTH_POS),
      FASTFILTERTHRESHOLD_6_LSB = (0b001 << AS5600_CONF_L_FTH_POS),
      FASTFILTERTHRESHOLD_7_LSB = (0b010 << AS5600_CONF_L_FTH_POS),
      FASTFILTERTHRESHOLD_9_LSB = (0b011 << AS5600_CONF_L_FTH_POS),
      FASTFILTERTHRESHOLD_18_LSB = (0b100 << AS5600_CONF_L_FTH_POS),
      FASTFILTERTHRESHOLD_21_LSB = (0b101 << AS5600_CONF_L_FTH_POS),
      FASTFILTERTHRESHOLD_24_LSB = (0b110 << AS5600_CONF_L_FTH_POS),
      FASTFILTERTHRESHOLD_10_LSB = (0b111 << AS5600_CONF_L_FTH_POS),
    };

    enum Watchdog {
      WATCHDOG_OFF  = (0b0 << AS5600_CONF_L_WD_POS),
      WATCHDOG_ON = (0b1 << AS5600_CONF_L_WD_POS),
    };

    enum MagnetStatus {
      MAGNET_TOO_STRONG = (0b1 << AS5600_STATUS_MH_POS),
      MAGNET_TOO_WEAK = (0b1 << AS5600_STATUS_ML_POS),
      MAGNET_DETECTED  = (0b1 << AS5600_STATUS_MD_POS),
    };

    void init() {
      HAL_RCU_enablePeriphClock(RCU_GPIOB);
      HAL_RCU_enablePeriphClock(RCU_I2C0);

      GPIO_InitTypeDef gpio_init_struct;
      gpio_init_struct.pin = (GPIO_Pin)(GPIO_PIN_6 | GPIO_PIN_7);
      gpio_init_struct.mode = GPIO_MODE_AF_OD;
      gpio_init_struct.speed = GPIO_SPEED_50MHZ;
      gpio_init_struct.pull = GPIO_PULL_NONE;
      HAL_GPIO_init(GPIOB, &gpio_init_struct);

      HAL_I2C_disable(I2C0);
    
      I2C_InitTypeDef I2C0_init_struct;
      I2C0_init_struct.mode = I2C_MODE_I2C;
      I2C0_init_struct.clock_speed = 100000;  // default to use I2C Standard Mode 100kHz clock freq, maximum for AS5600 is 1MHz
      I2C0_init_struct.duty_cycle = I2C_DUTYCYCLE_2;
      I2C0_init_struct.address_format = I2C_ADDRESSFORMAT_7BITS;
      I2C0_init_struct.address = 0x0U;
      HAL_I2C_init(I2C0, &I2C0_init_struct);
      
      HAL_I2C_enable(I2C0);
    }

    double get() {
      return getNormalized() * M_PI;
    }
    
    double getNormalized() {
      return (getAngle() / 2048.) - 1.;
    }

    void setTimeout(int timeout) {
      _timeout = (uint32_t)timeout;
    }

    uint16_t getAngle() {
      uint8_t buffer;
      uint16_t value;
      HAL_I2C_readMemory(I2C0, AS5600_I2C_ADDR, AS5600_ANGLE_L_ADDR, &buffer, sizeof(uint8_t), _timeout);
      value = READ_BITS(buffer, AS5600_ANGLE_L_ANGLE_11_8_MSK) << 8U;

      HAL_I2C_readMemory(I2C0, AS5600_I2C_ADDR, AS5600_ANGLE_H_ADDR, &buffer, sizeof(uint8_t), _timeout);
      value |= READ_BITS(buffer, AS5600_ANGLE_H_ANGLE_7_0_MSK);

      return value;
    }

    void setOutputMode(OutputMode mode) {
      uint8_t buffer;
      HAL_I2C_readMemory(I2C0, AS5600_I2C_ADDR, AS5600_CONF_H_ADDR, &buffer, sizeof(uint8_t), _timeout);
      CLEAR_BITS(buffer, AS5600_CONF_H_OUTS_MSK);
      SET_BITS(buffer, (uint32_t)mode);
      HAL_I2C_writeMemory(I2C0, AS5600_I2C_ADDR, AS5600_CONF_H_ADDR, &buffer, sizeof(uint8_t), _timeout);
    }

    void setPWMFrequency(PWMFrequency freq) {
      uint8_t buffer;
      HAL_I2C_readMemory(I2C0, AS5600_I2C_ADDR, AS5600_CONF_H_ADDR, &buffer, sizeof(uint8_t), _timeout);
      CLEAR_BITS(buffer, AS5600_CONF_H_PWMF_MSK);
      SET_BITS(buffer, (uint32_t)freq);
      HAL_I2C_writeMemory(I2C0, AS5600_I2C_ADDR, AS5600_CONF_H_ADDR, &buffer, sizeof(uint8_t), _timeout);
    }

  private:
    uint32_t _timeout = 0;
};

}