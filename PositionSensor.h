
#pragma once

namespace rath {

class PositionSensor {
  public:
    virtual void init();

    /**
     * @brief get the scaled sensor reading in radian
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

  protected:
    
};

}
