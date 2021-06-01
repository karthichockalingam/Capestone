all: parking

parking: main.o ParkingHandler.o ParkingSpace.o vehicle.o
	g++ -std=c++17 -o parking *.o

%.o: %.cpp
	g++ -std=c++17 -o $@ -c $<
