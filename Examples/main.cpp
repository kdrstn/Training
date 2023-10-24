#include <iostream>
#include "example_of_conversion.h"

using namespace std;

int main()
{
    int* ptr = new int();
    example_of_iptr_to_vptr(ptr);
    delete ptr;
    return 0;
}
