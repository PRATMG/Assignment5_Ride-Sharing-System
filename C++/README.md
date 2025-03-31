# Ride Sharing System – C++ Version

This project implements a simple ride sharing system using object-oriented programming concepts in C++. It demonstrates the use of encapsulation, inheritance, and polymorphism across a set of classes: Ride, StandardRide, PremiumRide, Driver, and Rider.

## Project Structure
```
C++/
├── include/
│   ├── Ride.h
│   ├── Driver.h
│   └── Rider.h
├── src/
│   └── main.cpp
├── Makefile
└── README.md
```

- include/: Contains all class header files  
- src/: Contains the main.cpp where objects are created and tested  
- Makefile: For compiling and running the project  

### Requirements:
- A C++ compiler (e.g., g++ or clang++)
- Make utility

### Steps to Build and Run:
1. Open a terminal and navigate to the C++ directory:
    ```bash
    cd path/to/C++/
    ```
2. Run the following command to compile the project:
    ```bash
    make
    ```
3. Execute the compiled program:
    ```bash
    ./main
    ```
4. To clean the build files, run:
    ```bash
    make clean
    ```


## Features and Classes

Ride (Base Class)
- Holds core data: ride ID, pickup/dropoff locations, distance, and fare.
- Has virtual methods: calculateFare() and rideDetails().

StandardRide / PremiumRide (Subclasses)
- Inherit from Ride.
- Override calculateFare() based on ride type.
- Demonstrates polymorphism via base-class pointers.

Driver
- Attributes: driver ID, name, rating, assigned rides.
- Methods: addRide(), getDriverInfo(), and list of completed rides.
- Uses encapsulation to protect the list of assigned rides.

Rider
- Attributes: rider ID, name, requested rides.
- Methods: requestRide() and viewRides().

## OOP Concepts Demonstrated

| Principle      | How It’s Applied                                           |
|----------------|------------------------------------------------------------|
| Encapsulation  | Private member variables with public getters/setters       |
| Inheritance    | StandardRide and PremiumRide inherit from Ride             |
| Polymorphism   | Overridden methods called via base-class pointers          |

## Example Output
```
Type: Standard | Fare: $5.00
Type: Premium | Fare: $12.00

Driver Info:
Driver ID: 1 | Name: Alex | Rating: 4.8
Assigned Rides:
- Ride ID: 101 | From: A | To: B ...

Rider Info:
Rider ID: 200 | Name: Emily
Requested Rides:
- Ride ID: 102 | ...
```

## Related Projects

This implementation is part of a dual-language assignment. You can also explore the:

Smalltalk Version: ../Smalltalk/README.md
