#include "SetComparator.h"
#include <cstdlib>

// Default Constructor
SetComparator::SetComparator() {}

// Function to set the id of the entrance terminal associated with the set.
void SetComparator::setEntranceTerminalId(int newId) {
  this->entranceTerminalId = newId;
}

// Function to set the number of entrance terminals.
void SetComparator::setNumberOfEntranceTerminals(int terminals) {
  this->numberOfEntranceTerminals = terminals;
}

// Operator to compare two Parking Spots in a set.
bool SetComparator::operator()(ParkingSpot* a, ParkingSpot* b) {
  int first = std::abs((a->getParkingSpotId() % this->numberOfEntranceTerminals) - this->entranceTerminalId);
  int second = std::abs((b->getParkingSpotId() % this->numberOfEntranceTerminals) - this->entranceTerminalId);
  if (first != second) return first < second;
  return a->getParkingSpotId() < b->getParkingSpotId();
}