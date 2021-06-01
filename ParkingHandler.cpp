//
//  ParkingHandler.cpp
//  ParkingLot
//
//  Created by Karthikeyan Chockalingam on 5/16/21.
//

#include "ParkingHandler.hpp"
#include <iostream>

using namespace std;

ParkingHandler::ParkingHandler() {
    
    
    numOfMotorCycleSpace = 5;
    numOfCarSpace = 20;
    numOfLargeSpace = 10;
    
    std::cout << std::endl;
    std::cout << "**** Parking lot information ***** " << std::endl;
    std::cout << std::endl;
    std::cout << "Total number of motor cycle spaces available: " << numOfMotorCycleSpace  << " small spaces " << std::endl;
    std::cout << "Total number of car spaces available: " << numOfCarSpace  << " compact spaces " << std::endl;
    std::cout << "Total number of bus spaces available: " << numOfLargeSpace  << " large spaces " << std::endl;
    std::cout << std::endl;
    
    
    for (int i = 0; i < numOfMotorCycleSpace ; i ++) {
        motorcyclespace.push_back(std::make_unique<MotorCycleSpace>());
    }
    
    for (int i = 0; i < numOfCarSpace; i ++) {
        carspace.push_back(std::make_unique<CarSpace>());
    }
    
    for (int i = 0; i < numOfLargeSpace; i ++) {
        busspace.push_back(std::make_unique<LargeSpace>());
    }
    
    space.push_back(std::move(motorcyclespace));
    space.push_back(std::move(carspace));
    space.push_back(std::move(busspace));
}

ParkingHandler::~ParkingHandler() {
}


ParkingSpace* ParkingHandler::getAvailableParkingSpace(VechicleSize slot) {
    for (int i = static_cast<int>(slot); i < space.size(); i ++) {
        for (int j = 0; j < space[i].size(); j ++) {
            if (space[i][j]->isAvailable())
                return space[i][j].get();
        }
    }
    return nullptr;
}

                                                                                        
void ParkingHandler::parkVehicle(Vehicle *vehicle) {
    ParkingSpace *space = getAvailableParkingSpace(vehicle->getVehicleType());
    if (space == nullptr) {
        parkQueue.push(vehicle);
        std::cout << "Vehicle id " <<  vehicle->getVehicleID() << " of type " << vehicle->getVehicleName() << " is sent to the queue. " << std::endl;
        return;
    }
    space->handleParking(vehicle); 
    return;
} 
