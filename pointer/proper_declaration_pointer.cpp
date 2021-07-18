#include<iostream>

/*when we declare a pointer and do not specify a particular memory , 
the value gets stored in a random place which is hard to locate sometimes.
Here we specify the memory location of the pointer and then store value
*/

int main()
{
    double* p_x; //stores the value of double

    p_x = new double;//assign an address to p_x
    *p_x = 1.0 //storing the float to the specified address 

    delete p_x; // release memory for re-use
}


