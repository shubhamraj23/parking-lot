#ifndef PARKING_SPOT_H
#define PARKING_SPOT_H

#include <string>

class ParkingSpot {
  private:
    static int counter;
    int parkingSpotId;
    bool reservedStatus;
    std::string spotType;
    static void incrementCounter();
    int parkingRate;

  protected:
    void setSpotType(std::string spot);
    void setParkingSpotId();
    void setParkingRate(int rate);

  public:
    int getParkingSpotId();
    bool getReservedStatus();
    void flipReservedStatus();
    std::string getSpotType();
    int getParkingRate();
};

#endif