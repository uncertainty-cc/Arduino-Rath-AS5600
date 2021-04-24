
#pragma once

namespace rath {

class PositionSensor {
  public:
    virtual void init();

    void set(double value) {
      setOffset(value - get());
    }

    void setScaleFactor(double scale) {
      _scale = scale;
    }

    void setOffset(double offset) {
      _offset = offset;
    }

    /**
     * @brief get the scaled sensor reading
     * 
     * @return double 
     */
    virtual double get();

    /**
     * @brief get the sensor reading range from -1.0 to 1.0
     * 
     * @return double 
     */
    virtual double getNormalized();

    /**
     * @brief get the sensor reading range in radian
     * 
     * @return double 
     */
    virtual double getRadian();

  protected:
    double _offset = 0;
    double _scale = 1;
};

}
