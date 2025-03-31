#ifndef RIDER_H
#define RIDER_H

#include <iostream>
#include <string>
#include <vector>
#include "Ride.h"

class Rider {
private:
    int riderID;
    std::string name;
    std::vector<Ride*> requestedRides;

public:
    Rider(int id, std::string riderName)
        : riderID(id), name(riderName) {}

    void requestRide(Ride* ride) {
        requestedRides.push_back(ride);
    }

    void getRiderInfo() const {
        std::cout << "Rider ID: " << riderID
                  << " | Name: " << name
                  << " | Rides Requested: " << requestedRides.size()
                  << std::endl;
    }
};

#endif
