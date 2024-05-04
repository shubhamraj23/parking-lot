#ifndef PARKINGLOT_H
#define PARKINGLOT_H

#include "EntryTerminal.h"
#include "ExitTerminal.h"
#include "ParkingSpot.h"
#include "SetComparator.h"
#include <set>
#include <vector>

class EntryTerminal;
class ExitTerminal;
class ParkingSpot;
class SetComparator;

class ParkingLot {
  private:
    int numberOfEntryTerminals;
    int numberOfExitTerminals;
    std::vector<EntryTerminal*> entryTerminalsList;
    std::vector<ExitTerminal*> exitTerminalsList;
    SetComparator comparator;
    std::vector< std::set<ParkingSpot*, SetComparator> > nearestSpotsList;

  public:
    ParkingLot();
    int getNumberOfEntryTerminals();
    void incrementNumberOfEntryTerminals();
    int getNumberOfExitTerminals();
    void incrementNumberOfExitTerminals();
    void addNewEntryTerminal();
    std::vector<EntryTerminal*> getAllEntryTerminals();
    void addNewExitTerminal();
    std::vector<ExitTerminal*> getAllExitTerminals();
    std::vector< std::set<ParkingSpot*, SetComparator> > getNearestSpotsList();
    void createAndSetComparator();
    void createSpotList();
    void addParkingSpot(ParkingSpot* spot);
};

#endif