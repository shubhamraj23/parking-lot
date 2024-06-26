#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include <set>
#include <vector>
#include "EntryTerminal.h"
#include "ExitTerminal.h"
#include "ParkingSpot.h"
#include "SetComparator.h"
#include "SpotAssignmentStrategy.h"

class EntryTerminal;
class ExitTerminal;
class ParkingSpot;
class SetComparator;
class SpotAssignmentStrategy;

class ParkingLot {
  private:
    int numberOfEntryTerminals;
    int numberOfExitTerminals;
    std::vector<EntryTerminal*> entryTerminalsList;
    std::vector<ExitTerminal*> exitTerminalsList;
    void incrementNumberOfEntryTerminals();
    void incrementNumberOfExitTerminals();

  public:
    ParkingLot();
    void addNewEntryTerminal();
    std::vector<EntryTerminal*> getAllEntryTerminals();
    void addNewExitTerminal();
    std::vector<ExitTerminal*> getAllExitTerminals();
};

#endif