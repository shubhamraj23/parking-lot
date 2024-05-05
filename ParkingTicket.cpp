#include "ParkingTicket.h"

// Assign the static variable counter.
int ParkingTicket::counter = 0;

// Constructor for the class.
ParkingTicket::ParkingTicket(ParkingSpot* spot) {
  this->ticketId = ParkingTicket::counter;
  ParkingTicket::incrementCounter();
  this->spot = spot;
  auto currentTime = std::chrono::system_clock::now();
  auto durationSinceEpoch = currentTime.time_since_epoch();
  auto seconds = std::chrono::duration_cast<std::chrono::seconds>(durationSinceEpoch);
  int currentTimeInSeconds = seconds.count();
  this->issueTime = currentTimeInSeconds;
}

// Function to increment the counter variable.
void ParkingTicket::incrementCounter() {
  ParkingTicket::counter++;
}

// Function to get the ticket id of the parking ticket.
int ParkingTicket::getTicketId() {
  return this->ticketId;
}

// Function to get the parking spot associated with the parking ticket.
ParkingSpot* ParkingTicket::getParkingSpot() {
  return this->spot;
}

// Function to get the issue time of the parking ticket.
int ParkingTicket::getIssueTime() {
  return this->issueTime;
}