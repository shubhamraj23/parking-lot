#include "ParkingLot.h"

// Default constructor
ParkingLot::ParkingLot() {}

// Function to add a new entry terminal to the parking lot.
void ParkingLot::addNewEntryTerminal() {
  EntryTerminal* newTerminal = new EntryTerminal();
  this->entryTerminals.push_back(newTerminal);
}

// Function to return all the entry terminals in the parking lot.
std::vector<EntryTerminal*> ParkingLot::getAllEntryTerminals() {
  return this->entryTerminals;
}
  
// Function to add a new exit terminal to the parking lot.
void ParkingLot::addNewExitTerminal() {
  ExitTerminal* newTerminal = new ExitTerminal();
  this->exitTerminals.push_back(newTerminal);
}

// Function to return all the exit terminals in the parking lot.
std::vector<ExitTerminal*> ParkingLot::getAllExitTerminals() {
  return this->exitTerminals;
}