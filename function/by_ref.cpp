// passing function arguments "by reference" using  "&" symbol

#include <iostream>

void prevnext (int x, int& prev, int& next)
{
  prev = x-1;
  next = x+1;
}

int main ()
{
  int x=100, y, z;
  std::cout << y << z << std::endl;
  prevnext (x, y, z);
  std::cout << "Previous=" << y << ", Next=" << z;
  return 0;
}