#ifndef SPOT_ASSIGNMENT_STRATEGY_H
#define SPOT_ASSIGNMENT_STRATEGY_H

#include <string>
#include "ParkingTicket.h"

class EntryTerminal;
class ParkingTicket;

class SpotAssignmentStrategy {
  public:
    virtual void initializeStrategy(int entrances) = 0;
    virtual void addParkingSpot(ParkingSpot* spot, std::vector<EntryTerminal*> entryTerminals) = 0;
    virtual ParkingTicket* assignSpot(int entranceId, std::string type) = 0;
};

#endif