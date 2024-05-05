#include "CompactParkingSpot.h"
#include "HandicappedParkingSpot.h"
#include "LargeParkingSpot.h"
#include "MotorcycleParkingSpot.h"
#include "NearestSpotAssignment.h"
#include "ParkingLotBuilder.h"
#include "SpotAssignmentStrategy.h"

// Function to build the parking lot.
ParkingLot ParkingLotBuilder::createParkingLot(int entrances, int exits, int spots) {
  // Create the parking lot.
  ParkingLot parkingLot = ParkingLot();

  // Add entrances and exits.
  for (int i = 0; i < entrances; i++) parkingLot.addNewEntryTerminal();
  for (int i = 0; i < exits; i++) parkingLot.addNewExitTerminal();

  // Create strategy.
  SpotAssignmentStrategy* strategy = new NearestSpotAssignment();
  strategy->initializeStrategy(entrances);

  // Find the number of spots of each type.
  int handicappedSpots = HANDICAPPED_SPOTS_PERCENT * spots;
  int compactSpots = COMPACT_SPOTS_PERCENT * spots;
  int largeSpots = LARGE_SPOTS_PERCENT * spots;
  int motorcycleSpots = spots - handicappedSpots - compactSpots - largeSpots;

  // Add spots of each type.
  std::vector<EntryTerminal*> entryTerminals = parkingLot.getAllEntryTerminals();
  for (int i = 0; i < handicappedSpots; i++) strategy->addParkingSpot(new HandicappedParkingSpot(), entryTerminals);
  for (int i = 0; i < compactSpots; i++) strategy->addParkingSpot(new CompactParkingSpot(), entryTerminals);
  for (int i = 0; i < largeSpots; i++) strategy->addParkingSpot(new LargeParkingSpot(), entryTerminals);
  for (int i = 0; i < motorcycleSpots; i++) strategy->addParkingSpot(new MotorcycleParkingSpot(), entryTerminals);

  // Assign the strategy to the parking lot.
  parkingLot.addStrategy(strategy);

  return parkingLot;
}