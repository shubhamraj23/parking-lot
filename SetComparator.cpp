#include "SetComparator.h"
#include <cstdlib>

// Default Constructor
SetComparator::SetComparator() {}

// Function to get the id of the entrance terminal associated with the set.
int SetComparator::getEntranceTerminalId() {
  return this->entranceTerminalId;
}

// Function to set the id of the entrance terminal associated with the set.
void SetComparator::setEntranceTerminalId(int newId) {
  this->entranceTerminalId = newId;
}

// Function to get the number of entrance terminals.
int SetComparator::getNumberOfEntranceTerminals() {
  return this->numberOfEntranceTerminals;
}

// Function to set the number of entrance terminals.
void SetComparator::setNumberOfEntranceTerminals(int terminals) {
  this->numberOfEntranceTerminals = terminals;
}

// Operator to compare two Parking Spots in a set.
bool SetComparator::operator()(ParkingSpot* a, ParkingSpot* b) {
  int first = std::abs((a->getParkingSpotId() % this->numberOfEntranceTerminals) - this->getEntranceTerminalId());
  int second = std::abs((b->getParkingSpotId() % this->numberOfEntranceTerminals) - this->getEntranceTerminalId());
  if (first != second) return first < second;
  return a->getParkingSpotId() < b->getParkingSpotId();
}