#ifndef DRIVER_H
#define DRIVER_H

#include <iostream>
#include <string>
#include <vector>
#include "Ride.h"

class Driver {
private:
    int driverID;
    std::string name;
    double rating;
    std::vector<Ride*> assignedRides;

public:
    Driver(int id, std::string driverName, double driverRating)
        : driverID(id), name(driverName), rating(driverRating) {}

    void addRide(Ride* ride) {
        assignedRides.push_back(ride);
    }

    void getDriverInfo() const {
        std::cout << "Driver ID: " << driverID
                  << " | Name: " << name
                  << " | Rating: " << rating
                  << " | Rides Assigned: " << assignedRides.size()
                  << std::endl;
    }
};

#endif
