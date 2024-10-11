// Filename: moveable.cpp
// Authors: Alessandra Schiavi and Muhammed Umar Khan
// Lab: Lab 04 Ex C
#ifndef MOVEABLE_H
#define MOVEABLE_H
class Moveable{
    public:
        virtual void forward()= 0;

        virtual void backward()=0;
};
#endif