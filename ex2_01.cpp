// ex2_01.cpp -- Writing values of variables to screen
#include <iostream>

int main() 
{
    int apple_count{15};        // number of apples
    int orange_count{5};        // number of oranges
    int total_fruit {apple_count + orange_count}; // Total number of fruit 
    std::cout << "The value of apple_count is " << apple_count << std::endl;
    std::cout << "The value of orange_count is " << orange_count << std::endl;
    std::cout << "The value of total_fruit " << total_fruit << std::endl;
}
