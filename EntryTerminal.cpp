#include "EntryTerminal.h"

// Default constructor
EntryTerminal::EntryTerminal() {
  this->setTerminalId();
}

// Function to assign a parking spot to the vehicle.
ParkingTicket* EntryTerminal::assignSpot(std::string type) {
  return Terminal::getSpotAssignmentStrategy()->assignSpot(this->getTerminalId(), type);
}