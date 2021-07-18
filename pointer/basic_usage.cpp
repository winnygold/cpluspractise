#include<iostream>

int main()
{
    double y,z;
    double* p_x;

    z = 3.0;
    p_x = &z;
    y = *p_x+1.0;
    std::cout << y << std::endl;
}
