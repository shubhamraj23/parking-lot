#include "CompactParkingSpot.h"

CompactParkingSpot::CompactParkingSpot() {
  this->setParkingSpotId();
  this->setSpotType("compact");
  this->setParkingRate(10);
}