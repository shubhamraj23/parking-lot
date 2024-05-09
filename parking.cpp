#include <iostream>
#include <string>
#include <unistd.h>
#include "ParkingLot.h"
#include "ParkingLotBuilder.h"
#include "ParkingTicket.h"
#include "RandomSet.h"

int main() {
  std::cout << "This application is a simulation of a parking lot." << std::endl;
  
  // Asking input for the number of entrances.
  int entrances;
  do {
    std::cout << "Enter the number of entrance terminals: ";
    std::cin >> entrances;
    if (entrances < 1 || entrances > 10) std::cout << "The number of entrances must be between 1 and 10." << std::endl;
  }
  while (entrances < 1 || entrances > 10);

  // Asking input for the number of exits.
  int exits;
  do {
    std::cout << "Enter the number of exit terminals: ";
    std::cin >> exits;
    if (exits < 1 || exits > 10) std::cout << "The number of exits must be between 1 and 10." << std::endl;
  }
  while (exits < 1 || exits > 10);

  // Asking input for the number of parking spots.
  int spots;
  do {
    std::cout << "Enter the number of parking spots: ";
    std::cin >> spots;
    if (spots < 10 || spots > 1000) std::cout << "The number of parking spots must be between 10 and 1000." << std::endl;
  }
  while (spots < 10 || spots > 1000);

  // Create a new parking lot object.
  ParkingLot parkinglot = ParkingLotBuilder::createParkingLot(entrances, exits, spots);

  // Create a random set to store and fetch parking tickets.
  RandomSet randomSet = RandomSet();

  // Asking input for the number of simulations.
  int count;
  do {
    std::cout << "Enter the number of simulations: ";
    std::cin >> count;
    if (count < 1 || count > 1000) std::cout << "The number of simulations must be between 1 and 1000." << std::endl;
  }
  while (count < 1 || count > 1000);

  while (count > 0) {
    // Random number to decide whether to add a vehicle or remove a vehicle.
    int flag = rand() % 2;
    if (flag == 0) {
      // Insert a vehicle into the parking lot.
      int entryTerminalIndex = rand() % entrances;
      int ticketIndex = rand() % 10;
      std::string ticketType;
      if (ticketIndex < 1) ticketType = "handicapped";
      else if (ticketIndex < 5) ticketType = "compact";
      else if (ticketIndex < 8) ticketType = "large";
      else ticketType = "motorcycle";
      std::cout << "A vehicle has approached entry terminal " << entryTerminalIndex << " for a " << ticketType << " parking spot." << std::endl;

      ParkingTicket* ticket = parkinglot.getAllEntryTerminals()[entryTerminalIndex]->assignSpot(ticketType);
      if (ticket == NULL) std::cout << "No " << ticketType << " spot available in the parking lot." << std::endl;
      else std::cout << "Parking spot " << ticket->getParkingSpot()->getParkingSpotId() << " assigned." << std::endl;
      randomSet.addTicket(ticket);
    }
    else {
      // Remove a vehicle from the parking lot.
      ParkingTicket* ticket = randomSet.getRandomTicket();
      if (ticket == NULL) continue;
      int exitTerminalIndex = rand() % exits;
      sleep(1);
      std::cout << "Vehicle with assigned spot " << ticket->getParkingSpot()->getParkingSpotId() << " has approached exit terminal " << exitTerminalIndex << " to exit." << std::endl;
      int amount = parkinglot.getAllExitTerminals()[exitTerminalIndex]->getAmount(ticket);
      std::cout << "Your total amount is INR " << amount << "." << std::endl;
      parkinglot.getAllExitTerminals()[exitTerminalIndex]->freeSpot(ticket, parkinglot.getAllEntryTerminals());
      std::cout << "Parking spot " << ticket->getParkingSpot()->getParkingSpotId() << " is free." << std::endl;
    }
    count--;
  }

  return 0;
}