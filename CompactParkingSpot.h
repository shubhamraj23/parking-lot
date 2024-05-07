#ifndef COMPACT_PARKING_SPOT_H
#define COMPACT_PARKING_SPOT_H

#include "ParkingSpot.h"
class ParkingSpot;

class CompactParkingSpot : public ParkingSpot {
  private:

  public:
    CompactParkingSpot();
    virtual void blank() override;
};

#endif