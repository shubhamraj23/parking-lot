#ifndef TERMINAL_H
#define TERMINAL_H

#include "SpotAssignmentStrategy.h"
class SpotAssignmentStrategy;

class Terminal {
  private:
    static int counter;
    int terminalId;
    static void incrementCounter();
    static SpotAssignmentStrategy* strategy;
    
  protected:
    void setTerminalId();

  public:
    int getTerminalId();
    static void setSpotAssignmentStrategy(SpotAssignmentStrategy* strategy);
    static SpotAssignmentStrategy* getSpotAssignmentStrategy();
};

#endif