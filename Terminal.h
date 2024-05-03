#ifndef TERMINAL_H
#define TERMINAL_H

class Terminal {
  private:
    static int counter;
    int terminalId;
    
  protected:
    Terminal();

  public:
    static void incrementCounter();
    int getTerminalId();
    void setTerminalId();
};

#endif