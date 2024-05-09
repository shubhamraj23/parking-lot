#include <cstdlib>
#include "RandomSet.h"

// Function to insert a ticket into the random set.
void RandomSet::addTicket(ParkingTicket* ticket) {
  this->ticketSet.insert(ticket);
}

// Function to fetch a random ticket from the random set.
ParkingTicket* RandomSet::getRandomTicket() {
  int setSize = this->ticketSet.size();
  if (setSize == 0) return NULL;
  int n = rand() % setSize;
  auto itr = this->ticketSet.begin();
  for (int i = 0; i < n; i++) itr++;
  ParkingTicket* ticket = *itr;
  this->ticketSet.erase(itr);
  return ticket;
}