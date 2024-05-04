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
    int getEntranceTerminalId();
    void setEntranceTerminalId(int newId);
    int getNumberOfEntranceTerminals();
    void setNumberOfEntranceTerminals(int terminals);
    bool operator()(ParkingSpot* a, ParkingSpot* b);
};

#endif