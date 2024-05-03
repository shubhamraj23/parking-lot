#ifndef PARKING_SPOT_H
#define PARKING_SPOT_H

class ParkingSpot {
  private:
    static int counter;
    int parkingSpotId;
    bool reservedStatus;

  public:
    static void incrementCounter();
    int getParkingSpotId();
    void setParkingSpotId();
    bool getReservedStatus();
    void flipReservedStatus();
};

#endif