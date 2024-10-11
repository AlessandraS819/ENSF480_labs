// Filename: moveable.cpp
// Authors: Alessandra Schiavi and Muhammed Umar Khan
// Lab: Lab 04 Ex C

#ifndef RESIZEABLE_H
#define RESIZEABLE_H
class Resizeable{
    public:
        virtual void enlarge(int n)= 0;

        virtual void shrink (int n)=0;
};
#endif
