//
// Created by Vighnesh on 7/7/2016.
//



#include <iostream>
#include <stdexcept>
#include "UBVector.h"
using namespace std;

/*
static const size_t UBVector::INITIAL_CAPACITY = 5;
size_t UBVector::num_items = 0;
 size_t UBVector::current_capacity = INITIAL_CAPACITY;
int* UBVector::item_ptr= new int[current_capacity];
*/

const size_t UBVector::INITIAL_CAPACITY = 5;

/*UBVector::UBVector() {
    num_items        = 0;
    current_capacity = INITIAL_CAPACITY;
    item_ptr         = new int[current_capacity];
}*/

UBVector::UBVector(const UBVector &x)
{
    num_items = x.num_items;
    current_capacity = x.num_items;
    item_ptr = new int[x.num_items];
    for (size_t i=0; i<num_items; ++i) {
        item_ptr[i] = x.item_ptr[i];
    }

}

UBVector::UBVector(size_t n, int val) {
    num_items        = n;
    current_capacity = max(n,INITIAL_CAPACITY);
    item_ptr         = new int[current_capacity];
    for(int i = 0; i < n; i++){
        *(item_ptr + i) = val;
    }
}

UBVector::UBVector(int *pBegin, int *pEnd)
{
    num_items = (pEnd - pBegin)+1;
    current_capacity = max(num_items, INITIAL_CAPACITY);
    item_ptr = new int[current_capacity];
    item_ptr = pBegin;
/*    pBegin = item_ptr;
    pEnd = item_ptr+(num_items-1);
    item_ptr = pBegin;
    (item_ptr+(num_items-1) = pEnd;*/


}

UBVector& UBVector::operator= (const UBVector& x)
{
    UBVector the_copy(x);
// Swap contents of self with the copy.
    swap(the_copy);
// Return -- upon return the copy will be destroyed.
    return *this;
}

/*UBVector::UBVector(size_t n) {
    num_items        = n;
    current_capacity = max(n, INITIAL_CAPACITY);
    item_ptr         = new int[current_capacity];
}*/



UBVector::~UBVector() {
    delete [] item_ptr;
}

int& UBVector::operator[](size_t index) {
    if (index < num_items)
        return item_ptr[index];
    else
        throw out_of_range("index is out of range");
}

int& UBVector::front() {
    return (*this)[0];
}

int* UBVector::begin(){
    return item_ptr;
  //  return (int *) (item_ptr)[0];
}

int& UBVector::back() {
    return (*this)[num_items-1];
}

int* UBVector::end() {
    return (item_ptr + (num_items) );
   // return (this)[num_items-1];
}

void UBVector::push_back(const int& item) {
    if (num_items == current_capacity)
        reserve(2*current_capacity);
    item_ptr[num_items++] = item;
}
void UBVector::reserve(size_t n) {
    if (n > current_capacity) {
        current_capacity = max(n, 2*current_capacity);
        int *new_data_ptr = new int[current_capacity];
        for (size_t i=0; i<num_items; i++) {
            new_data_ptr[i] = item_ptr[i];
        }
        delete [] item_ptr;
        item_ptr = new_data_ptr;
    }
}

void UBVector::pop_back() {
    erase(num_items-1);
}

void UBVector::erase(size_t position) {
    if (position < num_items) {
        for (size_t i=position; i<num_items-1; ++i)
            item_ptr[i] = item_ptr[i+1];
        item_ptr[num_items-1] = int(); // empty out
        num_items--;
    }

}

int* UBVector::erase(int *pPosition)
{
    //int k = num_items-1;
    int position = posit(pPosition);

    if(position==-1){
        throw out_of_range("Index is invalid");
    }

    else if (position < num_items) {
        for (size_t i=position; i<num_items-1; ++i)
            item_ptr[i] = item_ptr[i+1];
        item_ptr[num_items-1] = int(); // empty out
        num_items--;
        /*if(position==k){
            return &(item_ptr[position-1]);
        }*/
        return &(item_ptr[position]);
    }

}// end method

void UBVector::insert(size_t position, const int& new_item)
{
    if (num_items == current_capacity)
        reserve(2*current_capacity);
    for (size_t i=num_items; i>position; --i)
        item_ptr[i] = item_ptr[i-1];
    item_ptr[position] = new_item;
    ++num_items;
}

int* UBVector::insert(int *pPosition, const int val)
{
   // int* out;
    if(num_items == current_capacity)
        reserve(2*current_capacity);
   // int x = *pPosition;
   // cout<<x<<endl;
    int position = posit(pPosition);
    if(position==-1){
        throw out_of_range("Index is invalid");
    }
    else {

        for (size_t i = num_items; i > position; --i)
            item_ptr[i] = item_ptr[i - 1];
        item_ptr[position] = val;
        ++num_items;

        return &(item_ptr[position]);

        /* int* y = &item_ptr[num_items];
         for(int i = (int) y; i > (int)pPosition; i=i- sizeof(int)){
             item_ptr[i] = item_ptr[i-1];
         }
         *pPosition = val;
         ++num_items;
         out = &(*pPosition);
         return out;*/
    }// else
}

int UBVector::posit(int* x)
{
   int index;
    for(int i = 0; i < num_items; i++){
        if((&item_ptr[i]) == x){
            return i;
        }
    }
    return -1;
}

size_t UBVector::size() const
{
    return num_items;
}

size_t UBVector::capacity() const
{
    return current_capacity;
}

int& UBVector::at(size_t n)
{
    if (n < num_items)
        return item_ptr[n];
    else
        throw out_of_range("index is out of range");
}

void UBVector::swap(UBVector& the_other) {
    std::swap(num_items,
              the_other.num_items);

    std::swap(current_capacity,
              the_other.current_capacity);

    std::swap(item_ptr, the_other.item_ptr);
}







