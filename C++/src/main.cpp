#include <iostream>
#include <vector>
#include "Ride.h"
#include "Driver.h"
#include "Rider.h"

int main() {
    // Create rides (Standard and Premium)
    Ride* ride1 = new StandardRide(1001, "Downtown", "Airport", 12.5);
    Ride* ride2 = new PremiumRide(1002, "Home", "Office", 8.2);
    Ride* ride3 = new StandardRide(1003, "Park", "Mall", 5.0);

    std::vector<Ride*> rideList = {ride1, ride2, ride3};

    std::cout << "\n Ride Details (Demonstrating Polymorphism):\n";
    for (Ride* r : rideList) {
        r->rideDetails();
        std::cout << "--------------------------\n";
    }

    // Create driver and assign rides
    Driver driver(501, "Alex Johnson", 4.8);
    driver.addRide(ride1);
    driver.addRide(ride3);
    std::cout << "\n👨‍✈️ Driver Info:\n";
    driver.getDriverInfo();

    // Create rider and request ride
    Rider rider(301, "Emily Carter");
    rider.requestRide(ride2);
    std::cout << "\n🧍‍♀️ Rider Info:\n";
    rider.getRiderInfo();

    // Clean up memory
    for (Ride* r : rideList) {
        delete r;
    }

    return 0;
}
