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
ParkingTicket* NearestSpotAssignment::assignSpot(int entranceId, Spots type) {
  std::set<ParkingSpot*, SetComparator> currSet = this->nearestSpotsList[entranceId];
  auto spotId = currSet.begin();
  while (spotId != currSet.end()) {
    bool found = false;
    switch(static_cast<int>(type)) {
      case static_cast<int>(Spots::CompactParkingSpot):
        if (dynamic_cast<CompactParkingSpot*>(*spotId) != NULL) found = true;
        break;
      case static_cast<int>(Spots::HandicappedParkingSpot):
        if (dynamic_cast<HandicappedParkingSpot*>(*spotId) != NULL) found = true;
        break;
      case static_cast<int>(Spots::LargeParkingSpot):
        if (dynamic_cast<LargeParkingSpot*>(*spotId) != NULL) found = true;
        break;
      case static_cast<int>(Spots::MotorcycleParkingSpot):
        if (dynamic_cast<MotorcycleParkingSpot*>(*spotId) != NULL) found = true;
        break;
    }
    if (found) break;
    spotId++;
  }
  if (spotId == currSet.end()) return NULL;
  ParkingSpot* spot = *spotId;
  for (int i = 0; i < this->nearestSpotsList.size(); i++) this->nearestSpotsList[i].erase(spot);
  ParkingTicket* ticket = new ParkingTicket(spot);
  return ticket;
}