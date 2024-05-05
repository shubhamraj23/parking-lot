#include "NearestSpotAssignment.h"

// Default Constructor
NearestSpotAssignment::NearestSpotAssignment() {}

// Function to create the comparator object.
void NearestSpotAssignment::createAndSetComparator() {
  SetComparator comparator = SetComparator();
  this->comparator = comparator;
}

// Function to initialize the strategy.
void NearestSpotAssignment::initializeStrategy(int entrances) {
  this->nearestSpotsList.resize(entrances);
  this->createAndSetComparator();
  for (int i = 0; i < entrances; i++) {
    std::set<ParkingSpot*, SetComparator> newSet(this->comparator);
    this->nearestSpotsList[i] = newSet;
  }
}

// Function to add a parking spot to the strategy.
void NearestSpotAssignment::addParkingSpot(ParkingSpot* spot, std::vector<EntryTerminal*> entryTerminals) {
  for (int i = 0; i < entryTerminals.size(); i++) {
    int terminalId = entryTerminals[i]->getTerminalId();
    this->comparator.setEntranceTerminalId(terminalId);
    this->nearestSpotsList[i].insert(spot);
  }
}

// Strategy to assign the nearest parking spot.
ParkingTicket* NearestSpotAssignment::assignSpot() {

}