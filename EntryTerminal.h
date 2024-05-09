#ifndef ENTRY_TERMINAL_H
#define ENTRY_TERMINAL_H

#include <string>
#include "ParkingTicket.h"
#include "Terminal.h"

class ParkingTicket;
class Terminal;

class EntryTerminal : public Terminal {
  public:
    EntryTerminal();
    ParkingTicket* assignSpot(std::string type);
};

#endif