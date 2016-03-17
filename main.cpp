#include<iostream>
#include"bitfield.h"
int main()
{
    Bitfield a(0);
    std::cout<<(12*a)+0x12;
    return 0;
}