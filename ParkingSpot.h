#ifndef PARKING_SPOT_H
#define PARKING_SPOT_H

#include <string>

class ParkingSpot {
  private:
    static int counter;
    int parkingSpotId;
    bool reservedStatus;
    std::string spotType;

  protected:
    void setSpotType(std::string spot);

  public:
    static void incrementCounter();
    int getParkingSpotId();
    void setParkingSpotId();
    bool getReservedStatus();
    void flipReservedStatus();
    std::string getSpotType();
    virtual void blank() = 0;
};

#endif