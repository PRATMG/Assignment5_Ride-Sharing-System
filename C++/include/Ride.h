#ifndef RIDE_H
#define RIDE_H

#include <iostream>
#include <string>

class Ride {
protected:
    int rideID;
    std::string pickupLocation;
    std::string dropoffLocation;
    double distance;

public:
    Ride(int id, std::string pickup, std::string dropoff, double dist)
        : rideID(id), pickupLocation(pickup), dropoffLocation(dropoff), distance(dist) {}

    virtual double fare() const = 0; // pure virtual

    virtual void rideDetails() const {
        std::cout << "Ride ID: " << rideID
                  << " | From: " << pickupLocation
                  << " | To: " << dropoffLocation
                  << " | Distance: " << distance << " miles" << std::endl;
    }

    virtual ~Ride() {}
};

class StandardRide : public Ride {
public:
    StandardRide(int id, std::string pickup, std::string dropoff, double dist)
        : Ride(id, pickup, dropoff, dist) {}

    double fare() const override {
        return distance * 1.0;
    }

    void rideDetails() const override {
        Ride::rideDetails();
        std::cout << "Type: Standard | Fare: $" << fare() << std::endl;
    }
};

class PremiumRide : public Ride {
public:
    PremiumRide(int id, std::string pickup, std::string dropoff, double dist)
        : Ride(id, pickup, dropoff, dist) {}

    double fare() const override {
        return distance * 2.0;
    }

    void rideDetails() const override {
        Ride::rideDetails();
        std::cout << "Type: Premium | Fare: $" << fare() << std::endl;
    }
};

#endif
