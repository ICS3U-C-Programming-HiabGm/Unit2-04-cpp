// Created by: Hiab G
// Date: Wed, Feb. 28th
// This program asks the user for the radius and then calculates the circumference and area of a circle.
#include <cmath>
#include <iostream>

int main() {
    // Declare variables
    float radius, circumference, area;

    // Get the radius from the user
    std::cout << "Enter the radius (mm): ";
    std::cin >> radius;

    // Calculate the circumference and area
    circumference = 2 * M_PI * radius; // Circumference = 2 * π * r
    area = M_PI * pow(radius, 2); // Area = π * r^2

    // Display the circumference and area
    std::cout << "\nCircumference = " << circumference << " mm" << std::endl;
    std::cout << "Area = " << area << " mm^2" << std::endl;

    return 0;
}