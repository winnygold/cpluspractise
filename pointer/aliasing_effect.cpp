#include<iostream>

int main()
{
    double y;
    double* p_x;
    y = 3.0;
    p_x = &y; // copying the address of y to pointer p_x
    std::cout << "y= " << y << std::endl;
    *p_x = 1.0; // storing the value 1.0 to the p_x pointer address
    std::cout << "y= " << y << std::endl; 
}
