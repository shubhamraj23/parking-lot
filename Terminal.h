#ifndef TERMINAL_H
#define TERMINAL_H

class Terminal {
  private:
    static int counter;
    int terminalId;
    static void incrementCounter();
    
  protected:
    void setTerminalId();

  public:
    int getTerminalId();
};

#endif