# Functions : 

## Basics : 

Definition : Functions are sequence of statements designed to do a particular job
-----
Why use Functions ? 
- We already know that the main function is where the program starts , but more and more code gets added to the main function it is terrible to maintain , test and use . Chances are that there will be lots of lines that will be copied.

-----

C++ standard Library comes with a lot of pre-written functions but we can write our own functions and Functions that we write are called "**user-defined functions**". 

-----
#### The basic syntax : 

```cpp
return-type identifier() // identifier replaced with the name of the function
{
    //our code will be written here and its also called as function body. 
}

```
------
Do and Dont's :  

- Dont create function for every line.
- functions are block of code that executes a task . so if it doesn't make sense don't.
- create functions if the block of code will be used multiple times in the code block. 
- As a Cpp programmer , we have to always think about the memory read and write . Functions are kind of costly in a sense because we are hopping from a memory address to another address if its heap which is not good. So create them when its required. 

------

For readers coming out of python , **Nested functions** are not supported.

------

## Function Return values : 


We have the main function function like the below. 

```cpp
#include<iostream>

int main ()
{
    std::cout << "Hello world !" << std::endl;
    return 0 ;
}
```

The above main function is a ```int``` type which should return a value of integer but even if we dont return anything its still valid because cpp+11 versions have this feature where the std library takes care of the returns of main function. Its like if you dont return anything from main , the compiler assumes that you are returning 0 . 

-----

How to return a value in function ? 

It depends are two things, 

1. We have to declare the function return type , which indicates what type the function is going to return.  
2. We have to use the return statement which indicates the caller that a variable is being returned. 

Please refere the code [function_return](function_return.cpp)

-----

## Forward declarations and definitions: 

The Following code 

```cpp
#include <iostream>
 
int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';
    return 0;
}
 
int add(int x, int y)
{
    return x + y;
}
``` 

The above code will throw error during compilation because the code is compiled sequentially. When the compiler reaches the function call to add on line 5 of main, it doesn’t know what add is, because we haven’t defined add until line 9! That produces the error, identifier not found.

#### Forward identifier : 

A forward identifier is used to tell the compiler that the identifier exists in the code. for example. 

```
#include <iostream>
 
int add(int x, int y); // forward declaration of add() (using a function prototype)
 
int main()
{
    std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n'; // this works because we forward declared add() above
    return 0;
}
 
int add(int x, int y) // even though the body of add() isn't defined until here
{
    return x + y;
}

```
we have used the same code that did't compile to demonstrate the forward identifier. The second line tells the compiler that the identifier exists in the code. This forward identifiers are mostly used in header files .

It is also valid for the function identifier to not specify the function arg name , type is enough. For example. 

```cpp
int add(int , int); // This is still valid 

```
---------

#### Declaration VS Definition : 

An example of definition is 

```cpp
int add(int x, int y) // implements function add()
{
    int z{ x + y }; // instantiates variable z
 
    return z;
}
``` 
This tells the linker that the definition is present. 

If we have two definition with same name and type , the linker will throw error. 

We can use function overloading if the type of the function is different . so according to the type of the input the function is switched. Refer : 

---------
### Using Declarations in Multiple file : 

There are chances that a function willl reside at one cpp file and we want to use that function in another cpp file . In this case we will use Declarations and the rest will be taken care of compiler and linker. 

please refer the folder : Multiple_file

-----

## Header File :

As programs grow larger (and make use of more files), it becomes increasingly tedious to have to forward declare every function you want to use that is defined in a different file. Wouldn’t it be nice if you could put all your forward declarations in one place and then import them when you need them?

Header files usually have a .h extension, but you will occasionally see them with a .hpp extension or no extension at all. The primary purpose of a header file is to propagate declarations to code files.

We can write the forward declarations in header file and import them in multiple files.

refer the folder : header


-------
## Header Guard : 

Header Guard solves the "duplicate definition problem". 


##### duplicate definition examples :

##### variable 
```
int main()
{
    int x;
    int x; // this is a duplicate definition 

    return 0; 
}
```

##### function : 

```cpp
void message() // this is a definition of a function message
{
    std::cout << "Hello World !" << std::endl;
}

void message() // this is a duplicate definition 
{
    std::cout << "Hello World !" << std::endl;
}

int main()
{
    message();
    return 0;
}
```

The above code examples are easy to fix , but declarations in header file is quite painfull when our project is very big.

To tackle the duplicate declarations we use header guards. 

header guard structure
```
#ifndef SOME_UNIQUE_NAME_HERE
#define SOME_UNIQUE_NAME_HERE

// our declaration 

#endif
 
```
 
refer the folder : header guard

-------


 


