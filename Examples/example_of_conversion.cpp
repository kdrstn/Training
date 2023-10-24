#include <iostream>
#include "example_of_conversion.h"

using namespace std;

void example_of_const_ptr_to_ptr(const int* cPtr) {

    // Will be done after throw exception, because this behavior is not valid,
    // so should be throw
}

void example_of_ptr_to_const_ptr(int* ptr) {

    const int* cPtr = ptr;

    cout << "Conversion is success!" << endl;

}

void example_of_ciptr_to_vptr(const int* iptr) {
    void* vptr = const_cast<int*>(iptr);
    cout << "iptr is assigned to vptr!" << endl;
}

void example_of_iptr_to_vptr(int* iptr) {
    void* vptr = iptr;
    cout << "iptr is assigned to vptr!" << endl;
}
