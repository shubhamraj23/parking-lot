#include "ExitTerminal.h"

// Default constructor
ExitTerminal::ExitTerminal() {
  this->setTerminalId();
}

// Function to get the amount to be paid.
int ExitTerminal::getAmount(ParkingTicket* ticket) {
  auto currentTime = std::chrono::system_clock::now();
  auto durationSinceEpoch = currentTime.time_since_epoch();
  auto seconds = std::chrono::duration_cast<std::chrono::seconds>(durationSinceEpoch);
  int currentTimeInSeconds = seconds.count();
  int elapsedTime = currentTimeInSeconds - ticket->getIssueTime();
  int amount = elapsedTime * (ticket->getParkingSpot()->getParkingRate());
  return amount;
}

// Function to free the parking spot.
void ExitTerminal::freeSpot(ParkingTicket* ticket, std::vector<EntryTerminal*> entryTerminals) {
  Terminal::getSpotAssignmentStrategy()->addParkingSpot(ticket->getParkingSpot(), entryTerminals);
}