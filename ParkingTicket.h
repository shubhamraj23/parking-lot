#ifndef PARKING_TICKET_H
#define PARKING_TICKET_H

#include <chrono>
#include "ParkingSpot.h"
class ParkingSpot;

class ParkingTicket {
  private:
    static int counter;
    int ticketId;
    ParkingSpot* spot;
    int issueTime;

  public:
    ParkingTicket(ParkingSpot* spot);
    static void incrementCounter();
    int getTicketId();
    ParkingSpot* getParkingSpot();
    int getIssueTime();
};

#endif