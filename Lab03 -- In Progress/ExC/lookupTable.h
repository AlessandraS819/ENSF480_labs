// LookupTable.h
// ENSF 480 - Lab 3, Ex C

#ifndef LOOKUPTABLE_H
#define LOOKUPTABLE_H

#include <iostream>
#include <cassert>
using namespace std;

template <typename KeyType, typename DataType>
class LookupTable {
private:
    struct Pair {
        KeyType keyM;
        DataType datumM;

        Pair() : keyM(), datumM() {}
        Pair(KeyType key, DataType datum) : keyM(key), datumM(datum) {}
    };

    Pair* tableM;
    int sizeM;
    int capacityM;

public:
    class Iterator {
    public:
        Pair* current;
        Iterator(Pair* ptr = nullptr) : current(ptr) {}

        Pair& operator*() { return *current; }
        Iterator& operator++() { current++; return *this; }
        bool operator!=(const Iterator& other) const { return current != other.current; }
    };

    LookupTable(int capacity = 100);
    ~LookupTable();
    DataType* find(const KeyType& key);
    void insert(const KeyType& key, const DataType& datum);
    void remove(const KeyType& key);
    void resize(int newCapacity); // Optional: method for resizing

    Iterator begin() const { return Iterator(tableM); }
    Iterator end() const { return Iterator(tableM + sizeM); }

    int size() const { return sizeM; }
    int capacity() const { return capacityM; }
};

template <typename KeyType, typename DataType>
LookupTable<KeyType, DataType>::LookupTable(int capacity)
    : sizeM(0), capacityM(capacity) {
    tableM = new Pair[capacityM];
}

template <typename KeyType, typename DataType>
LookupTable<KeyType, DataType>::~LookupTable() {
    delete[] tableM;
}

template <typename KeyType, typename DataType>
DataType* LookupTable<KeyType, DataType>::find(const KeyType& key) {
    for (int i = 0; i < sizeM; i++) {
        if (tableM[i].keyM == key) {
            return &tableM[i].datumM;
        }
    }
    return nullptr;
}

template <typename KeyType, typename DataType>
void LookupTable<KeyType, DataType>::insert(const KeyType& key, const DataType& datum) {
    DataType* found = find(key);
    if (found) {
        *found = datum;
    } else {
        assert(sizeM < capacityM); // Consider resizing if needed
        tableM[sizeM++] = Pair(key, datum);
    }
}

template <typename KeyType, typename DataType>
void LookupTable<KeyType, DataType>::remove(const KeyType& key) {
    for (int i = 0; i < sizeM; i++) {
        if (tableM[i].keyM == key) {
            // Shift elements left
            for (int j = i; j < sizeM - 1; j++) {
                tableM[j] = tableM[j + 1];
            }
            sizeM--;
            return;
        }
    }
}

// Optional: Resizing function
template <typename KeyType, typename DataType>
void LookupTable<KeyType, DataType>::resize(int newCapacity) {
    if (newCapacity > capacityM) {
        Pair* newTable = new Pair[newCapacity];
        for (int i = 0; i < sizeM; i++) {
            newTable[i] = tableM[i];
        }
        delete[] tableM;
        tableM = newTable;
        capacityM = newCapacity;
    }
}

#endif // LOOKUPTABLE_H
