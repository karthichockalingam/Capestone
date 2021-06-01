//
//  main.cpp
//  ParkingLot
//
//  Created by Karthikeyan Chockalingam on 5/16/21.
//

#include <iostream>
#include <vector>
#include <queue>

#include "ParkingHandler.hpp"
#include "vehicle.hpp"


// Initialize pointer to zero so that it can be intialized in first call to getInstance
ParkingHandler *ParkingHandler::instance = 0;
int Vehicle::vehicleId = 1;

int main() {
    ParkingHandler *ph = ParkingHandler::getInstance();
    
    int numOfMotorCycles, numOfCars, numOfBuses;
    
    std::cout << "Enter the number of Motor Cycles to park: " << std::endl;
    std::cin >> numOfMotorCycles;
    
    std::cout << "Enter the number of Cars to park: " << std::endl;
    std::cin >> numOfCars;
    
    std::cout << "Enter the number of Buses to park: " << std::endl;
    std::cin >> numOfBuses;
    
    std::queue<std::unique_ptr<Vehicle>> parkqueue;
    
    for (int i = 0; i < numOfMotorCycles; i ++) {
        parkqueue.push(std::make_unique<Vehicle>(VechicleSize::small, "motorCycle"));
    }
    
    for (int i = 0; i < numOfCars; i ++) {
        parkqueue.push(std::make_unique<Vehicle>(VechicleSize::medium, "car"));
      }
      
      for (int i = 0; i < numOfBuses; i ++) {
          parkqueue.push(std::make_unique<Vehicle>(VechicleSize::large, "bus"));
      }
    
    std::cout << std::endl;
    std::cout << "**** Parked vechicle information ***** " << std::endl;
    std::cout << std::endl;
    
    while (!parkqueue.empty()) {
        std::unique_ptr<Vehicle> v = std::move(parkqueue.front());
        parkqueue.pop();

        ph->parkVehicle(v.get());
      }
    


    return 0;
    
}
