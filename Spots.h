#ifndef SPOTS_H
#define SPOTS_H

#include "CompactParkingSpot.h"
#include "HandicappedParkingSpot.h"
#include "LargeParkingSpot.h"
#include "MotorcycleParkingSpot.h"

enum class Spots : int {
  CompactParkingSpot,
  HandicappedParkingSpot,
  LargeParkingSpot,
  MotorcycleParkingSpot
};

#endif