#include "Terminal.h"

// Assigning the static variable counter.
int Terminal::counter = 0;

// Protected constructor to ensure that the class can only be inherited.
Terminal::Terminal() {}

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