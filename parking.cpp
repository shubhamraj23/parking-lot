#include <iostream>
#include "ParkingLot.h"

#define HANDICAPPED_SPOTS_PERCENT 0.1
#define COMPACT_SPOTS_PERCENT 0.4
#define LARGE_SPOTS_PERCENT 0.3
#define MOTORCYCLE_SPOTS_PERCENT 0.2

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

  // Create the parking lot.
  ParkingLot parkingLot = ParkingLot();
  for (int i = 0; i < entrances; i++) parkingLot.addNewEntryTerminal();
  for (int i = 0; i < exits; i++) parkingLot.addNewExitTerminal();


  return 0;
}