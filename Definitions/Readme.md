# Definitions : 
-----------------
##Variable: 
A Variable is a object with name. Object is inturn a computer memory with type. We can also have objects without a name. Why Variable ?: When we supply name and type , it makes it easy for the compiler to generate machine code. 

```cpp

#include <iostream>
#include <string>
int main()
{
    std::string pillow; // pillow is the name given to the variable, empty or null variable
}

```
pillow is the name given to the variable. It is a local variable. As soon as the compiler is done executing the "}", it flushes the local variable and memory used by it.  

-----------------

## Basic I/O operations:

Basic I/O operations are carried out by the **cin** and **cout** functions from the standard library of cpp . for printing a content in terminal we use cout and to get input we use cin. 

```cpp

#include <iostream>

int main()
{
    std::cout << "Hello, World!" // printing string to terminal<<std::endl;
}

```
std::cout prints the content "Hello world to the terminal. std::endl is a new line function fron std library.

```cpp

# include <iostream>
# include <string>
int main()
{
    std::string name; // string type variable 
    std::cin>>name;   // assigning the input provided by the user to the variable
}
```
In gendral the input and the output library stores its output in to a internal datastructure called **buffer** . 
