# Set the minimum required version of CMake
cmake_minimum_required(VERSION 3.12)

# Set the project name
project(parking-lot)

# Add the executable and list your source files
add_executable(
  parking-lot
  parking.cpp
  CompactParkingSpot.cpp
  EntryTerminal.cpp
  ExitTerminal.cpp
  HandicappedParkingSpot.cpp
  LargeParkingSpot.cpp
  MotorcycleParkingSpot.cpp
  NearestSpotAssignment.cpp
  ParkingLot.cpp
  ParkingLotBuilder.cpp
  ParkingSpot.cpp
  ParkingTicket.cpp
  RandomSet.cpp
  SetComparator.cpp
  Terminal.cpp
)