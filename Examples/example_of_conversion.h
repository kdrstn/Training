#ifndef EXAMPLE_OF_CONVERSION_H
#define EXAMPLE_OF_CONVERSION_H

void example_of_const_ptr_to_ptr(const int* cPtr);

/*
const T* = T* ----> valid
T* = const T* ----> invalid
*/
void example_of_ptr_to_const_ptr(int* ptr);

/*
vptr = const T* --> valid with casting
*/
void example_of_ciptr_to_vptr(const int* iptr);

/*
vptr = T* --> valid
*/
void example_of_iptr_to_vptr(int* iptr);
#endif // EXAMPLE_OF_CONVERSION_H
