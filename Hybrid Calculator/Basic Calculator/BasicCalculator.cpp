#include "BasicCalculator.h"
#include <iomanip>
#include <iostream>
#include <sstream>
#include <ctime>
#include <fstream>

using namespace std;
// === Get Current Timestamp as string ===
string Timestamp()
{
    time_t now = time(0);
    tm *ltm = localtime(&now);
    char timestr[32];
    strftime(timestr, sizeof(timestr), "%Y-%m-%d - %H:%M:%S", ltm);
    return string(timestr);
}
// Constructor takes reference to history vector from Hybrid Calculator
BasicCalculator::BasicCalculator(vector<string> &H) : history(H) {};
void BasicCalculator::ShowBasicCalMenu()
{
    cout << "=== BASIC CALCULATOR ===" << endl;
    cout << "1. Addition" << endl
         << "2. Subtraction" << endl
         << "3. Multiplication" << endl
         << "4. Division" << endl
         << "5. Exit" << endl;
    cout << "-------------------------" << endl;
}

// Perform chosen operation and record it in history
void BasicCalculator::PerformBasicCalculation()
{
    do
    {
        ShowBasicCalMenu();
        cout << "Choose from above menu : ";
        cin >> choice;
        if (choice >= 1 && choice <= 4)
        {
            cout << "Enter the first number : ";
            cin >> first_number;
            cout << "Enter the second Number : ";
            cin >> second_number;
        }
        // Using ostringstream in place of to_string function(control on trailing zeros)
        ostringstream oss;
        oss << fixed << setprecision(2); // Consistent formatting

        switch (choice)
        {
        case 1:
            result = first_number + second_number;
            oss << first_number << " + " << second_number << " = " << result;
            break;
        case 2:
            result = first_number - second_number;
            oss << first_number << " - " << second_number << " = " << result;
            break;
        case 3:
            result = first_number * second_number;
            oss << first_number << " * " << second_number << " = " << result;
            break;
        case 4:
            if (second_number != 0)
            {
                result = first_number / second_number;
                oss << first_number << " / " << second_number << " = " << result;
            }
            else
            {
                cout << "Division by zero -- (error)" << endl;
                continue; // Skip saving to History
            }
            break;
        }
        // Save result in history and file if valid operation
        if (choice >= 1 && choice <= 4)
        {
            string entry = oss.str() + "    [ " + Timestamp() + " ]";
            cout << "Result : \n"
                 << oss.str() << endl;

            history.push_back(entry);

            ofstream OutFile("History.txt", ios::app);
            OutFile << entry << endl;
            OutFile.close();
        }
    } while (choice != 5);
    if (choice == 5)
    {
        cout << "Exiting... Thanks for using Basic Calculator\n"
             << endl;
        return;
    }
}