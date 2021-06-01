//
//  ParkingSpace.hpp
//  ParkingLot
//
//  Created by Karthikeyan Chockalingam on 5/16/21.
//

#ifndef ParkingSpace_hpp
#define ParkingSpace_hpp

#include <stdio.h>
#include <string>

#include "vehicle.hpp"



enum class ParkingSlot {small = 0, medium = 1, large = 2};



class ParkingSpace{
private:
    bool currentSpace;
    ParkingSlot parkingslot;
    
public:
     ParkingSpace();
    ~ParkingSpace(){}
    
    void handleParking(Vehicle *vehicle);
    bool isAvailable();
    void setParkedSpace();
    void setParkingSlot(ParkingSlot slot);
    std::string getItemName(ParkingSlot itemType);
};

class LargeSpace: public ParkingSpace {

public:
    LargeSpace();

};

class CarSpace: public ParkingSpace {
    
public:
    CarSpace();

};

class MotorCycleSpace: public ParkingSpace {
    
public:
    MotorCycleSpace();

};


#endif /* ParkingSpace_hpp */
