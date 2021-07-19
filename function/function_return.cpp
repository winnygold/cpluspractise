// The following code is an example for a simple function with return

// The code gets circumference of a circle as an input and calculates radius

#include<iostream>

double radius(double& circumference, double& result)
{
    result = circumference/(2 * 3.141593);
    return (result);
}


int main()
{
    double circumference , result ; 
    std::cout << "Enter the Circumference of the circle : ";
    std::cin >> circumference ;
    std::cout << "The Radius of the circle is " << radius(circumference,result) << std::endl;
}
