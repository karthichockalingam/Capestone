# Introduction

This project is about building an object orientated parking lot. There are three types of vehicles namely, motorcycle, cars and buses. The parking lot has three kinds of parking spaces small, compact and large spaces. Motorcycles can be parked in any spot, whereas cars can be parked in both compact and large spaces. However, buses can only be parked in large spaces. Currently, the parking lot is hard coded to have 5 small spaces, 20 compact spaces, and 10 larges spaces. If the parking lot is full then the vehicles are sent to the queue. The user has to input the number of motorcycles, cars and buses to parked in the parking lot.

# Program files

`vehicle.hpp` and `vehicle.cpp` contains information about the vehicle; such as the type of the vehicle, vehicle id and if it is currently parked.

`ParkingSpace.hpp` and `ParkingSpace.cpp`, from which three type of parking spaces are inheritered. It also stores information if the parking space is occupied or not.

`ParkingHandler.hpp` and `ParkingHandler.cpp`, has the name implies it handles the parking of the vehicles at an appropriate space in the parking lot.


# Build

run the makefile using the `make` command which should produce the executable `parking`

# Rubric

1. The project reads input from the user and outputs if the vehicle is parked or sent to the queue.

2. The main.cpp uses a while loop to park all the vehicle entered by the user. 

3. The project uses object orientated data structure and inheritance from the base class is implemented.

4. The class data structure uses private, public member variables.

5. The program uses dynamic memory management through unique pointers to hold the total number of vehicles to be parked.



