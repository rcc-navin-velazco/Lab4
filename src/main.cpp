



#include <iostream>
#include <string>

#include "exercises.hpp"

void separator()
{
    std::string separator = "--------------------";
    std::cout << std::endl << separator << std::endl;

}


int main(int argc, char* argv[])
{
    separator();
    std::cout << std::endl << "Exercise 1:" << std::endl;
    exercise_1();

    separator();

    std::cout << std::endl << "Exercise 2:" << std::endl;
    exercise_2();
    separator();

    std::cout << std::endl << "Exercise 3:" << std::endl;
    exercise_3();
    separator();

    

    
    return 0;
}