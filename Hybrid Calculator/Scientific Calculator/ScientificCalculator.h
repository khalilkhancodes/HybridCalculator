#ifndef SCIENTIFIC_CALCULATOR_H
#define SCIENTIFIC_CALCULATOR_H
#include<vector>
#include<string>

class ScientificCalculator
{
private:
    double number = 0, result = 0;
    int choice;
    vector<string> &history;    // Reference to shared history from HybridCalculator

public:
    ScientificCalculator(vector<string> &his) : history(his) {};

    // Convert degrees to radians (used for trig functions)
    double RadiantoDegreeCon(double &number);

     // Show the scientific calculator operations menu
    void ShowScientificCalMenu();

    // Perform user-selected scientific operation
    void PerfromScientificCalculation();    
};

#endif