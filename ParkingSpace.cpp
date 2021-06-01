//
//  ParkingSpace.cpp
//  ParkingLot
//
//  Created by Karthikeyan Chockalingam on 5/16/21.
//

#include "ParkingSpace.hpp"
#include <iostream>

ParkingSpace::ParkingSpace() {
    currentSpace = true;
}

bool ParkingSpace::isAvailable() {
    return (currentSpace == true);
}

void ParkingSpace::setParkedSpace() {
    if(currentSpace == true)
    currentSpace = false;
}

void ParkingSpace::setParkingSlot(ParkingSlot slot)
{
    parkingslot = slot;
}

void ParkingSpace::handleParking(Vehicle *vehicle) {
    setParkedSpace();
    
    std::cout << "Vehicle id " <<  vehicle->getVehicleID() << " of type " << vehicle->getVehicleName() << " is parked in space of type " << getItemName(parkingslot) << std::endl;
}

std::string ParkingSpace::getItemName(ParkingSlot itemType)
{
    switch (itemType)
    {
        case ParkingSlot::small:
          return "Small";
        case ParkingSlot::medium:
          return "Compact";
        case ParkingSlot::large:
          return "Large";
    }
 
    return "???";
}


MotorCycleSpace::MotorCycleSpace() {
    setParkingSlot(ParkingSlot::small);
}


CarSpace::CarSpace() {
    setParkingSlot(ParkingSlot::medium);
}


LargeSpace::LargeSpace() {
    setParkingSlot(ParkingSlot::large);
}

