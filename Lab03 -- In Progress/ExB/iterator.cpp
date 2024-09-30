/* iterator.cpp
* lab 3 Exercise B
 * Completed by: Alessandra Schiavi and Muhammed Umar Khan
 * Submission Date: Sept 30, 2024
*/



#include <iostream>
#include <cassert>
#include "mystring2.h"

using namespace std;

template <typename T>
class Vector {
public:

    class VectIter {
        friend class Vector;
    private:
        Vector *v; // points to a vector object of type T
        int index; // represents the subscript number of the vector's array.
    public:
        VectIter(Vector& x);

        T operator++(); // Promises: increments the iterator's index and returns the value.
        T operator++(int); // Promises: returns the value at index then increments.
        T operator--(); // Promises: decrements the index and returns the value.
        T operator--(int); // Promises: returns the value at index then decrements.
        T operator*(); // Promises: returns the value of the element at the current index.
    };

    Vector(int sz); 
    ~Vector();

    T& operator[](int i); // Promises: returns the existing value in the ith element or sets a new value.

    void ascending_sort(); // Promises: sorts the vector values in ascending order.

private:
    T *array; // points to the first element of an array of T
    int size; // size of array
    void swap(T&, T&); // swaps the values of two elements in array
};

// Define swap function
template <typename T>
void Vector<T>::swap(T& a, T& b) {
    T tmp = a;
    a = b;
    b = tmp;
}

// Define ascending_sort function
template <typename T>
void Vector<T>::ascending_sort() {
    for (int i = 0; i < size - 1; i++)
        for (int j = i + 1; j < size; j++)
            if (array[i] > array[j])
                swap(array[i], array[j]);
}

// Define VectIter constructor
template <typename T>
Vector<T>::VectIter::VectIter(Vector& x) {
    v = &x;
    index = 0;
}

// Define operator* for iterator
template <typename T>
T Vector<T>::VectIter::operator*() {
    return v->array[index];
}

// Define operator++ for iterator (prefix)
template <typename T>
T Vector<T>::VectIter::operator++() {
    if (index >= v->size) {
        index = 0; // wrap around
    }
    return v->array[index++];
}

// Define operator++ for iterator (postfix)
template <typename T>
T Vector<T>::VectIter::operator++(int) {
    T temp = v->array[index];
    index++;
    if (index >= v->size) {
        index = 0; // wrap around
    }
    return temp;
}

// Define operator-- for iterator (prefix)
template <typename T>
T Vector<T>::VectIter::operator--() {
    if (index < 0) {
        index = v->size - 1; // wrap around to last element
    }
    return v->array[index--];
}

// Define operator-- for iterator (postfix)
template <typename T>
T Vector<T>::VectIter::operator--(int) {
    T temp = v->array[index];
    index--;
    if (index < 0) {
        index = v->size - 1; // wrap around to last element
    }
    return temp;
}

// Define Vector constructor
template <typename T>
Vector<T>::Vector(int sz) {
    size = sz;
    array = new T[sz];
    assert(array != NULL);
}

// Define Vector destructor
template <typename T>
Vector<T>::~Vector() {
    delete[] array;
    array = NULL;
}

// Define operator[] for Vector
template <typename T>
T& Vector<T>::operator[](int i) {
    return array[i];
}
