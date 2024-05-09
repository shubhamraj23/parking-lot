#ifndef NEAREST_SPOT_ASSIGNMENT_H
#define NEAREST_SPOT_ASSIGNMENT_H

#include <set>
#include <string>
#include <vector>
#include "ParkingSpot.h"
#include "SetComparator.h"
#include "SpotAssignmentStrategy.h"

class ParkingSpot;
class SetComparator;
class SpotAssignmentStrategy;

class NearestSpotAssignment : public SpotAssignmentStrategy {
  private:
    SetComparator comparator;
    std::vector< std::set<ParkingSpot*, SetComparator> > nearestSpotsList;
    void createAndSetComparator();

  public:
    NearestSpotAssignment();
    virtual void initializeStrategy(int entrances) override;
    virtual void addParkingSpot(ParkingSpot* spot, std::vector<EntryTerminal*> entryTerminals) override;
    virtual ParkingTicket* assignSpot(int entranceId, std::string type) override;
};

#endif