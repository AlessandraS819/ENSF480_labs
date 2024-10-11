// Filename: vehicle.cpp
// Authors: Alessandra Schiavi and Muhammed Umar Khan
// Lab: Lab 04 Ex C
#ifndef CAR_H
#define CAR_H

#include <string>

#include "moveable.h"
#include "vehicle.h"

class Car final: Vehicle {
    public:
        void turn();
    private:
        int seats;
};
#endif