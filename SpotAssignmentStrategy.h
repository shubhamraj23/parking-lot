#ifndef SPOT_ASSIGNMENT_STRATEGY_H
#define SPOT_ASSIGNMENT_STRATEGY_H

#include "EntryTerminal.h"
#include "ParkingTicket.h"

class EntryTerminal;
class ParkingTicket;

class SpotAssignmentStrategy {
  public:
    virtual void initializeStrategy(int entrances) = 0;
    virtual void addParkingSpot(ParkingSpot* spot, std::vector<EntryTerminal*> entryTerminals) = 0;
    virtual ParkingTicket* assignSpot() = 0;
};

#endif