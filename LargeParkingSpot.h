#ifndef LARGE_PARKING_SPOT_H
#define LARGE_PARKING_SPOT_H

#include "ParkingSpot.h"
class ParkingSpot;

class LargeParkingSpot : public ParkingSpot {
  private:

  public:
    LargeParkingSpot();
    virtual void blank() override;
};

#endif