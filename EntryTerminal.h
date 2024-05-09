#ifndef ENTRY_TERMINAL_H
#define ENTRY_TERMINAL_H

#include <string>
#include "ParkingTicket.h"
#include "SpotAssignmentStrategy.h"
#include "Terminal.h"

class ParkingTicket;
class SpotAssignmentStrategy;
class Terminal;

class EntryTerminal : public Terminal {
  private:
    SpotAssignmentStrategy* strategy;

  public:
    EntryTerminal();
    SpotAssignmentStrategy* getStrategy();
    void addStrategy(SpotAssignmentStrategy* strategy);
    ParkingTicket* assignSpot(std::string type);
};

#endif