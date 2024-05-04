#include "CompactParkingSpot.h"
#include "HandicappedParkingSpot.h"
#include "LargeParkingSpot.h"
#include "MotorcycleParkingSpot.h"
#include "ParkingLotBuilder.h"

// Function to build the parking lot.
ParkingLot ParkingLotBuilder::createParkingLot(int entrances, int exits, int spots) {
  // Create the parking lot.
  ParkingLot parkingLot = ParkingLot();

  // Add entrances and exits.
  for (int i = 0; i < entrances; i++) parkingLot.addNewEntryTerminal();
  for (int i = 0; i < exits; i++) parkingLot.addNewExitTerminal();
  parkingLot.createSpotList();

  // Find the number of spots of each type.
  int handicappedSpots = HANDICAPPED_SPOTS_PERCENT * spots;
  int compactSpots = COMPACT_SPOTS_PERCENT * spots;
  int largeSpots = LARGE_SPOTS_PERCENT * spots;
  int motorcycleSpots = spots - handicappedSpots - compactSpots - largeSpots;

  // Add spots of each type.
  for (int i = 0; i < handicappedSpots; i++) parkingLot.addParkingSpot(new HandicappedParkingSpot());
  for (int i = 0; i < compactSpots; i++) parkingLot.addParkingSpot(new CompactParkingSpot());
  for (int i = 0; i < largeSpots; i++) parkingLot.addParkingSpot(new LargeParkingSpot());
  for (int i = 0; i < motorcycleSpots; i++) parkingLot.addParkingSpot(new MotorcycleParkingSpot());

  return parkingLot;
}