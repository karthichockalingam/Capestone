//
//  vehicle.hpp
//  ParkingLot
//
//  Created by Karthikeyan Chockalingam on 5/16/21.
//

#ifndef vehicle_hpp
#define vehicle_hpp
#include <stdio.h>
#include <string>


enum class VechicleSize {small = 0, medium = 1, large = 2};

class Vehicle {
private:
  static int vehicleId;
  int currentId;
  VechicleSize vehicleType;
  std::string name;
  bool isParked;
public:
   Vehicle(VechicleSize vt, std::string vehicle_name);
  ~Vehicle(){}

   VechicleSize getVehicleType();
   void setVechicleType(VechicleSize vt);
   std::string getVehicleName();
   int getVehicleID();
};

#endif /* vehicle_hpp */
