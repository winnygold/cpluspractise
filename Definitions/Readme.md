# Definitions : 
-----------------
## Variable: 
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
    std::cout << "Hello, World!"; // printing string to terminal<<std::endl;
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
---------------------
## Buffer 

Most systems take significant amount of time to write to external devices or output device , so inorder to reduce the overhead time in writing response ,buffer is introduced.

When does the buffer flushed ? 

There are three events in which the buffer will be flushed. 
- when Buffer is full , it is  flushed automatically. 
- The library may be asked to read from the standard input stream.which will flush the buffer 
- When we explicitly say so to flush the buffer

std::endl ends a line and flushes the buffer. Flushing output buffer at essential times is a good habit when we run a code which might take a long time to run . 

#### Buffer vs cache :

A buffer is temporary storage of data that is on its way to other media or storage of data that can be modified non-sequentially before it is read sequentially. It attempts to reduce the difference between input speed and output speed. A cache also acts as a buffer, but itstores data that is expected to be read several times to reduce the need to access slower storage.

Note :grey_exclamation:: If your system is low on memory, the benefits of buffering suffer. At this point, you have to find a balance between the size of a buffer and the available memory of your computer.

-----------------------
 
