#include<iostream>
#include<string>
int main() 
{
    std::string Name;
    std::cout << "Enter Your Name"<< std::endl;
    std::cin >> Name;
    if (Name.size() > 1){
        std::cout << "Hello" << Name << std::endl;
    }
    else{
        std::cout << "Blank Input recieved"<< std::endl;
    }


}
