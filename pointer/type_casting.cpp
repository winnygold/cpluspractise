#include<iostream>

int main()
{
    unsigned char value = 11;
    int b = 10;
    int* p = &b;

    p = (int*)&value;

    std::cout << *p << std::endl;

}
