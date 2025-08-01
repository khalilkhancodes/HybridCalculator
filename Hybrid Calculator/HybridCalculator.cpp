#include "HybridCalculator.h"
#include <iostream>
#include <string>
#include <vector>
using namespace std;

using namespace std;

void HybridCalculator::ShowMenu()
{
    // Creating Objects of Classes And Accessing Functions(Methods)
    BasicCalculator basic(history);
    ScientificCalculator sci(history);
    UnitConverter UC;
    CurrencyConverter CC;
    QuoteGenerator RQG;
    do
    {
        cout << endl;
        // Accesing Quote Display Function From Quote Class
        RQG.ShowRandomQuote();
        cout << endl;
        cout << "================================" << endl;
        cout << "        HYBRID CALCULATOR       " << endl;
        cout << "================================" << endl;
        cout << "1. Basic Calculator" << endl
             << "2. Scientific Calculator" << endl
             << "3. Recent history" << endl
             << "4. Full History (From File)" << endl
             << "5. Delete Recent history" << endl
             << "6. Delete history Permanently" << endl
             << "7. Unit Converter" << endl
             << "8. Currency Converter" << endl
             << "9. Exit" << endl;
        cout << "Choose From Above Menu : ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            // Accesing Perform Basic Calculation Function From Basic Calculator Class
            basic.PerformBasicCalculation();
            break;
        case 2:
            // Accesing Perform Scientific Calculation Function From Scientific Calculator Class
            sci.PerfromScientificCalculation();
            break;
        case 3:
            // Accessing the Recent History of user until he Quits the Program
            cout << "---- Recent History ----" << endl;
            ShowRecentHistory();
            break;
        case 4:
            // Accessing and Storing the Recent History of user Permanently in the External File
            {
                cout << "---- Full History (from File) ----" << endl;
                ifstream Infile("History.txt");
                string line;
                while (getline(Infile, line))
                {
                    if (!line.empty())
                    {
                        cout << line << endl;
                    }
                }
                Infile.close();
                break;
                cout << "History is deleted permanently" << endl;
                cout << "History.txt file updated successfully" << endl;
            }
        case 5:
            // Deleting the Recent History of the user
            {
                cout << "---- Delete recent history -------" << endl;
                do
                {
                    ShowRecentHistory();
                    cout << "\n1. Delete all" << endl
                         << "2. Delete Sepcific" << endl
                         << "3. Exit" << endl;
                    cout << "Choose From Above : ";
                    cin >> choice;
                    if (choice < 0 || choice > 3)
                    {
                        cout << "Invalid Choice... Try between 1 and 3" << endl;
                        return;
                    }
                    else if (choice == 1)
                    {
                        history.clear();
                        cout << "Whole Recent History is deleted Succesfully" << endl;
                    }
                    else if (choice == 2)
                    {
                        int number;
                        cout << "Enter the number you want to delete : ";
                        cin >> number;
                        history[number - 1].erase();
                        cout << "History is deleted Successfully" << endl;
                        cout << "Recent History is updated successfully" << endl;
                    }
                } while (choice != 3);
                if (choice == 3)
                {
                    cout << "Goodbye" << endl;
                }
                break;
            }
        case 6:
            // Deleting the Recent History of the user Permanently From File
            {
                cout << "----- Delete History Permanently (From File) ----- " << endl;
                do
                {
                    ShowHistory();
                    cout << "\n1. Delete all History" << endl
                         << "2. Delete Specific History" << endl
                         << "3. Exit" << endl;
                    cout << "Choose From Above Options : ";
                    cin >> choice;
                    if (choice < 0 || choice > 3)
                    {
                        cout << "invalid Choice ... Try Between 1 and 3" << endl;
                        return;
                    }
                    else if (choice == 1)
                    {
                        DeleteAllHistoryPermanently();
                    }
                    else if (choice == 2)
                    {
                        DeleteHistoryByIndex();
                    }
                } while (choice != 3);
                if (choice == 3)
                {
                    cout << "Goodbye" << endl;
                }
                break;
            }
        case 7:
            // Accesing Perform Unit Conversion Function From Unit Converter Class
            UC.UnitConversion();
            break;
        case 8:
            // Accesing Perform Currency Conversion Function From Currency Converter Class
            CC.CurrencyConversion();
            break;
        }

    } while (choice != 9);
    if (choice == 9)
    {
        cout << "Thanks For Using HYBRID CALCULATOR" << endl;
        exit(0);
    }
}

vector<string> HybridCalculator::LoadResult()
{
    vector<string> Result;
    ifstream Infile("History.txt");
    string line;
    while (getline(Infile, line))
    {
        if (!line.empty())
        {
            Result.push_back(line);
        }
    }
    return Result;
}

void HybridCalculator::SaveResult(vector<string> &Result)
{
    ofstream Outfile("History.txt");
    for (const string &str : Result)
    {
        {
            Outfile << str << endl;
        }
    }
    Outfile.close();
}

void HybridCalculator::DeleteAllHistoryPermanently()
{
    vector<string> Result = LoadResult();
    if (Result.empty())
    {
        cout << "No History to Delete" << endl;
        return;
    }
    if (!Result.empty())
    {
        Result.clear();
        SaveResult(Result);
    }
    cout << "Deleting ....    History is deleted Permanently" << endl;
    cout << "History.txt File is Updated Successfully" << endl;
}
void HybridCalculator::ShowHistory()
{
    vector<string> Result = LoadResult();
    if (Result.empty())
    {
        cout << "No History to Reveal " << endl;
    }
    for (string str : Result)
    {
        int count = 0;
        if (!str.empty())
        {
            cout << ++count << ".   " << str << endl;
        }
    }
}

void HybridCalculator::DeleteHistoryByIndex()
{
    vector<string> Result = LoadResult();
    int index;
    cout << "Enter the number you want to delete : ";
    cin >> index;
    if (index < 0 || index > Result.size())
    {
        cout << "Invalid Choice Try Again" << endl;
        return;
    }
    Result.erase(Result.begin() + index - 1);
    SaveResult(Result);
    cout << "History is deleted Permanently" << endl;
    cout << "History.txt File Updated Successfully" << endl;
}

void HybridCalculator::ShowRecentHistory()
{
    int count = 0;
    for (string str : history)
    {
        cout << ++count << ".    " << str << endl;
    }
}

int main()
{
    HybridCalculator HBC;
    HBC.ShowMenu();
    return 0;
}
