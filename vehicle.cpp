//
//  vehicle.cpp
//  ParkingLot
//
//  Created by Karthikeyan Chockalingam on 5/16/21.
//

#include "vehicle.hpp"


Vehicle::Vehicle(VechicleSize vt, std::string vehicle_name) {
    vehicleType = vt;
    name = vehicle_name;
    isParked = false;
    currentId = vehicleId;
    vehicleId++;
}

VechicleSize Vehicle::getVehicleType() {
    return vehicleType;
}

void Vehicle::setVechicleType(VechicleSize vt) {
    vehicleType = vt;
}

std::string Vehicle::getVehicleName() {
    return name;
}

int Vehicle::getVehicleID() {
    return currentId;
}


