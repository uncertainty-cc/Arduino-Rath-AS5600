
#pragma once

namespace rath {

class PositionSensor {
  public:
    virtual void init();

    /**
     * @brief set the sensor position offset, in radian
     * 
     * @return double 
     */
    void set(double val) {
      _offset = val - get();
    }
    
    /**
     * @brief get the sensor reading in radian
     * 
     * @return double 
     */
     double get() {
       return _get() + _offset;
     }

    /**
     * @brief get the sensor reading in radian
     * 
     * @return double 
     */
    double getRadian() {
      return get();
    }

    /**
     * @brief get the sensor reading in radian
     * 
     * @return double 
     */
    double getDegree() {
      return get() * 180. / M_PI;
    }

  protected:

    /**
     * @brief subclass should implement this method.
     * 
     * @return double 
     */
    virtual double _get();
    
    double _offset = 0;
};

}
