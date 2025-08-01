#include "ScientificCalculator.h"
#include <iostream>
#include <fstream>
#include <string>
#include <iomanip>
#include <cmath>
// #include "BasicCalculator.h"    // For Timestamp()

using namespace std;

// === Convert degrees to radians (used for trig functions) ===
double ScientificCalculator::RadiantoDegreeCon(double &number)
{
    double result = (number * 3.14) / 180;
    return result;
}

// === Display Scientific Calculator Menu ===
void ScientificCalculator::ShowScientificCalMenu()
{
    cout << "=== SCIENTIFIC CALCULATOR ===" << endl;
    cout << "1. Square root" << endl
         << "2. Power" << endl
         << "3. Logarithm" << endl
         << "4. Cosine" << endl
         << "5. Sine" << endl
         << "6. Tangent" << endl
         << "7. Exit" << endl;
    cout << "------------------------------" << endl;
}
// === Perform Scientific Calculations ===
void ScientificCalculator::PerfromScientificCalculation()
{
    do
    {
        ShowScientificCalMenu();
        cout << "Choose From Above Menu : ";
        cin >> choice;
        ostringstream oss;
        oss << fixed << setprecision(2);       // Consistent formatting
        if (choice >= 1 && choice <= 6)
        {
            cout << "Enter the value : " << endl;
            cin >> number;
            switch (choice)
            {
            case 1:
                result = sqrt(number);
                oss << "sqrt(" << number << ")" << " = " << result;
                break;
            case 2:
                result = log(number);
                oss << "log(" << number << ")" << " = " << result;
                break;
            case 3:
                int exp;
                cout << "Enter the exponent : ";
                cin >> exp;
                result = pow(number, exp);
                oss << number << " ^ " << exp << "=" << result;
                break;
            case 4:
                result = cos(RadiantoDegreeCon(number));
                oss << "cos(" << number << ")" << " = " << result;
                break;
            case 5:
                result = sin(RadiantoDegreeCon(number));
                oss << "sin(" << number << ")" << " = " << result;
                break;
            case 6:
                result = tan(RadiantoDegreeCon(number));
                oss << "tan(" << number << ")" << " = " << result;
                break;
            }
        }
        // Save to file and vector history
        if (choice >= 1 && choice <= 6)
        {
            string entry = oss.str() + "    [ " + Timestamp() + " ]";
            cout << "Result :\n"
                 << oss.str() << endl;
            history.push_back(entry);
            ofstream OutFile("History.txt", ios::app);
            OutFile << entry << endl;
            OutFile.close();
        }
    } while (choice != 7);
    if (choice == 7)
    {
        cout << "Exiting...  Thanks for using Scientific Calculator\n"
             << endl;
        return;
    }
}