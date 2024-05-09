#ifndef SET_COMPARATOR_H
#define SET_COMPARATOR_H

#include "ParkingSpot.h"
class ParkingSpot;

class SetComparator {
  private:
    int entranceTerminalId;
    int numberOfEntranceTerminals;
    
  public:
    SetComparator();
    void setEntranceTerminalId(int newId);
    void setNumberOfEntranceTerminals(int terminals);
    bool operator()(ParkingSpot* a, ParkingSpot* b);
};

#endif