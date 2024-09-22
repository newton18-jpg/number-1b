#include <iostream>

int main() {
    double sum = 0.0; // Variable to store the sum
    int numerator = 1; // Starting numerator

    // Loop through the series until the numerator reaches 95
    while (numerator <= 95) {
        int denominator = numerator + 2; // Denominator is always 2 more than the numerator
        sum += static_cast<double>(numerator) / denominator; // Add the fraction to the sum
        numerator += 2; // Move to the next odd number
    }

    // Output the result
    std::cout << "The sum of the series is: " << sum << std::endl;

    return 0;
}
