//
//  main.cpp
//  cpp_practise
//
//  Created by pravin on 26/06/21.
//

/*
 
 Please enter your first name: Pravin
 ******************
 *                *
 * Hello, pravin! *
 *                *
 ******************
 
 */

#include <iostream>
#include <string>

int main()
{
    // Get the name using the standard input Library
    std::cout << "Please enter your first name : ";
    std::string name;
    std::cin >> name;
    
    // build the message to be displayed
    const std::string message = "Hello, " + name + "!";
    
    // build the second line and fourth line
    const std::string spaces(message.size(),' ');
    const std::string second = "* "+spaces+" *";
    
    // build the first and last line
    const std::string first(second.size(), '*');
    
    // print out the message
    std::cout << std::endl;
    std::cout << first << std::endl;
    std::cout << second << std::endl;
    std::cout << "* " + message +" *" << std::endl;
    std::cout << second << std::endl;
    std::cout << first  << std::endl;
}

