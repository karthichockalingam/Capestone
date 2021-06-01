//
//  ParkingHandler.hpp
//  ParkingLot
//
//  Created by Karthikeyan Chockalingam on 5/16/21.
//

#ifndef ParkingHandler_hpp
#define ParkingHandler_hpp

#include "ParkingSpace.hpp"
#include "vehicle.hpp"
#include <vector>
#include <queue>
#include <stdio.h>

class ParkingHandler {
private:
    // Singleton pattern
    static ParkingHandler *instance;

    int numOfLargeSpace;
    int numOfCarSpace;
    int numOfMotorCycleSpace;
    
    
    std::vector<std::vector<std::unique_ptr<ParkingSpace> > > space;
    std::vector<std::unique_ptr<ParkingSpace>> busspace;
    std::vector<std::unique_ptr<ParkingSpace>> carspace;
    std::vector<std::unique_ptr<ParkingSpace>> motorcyclespace;
    
    std::queue<Vehicle*> parkQueue;

    // Singleton pattern, so the constructor is private
    ParkingHandler();
    ~ParkingHandler();

public:
    static ParkingHandler* getInstance() {
        if (!instance) {
            instance = new ParkingHandler();
        }
        return instance;
    }
    
ParkingSpace * getAvailableParkingSpace(VechicleSize slot);
    
void parkVehicle(Vehicle *vehicle);

};
#endif /* ParkingHandler_hpp */
