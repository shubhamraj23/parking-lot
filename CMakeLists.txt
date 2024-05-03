# Set the minimum required version of CMake
cmake_minimum_required(VERSION 3.12)

# Set the project name
project(parking-lot)

# Add the executable and list your source files
add_executable(
  parking-lot
  parking.cpp
  EntryTerminal.cpp
  ExitTerminal.cpp
  ParkingLot.cpp
  ParkingSpot.cpp
  Terminal.cpp
)