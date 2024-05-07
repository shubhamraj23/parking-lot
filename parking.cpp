#include <iostream>
#include "ParkingLot.h"
#include "ParkingLotBuilder.h"
#include "CompactParkingSpot.h"
#include "HandicappedParkingSpot.h"
#include "LargeParkingSpot.h"
#include "MotorcycleParkingSpot.h"

class CompactParkingSpot;
class HandicappedParkingSpot;
class LargeParkingSpot;
class MotorcycleParkingSpot;

int main() {
  std::cout << "This application is a simulation of a parking lot." << std::endl;
  
  // Asking input for the number of entrances.
  int entrances;
  do {
    std::cout << "Enter the number of entrance terminals: ";
    std::cin >> entrances;
    if (entrances < 0 || entrances > 10) std::cout << "The number of entrances must be between 1 and 10." << std::endl;
  }
  while (entrances < 0 || entrances > 10);

  // Asking input for the number of exits.
  int exits;
  do {
    std::cout << "Enter the number of exit terminals: ";
    std::cin >> exits;
    if (exits < 0 || exits > 10) std::cout << "The number of exits must be between 1 and 10." << std::endl;
  }
  while (exits < 0 || exits > 10);

  // Asking inpur for the number of parking spots.
  int spots;
  do {
    std::cout << "Enter the number of parking spots: ";
    std::cin >> spots;
    if (spots < 10 || spots > 1000) std::cout << "The number of parking spots must be between 10 and 1000." << std::endl;
  }
  while (spots < 10 || spots > 1000);

  // Create a new parking lot object.
  ParkingLot parkinglot = ParkingLotBuilder::createParkingLot(entrances, exits, spots);

  ParkingTicket* ticket = parkinglot.getAllEntryTerminals()[0]->assignSpot(Spots::CompactParkingSpot);
  std::cout << ticket->getParkingSpot()->getParkingSpotId() << std::endl;

  return 0;
}