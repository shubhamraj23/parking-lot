# Parking Lot

## Introduction
This is a C++ project to simulate a parking lot using object oriented principles.

## Repository Structure
The repository contains the following sets of files. All the files are present in the root folder, and there are no sub-folders.
- *CMakeLists.txt:* This is the CMake configuration file used to build the application and create the executable file.
- *parking.cpp:* This is the file containing the source code of the main function. This file simulates the parking lot by allowing a few vehicles to enter and exit the parking lot.
- *Various header (.h) and implementation (.cpp) files:* The .h files contain the templates of the different classes, and the .cpp files contain the implementation of those templates. The contents of the different classes are described below:
  - **CompactParkingSpot:** It contains information and methods related to a compact parking spot.
  - **EntryTerminal:** It contains information and methods related to an entry terminal of the parking lot.
  - **ExitTerminal:** It contains information and methods related to an exit terminal of the parking lot.
  - **HandicappedParkingSpot:** It contains information and methods related to a handicapped parking spot.
  - **LargeParkingSpot:** It contains information and methods related to a large parking spot.
  - **MotorcycleParkingSpot:** It contains information and methods related to a motorcycle parking spot.
  - **NearestSpotAssignment:** It contains information and methods related to the strategy to assign the empty spot nearest to the entry terminal.
  - **ParkingLot:** It contains information and methods related to the parking lot.
  - **ParkingLotBuilder:** It contains information and methods needed to build the parking lot.
  - **ParkingSpot:** An abstract class for the parking spot.
  - **ParkingTicket:** It contains information and methods related to the parking ticket.
  - **RandomSet:** It contains information and methods related to a random set for storing all parking tickets.
  - **SetComparator:** It contains information and methods related to a comparator for comparing spots.
  - **SpotAssignmentStrategy:** An abstract class for the spot assignment strategy.
  - **Terminal:** An abstract class for the terminal.