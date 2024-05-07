#include "EntryTerminal.h"

// Default constructor
EntryTerminal::EntryTerminal() {
  this->setTerminalId();
}

// Function to return the strategy associated with the parking spot assignment.
SpotAssignmentStrategy* EntryTerminal::getStrategy() {
  return this->strategy;
}

// Function to add strategy associated with the parking spot assignment.
void EntryTerminal::addStrategy(SpotAssignmentStrategy* strategy) {
  this->strategy = strategy;
}

// Function to assign a parking spot to the vehicle.
ParkingTicket* EntryTerminal::assignSpot(Spots type) {
  return this->strategy->assignSpot(this->getTerminalId(), type);
}