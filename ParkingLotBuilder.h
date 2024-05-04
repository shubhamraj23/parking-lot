#ifndef PARKINGLOT_BUILDER_H
#define PARKINGLOT_BUILDER_H

#define HANDICAPPED_SPOTS_PERCENT 0.1
#define COMPACT_SPOTS_PERCENT 0.4
#define LARGE_SPOTS_PERCENT 0.3
#define MOTORCYCLE_SPOTS_PERCENT 0.2

#include "ParkingLot.h"
class ParkingLot;

class ParkingLotBuilder {  
  public:
    static ParkingLot createParkingLot(int entrances, int exits, int spots);
};

#endif