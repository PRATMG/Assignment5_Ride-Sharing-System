# Ride Sharing System – Smalltalk Version

This project implements a ride sharing system using Smalltalk and demonstrates key object-oriented programming (OOP) principles such as encapsulation, inheritance, and polymorphism.

All classes are organized under the package `Ride-Sharing-System` and can be file-outed or reloaded into any Pharo image.

## Project Contents
```
Smalltalk/
├── RideSharingSystem.st      ← Exported .st file (Pharo 12 format)
└── README.md                 ← This documentation
```

## Features and Class Overview

### Ride (Abstract Base Class)
- Instance Variables: rideID, pickupLocation, dropoffLocation, distance
- Methods:
  - fare: calculates fare based on distance (default: $1 per mile)
  - rideDetails: prints ride information to Transcript

### StandardRide / PremiumRide / SharedRide (Subclasses of Ride)
- Each subclass overrides the fare and rideDetails methods
- Demonstrates polymorphism by overriding base class methods

### Driver
- Attributes: driverID, name, rating, assignedRides (private list)
- Key Methods:
  - addRide: adds a ride to the driver's list
  - getDriverInfo: displays summary to Transcript
  - viewAssignedRides: displays detailed ride info
- Demonstrates encapsulation

### Rider
- Attributes: riderID, name, requestedRides (private list)
- Key Methods:
  - requestRide: adds a ride to the rider's request history
  - getRiderInfo: displays rider summary
  - viewRides: displays requested ride info

## How to Test

1. Load the project into Pharo:
   - Right-click package → Extra → File In using RideSharingSystem.st

2. Open a Playground, and run sample code like:
```
ride1 := StandardRide new.
ride1 initializeWith: 101 pickup: 'Downtown' dropoff: 'Airport' distance: 10.

ride2 := PremiumRide new.
ride2 initializeWith: 102 pickup: 'Mall' dropoff: 'Hotel' distance: 8.

driver := Driver new.
driver initializeWith: 1 name: 'Alex' rating: 4.9.
driver addRide: ride1.
driver addRide: ride2.
driver getDriverInfo.
driver viewAssignedRides.

rider := Rider new.
rider initializeWith: 201 name: 'Emily'.
rider requestRide: ride1.
rider requestRide: ride2.
rider getRiderInfo.
rider viewRides.
```
3. View the results in the Transcript window.

## Requirements

- Pharo 12 or newer
- Transcript for output
- Exported file: RideSharingSystem.st

## OOP Principles Demonstrated

| Principle      | Description                                                |
|----------------|------------------------------------------------------------|
| Encapsulation  | Instance variables are accessed and modified via methods   |
| Inheritance    | Subclasses extend the abstract base class Ride             |
| Polymorphism   | Subclasses override fare and rideDetails                   |

