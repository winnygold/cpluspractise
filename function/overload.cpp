// function overloading

#include<iostream>

/*
creating two functions with same name but with different type
according to the input , it switches the function
*/
int divide(int a,int b)
{
    int out = a/b;
    return (out);
}

float divide(float a , float b)
{
    float out = a/b;
    return (out);
}

int main ()
{
    int q=5 , w=2;
    float x=5.5,y=2.5;
    std::cout << "int input values : " << divide(q,w) << std::endl;
    std::cout << "float input values : " << divide(x,y) << std::endl;   
} 