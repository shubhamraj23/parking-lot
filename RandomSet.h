#ifndef RANDOM_SET_H
#define RANDOM_SET_H

#include <set>
#include "ParkingTicket.h"

class ParkingTicket;

class RandomSet {
  private:
    std::set<ParkingTicket*> ticketSet;

  public:
    void addTicket(ParkingTicket* ticket);
    ParkingTicket* getRandomTicket();
};

#endif