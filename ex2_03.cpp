// ex2_03 Sizing a pond for a happy fish
#include <iostream>
//import <numbers>;
#include <cmath>
int main() 
{
    using namespace std;
    // 2 square feet pond surface for every 6 inches of fish
    const double fishFactor {2.0/0.5}; // area per unit per length of fish
    const double inchesperFoot {12.0};
    double fishCount {};        // number of fish
    double fishLength {};       // average length of fish
    std::cout << "Enter the number of fish you want to keep: ";
    std::cin >> fishCount;
    std::cout << "Enter the average fish length in inches: ";
    std::cin >> fishLength;
    fishLength /= inchesperFoot; // convert to feet
    std::cout << '\n';
    // Calculate the required fish area
    const double pondArea{fishCount * fishLength * fishFactor};
    // Calculate the pond diameter from the area
    const double pondDiameter {2.0 * std::sqrt(pondArea / std::numbers::pi)};
    std::cout << "Pond diameter required for " << fishCount << " fish is " << pondDiameter << " feet.\n";
}
