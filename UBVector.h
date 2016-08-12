//
// Created by Vighnesh on 7/7/2016.
//

#include <iostream>

using namespace std;

#ifndef UBVECTORPROJECT2_UBVECTOR_H
#define UBVECTORPROJECT2_UBVECTOR_H

#endif //UBVECTORPROJECT2_UBVECTOR_H



class UBVector{
public:
    UBVector (const UBVector& x); // done
    explicit UBVector (size_t n = 0, int val = 0);  // done
    UBVector (int *pBegin, int *pEnd); // done
    ~UBVector(); // done
    UBVector& operator= (const UBVector& x); // done
    size_t size() const; // done
    size_t capacity() const; // done
    int *begin(); // done
    int *end();     // done
    int *insert (int *pPosition, const int val);
    int *erase (int *pPosition);
    void push_back (const int& val); // done
    void pop_back();    // done
    int& at(size_t n);
    int& operator[] (size_t n); // done
    int& front(); // done
    int& back(); // done

    //additional qtiyapa

    void reserve(size_t n);
    void erase(size_t position);
    void insert(size_t position, const int& new_item);
  //  UBVector();
  //  UBVector(size_t n);
    void swap(UBVector& the_other);
    int posit(int* x);


private:
    size_t num_items;
    size_t current_capacity;
    static const size_t INITIAL_CAPACITY;
    int *item_ptr; // points to the start of the array



};
