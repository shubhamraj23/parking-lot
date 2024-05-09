#ifndef EXIT_TERMINAL_H
#define EXIT_TERMINAL_H

#include <chrono>
#include <vector>
#include "EntryTerminal.h"
#include "ParkingTicket.h"
#include "Terminal.h" 

class EntryTerminal;
class ParkingTicket;
class Terminal;

class ExitTerminal : public Terminal {
  public:
    ExitTerminal();
    int getAmount(ParkingTicket* ticket);
    void freeSpot(ParkingTicket* ticket, std::vector<EntryTerminal*> entryTerminals);
};

#endif