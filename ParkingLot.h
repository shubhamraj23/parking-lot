#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "EntryTerminal.h"
#include "ExitTerminal.h"
#include <vector>

class EntryTerminal;
class ExitTerminal;

class ParkingLot {
  private:
    std::vector<EntryTerminal*> entryTerminals;
    std::vector<ExitTerminal*> exitTerminals;

  public:
    ParkingLot();
    void addNewEntryTerminal();
    std::vector<EntryTerminal*> getAllEntryTerminals();
    void addNewExitTerminal();
    std::vector<ExitTerminal*> getAllExitTerminals();
};

#endif