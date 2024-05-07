#include "ParkingLot.h"

// Default constructor
ParkingLot::ParkingLot() {
  this->numberOfEntryTerminals = 0;
  this->numberOfExitTerminals = 0;
}

// Function to get the number of entry terminals.
int ParkingLot::getNumberOfEntryTerminals() {
  return this->numberOfEntryTerminals;
}
  
// Function to increment the number of entry terminals.
void ParkingLot::incrementNumberOfEntryTerminals() {
  this->numberOfEntryTerminals++;
}

// Function to get the number of exit terminals.
int ParkingLot::getNumberOfExitTerminals() {
  return this->numberOfExitTerminals;
}
  
// Function to increment the number of exit terminals.
void ParkingLot::incrementNumberOfExitTerminals() {
  this->numberOfExitTerminals++;
}

// Function to add a new entry terminal to the parking lot.
void ParkingLot::addNewEntryTerminal() {
  EntryTerminal* newTerminal = new EntryTerminal();
  this->entryTerminalsList.push_back(newTerminal);
  this->incrementNumberOfEntryTerminals();
}

// Function to return all the entry terminals in the parking lot.
std::vector<EntryTerminal*> ParkingLot::getAllEntryTerminals() {
  return this->entryTerminalsList;
}
  
// Function to add a new exit terminal to the parking lot.
void ParkingLot::addNewExitTerminal() {
  ExitTerminal* newTerminal = new ExitTerminal();
  this->exitTerminalsList.push_back(newTerminal);
  this->incrementNumberOfExitTerminals();
}

// Function to return all the exit terminals in the parking lot.
std::vector<ExitTerminal*> ParkingLot::getAllExitTerminals() {
  return this->exitTerminalsList;
}