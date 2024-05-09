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
ParkingTicket* NearestSpotAssignment::assignSpot(int entranceId, std::string type) {
  std::set<ParkingSpot*, SetComparator> currSet = this->nearestSpotsList[entranceId];
  auto spotId = currSet.begin();
  while (spotId != currSet.end() && (*spotId)->getSpotType() != type) spotId++;
  if (spotId == currSet.end()) return NULL;
  ParkingSpot* spot = *spotId;
  for (int i = 0; i < this->nearestSpotsList.size(); i++) this->nearestSpotsList[i].erase(spot);
  ParkingTicket* ticket = new ParkingTicket(spot);
  return ticket;
}