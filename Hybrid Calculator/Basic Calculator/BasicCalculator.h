#ifndef BASIC_CALCULATOR_H
#define BASIC_CALCULATOR_H

#include <vector>
#include <string>

class BasicCalculator
{
private:
    double first_number, second_number, result;
    int choice;
    // Reference to shared history vector (received from HybridCalculator)
    std::vector<std::string>& history;

public:
    BasicCalculator(std::vector<std::string>& H);
    void ShowBasicCalMenu();
    void PerformBasicCalculation();
};

// Utility function to get current timestamp
std::string Timestamp();

#endif