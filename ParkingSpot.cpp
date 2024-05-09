#include "ParkingSpot.h"

// Assigning the static variable counter.
int ParkingSpot::counter = 1;

// Function to increment the counter variable.
void ParkingSpot::incrementCounter() {
  ParkingSpot::counter++;
}

// Function to get the id of the parking spot.
int ParkingSpot::getParkingSpotId() {
  return this->parkingSpotId;
}

// Function to set the parking spot id.
void ParkingSpot::setParkingSpotId() {
  this->parkingSpotId = ParkingSpot::counter;
  ParkingSpot::incrementCounter();
}
    
// Function to get the reserved status of the parking spot.
bool ParkingSpot::getReservedStatus() {
  return this->reservedStatus;
}

// Function to flip the reserved status of the parking spot.
void ParkingSpot::flipReservedStatus() {
  this->reservedStatus = !(this->reservedStatus);
}

// Function to get the spot type of the parking spot.
std::string ParkingSpot::getSpotType() {
  return this->spotType;
}

// Function to set the spot type of the parking spot.
void ParkingSpot::setSpotType(std::string spot) {
  this->spotType = spot;
}

// Function to set the parking rate associated with the spot.
void ParkingSpot::setParkingRate(int rate) {
  this->parkingRate = rate;
}

// Function to get the parking rate associated with the spot.
int ParkingSpot::getParkingRate() {
  return this->parkingRate;
}