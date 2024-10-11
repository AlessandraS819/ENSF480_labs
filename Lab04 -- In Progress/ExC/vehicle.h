// Filename: vehicle.cpp
// Authors: Alessandra Schiavi and Muhammed Umar Khan
// Lab: Lab 04 Ex C

#ifndef VEHICLE_H
#define VEHICLE_H

#include <string>
#include "moveable.h"
#include "resizable.h"
using namespace std;

class Vehicle extends Moveable, Resizeable{
    public:
        virtual void move()= 0;
        Vehicle(String name);
    protected:
        String name;

};
#endif