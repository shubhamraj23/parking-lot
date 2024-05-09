#include "Terminal.h"

// Assigning the static variable counter.
int Terminal::counter = 0;

// Function to increment the counter variable.
void Terminal::incrementCounter() {
  Terminal::counter++;
}

// Function to get the id of the terminal.
int Terminal::getTerminalId() {
  return this->terminalId;
}

// Function to set the id of the terminal.
void Terminal::setTerminalId() {
  this->terminalId = Terminal::counter;
  Terminal::incrementCounter();
}

// Function to set the spot assignment strategy.
void Terminal::setSpotAssignmentStrategy(SpotAssignmentStrategy* strategy) {
  Terminal::strategy = strategy;
}

// Function to get the spot assignment strategy.
SpotAssignmentStrategy* Terminal::getSpotAssignmentStrategy() {
  return Terminal::strategy;
}