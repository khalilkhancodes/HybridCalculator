#include "CurrencyConverter.h"
#include <iostream>
using namespace std;

CurrencyConverter::CurrencyConverter()
{
    Amount = 0;
}
// === Currency Conversion Menu
void CurrencyConverter::ShowCurrencyConverterMenu()
{
    cout << "----- CURRENCY CONVERTER -----" << endl;
    cout << "\nCurrency Conversion Menu : " << endl;
    cout << "1. Convert from USD" << endl
         << "2. Convert from PKR" << endl
         << "3. Convert from EUR" << endl
         << "4. Convert from GBP" << endl
         << "5. Convert from INR" << endl
         << "6. Convert from CNY" << endl
         << "7. Convert from SAR" << endl
         << "8. Convert from AED" << endl
         << "9. Back" << endl;
    cout << "--------------------------" << endl;
}
// USD Currency Conversion Submenu
void CurrencyConverter::USDConversionMenu()
{
    cout << "--- USD Currency Conversion ---" << endl;
    cout << "Convert USD to : " << endl;
    cout << "1. PKR(Pakistani Rupee)" << endl
         << "2. EUR(Euro)" << endl
         << "3. GBP(British Pound)" << endl
         << "4. INR(Indian Rupee)" << endl
         << "5. CNY(Chinese Yaun)" << endl
         << "6. SAR(Saudi Riyal)" << endl
         << "7. AED(UAE Dirham)" << endl
         << "8. Exit" << endl;
}
// PKR Currency Conversion Submenu
void CurrencyConverter::PKRConversionMenu()
{
    cout << "--- PKR Currency Conversion ---" << endl;
    cout << "Convert PKR to : " << endl;
    cout << "1. USD(United State Rupee)" << endl
         // <<"2. EUR(Euro)"<<endl
         << "2. GBP(British Pound)" << endl
         << "3. INR(Indian Rupee)" << endl
         << "4. CNY(Chinese Yaun)" << endl
         // <<"6. SAR(Saudi Riyal)"<<endl
         // <<"7. AED(UAE Dirham)"<<endl
         << "5. Exit" << endl;
}
// USD Currency Conversion Submenu
void CurrencyConverter::EURConversionMenu()
{
    cout << "--- EUR Currency Conversion ---" << endl;
    cout << "Convert EUR to : " << endl;
    cout << "1. USD(United State Rupee)" << endl
         << "2. PKR(Pakistani Rupee)" << endl
         // <<"2. EUR(Euro)"<<endl
         << "3. GBP(British Pound)" << endl
         << "4. INR(Indian Rupee)" << endl
         // <<"5. CNY(Chinese Yaun)"<<endl
         // <<"6. SAR(Saudi Riyal)"<<endl
         // <<"7. AED(UAE Dirham)"<<endl
         << "5. Exit" << endl;
}
// GBP Currency Conversion Submenu
void CurrencyConverter::GBPConversionMenu()
{
    cout << "--- GBP Currency Conversion ---" << endl;
    cout << "Convert GBP to : " << endl;
    cout << "1. USD(United State Rupess)" << endl
         << "2. PKR(Pakistani Rupee)" << endl
         << "3. EUR(Euro)" << endl
         // <<"3. GBP(British Pound)"<<endl
         << "4. INR(Indian Rupee)" << endl
         // <<"5. CNY(Chinese Yaun)"<<endl
         // <<"6. SAR(Saudi Riyal)"<<endl
         // <<"7. AED(UAE Dirham)"<<endl
         << "5. Exit" << endl;
}
// INR Currency Conversion Submenu
void CurrencyConverter::INRConversionMenu()
{
    cout << "--- INR Currency Conversion ---" << endl;
    cout << "Convert INR to : " << endl;
    cout << "1. USD(United State Rupess)" << endl
         << "2. PKR(Pakistani Rupee)" << endl
         << "3. EUR(Euro)" << endl
         << "4. GBP(British Pound)" << endl
         // <<"4. INR(Indian Rupee)"<<endl
         // <<"5. CNY(Chinese Yaun)"<<endl
         // <<"6. SAR(Saudi Riyal)"<<endl
         // <<"7. AED(UAE Dirham)"<<endl
         << "5. Exit" << endl;
}
// CNY Currency Conversion Submenu
void CurrencyConverter::CNYConversionMenu()
{
    cout << "--- CNY Currency Conversion ---" << endl;
    cout << "Convert CNY to : " << endl;
    cout << "1. USD(United State Rupess)" << endl
         << "2. PKR(Pakistani Rupee)" << endl
         // <<"3. EUR(Euro)"<<endl
         // <<"4. GBP(British Pound)"<<endl
         << "3. INR(Indian Rupee)" << endl
         // <<"5. CNY(Chinese Yaun)"<<endl
         // <<"6. SAR(Saudi Riyal)"<<endl
         // <<"7. AED(UAE Dirham)"<<endl
         << "4. Exit" << endl;
}
// SAR Currency Conversion Submenu
void CurrencyConverter::SARConversionMenu()
{
    cout << "--- SAR Currency Conversion ---" << endl;
    cout << "Convert SAR to : " << endl;
    cout << "1. USD(United State Rupess)" << endl
         << "2. PKR(Pakistani Rupee)" << endl
         // <<"3. EUR(Euro)"<<endl
         // <<"4. GBP(British Pound)"<<endl
         << "3. INR(Indian Rupee)" << endl
         // <<"5. CNY(Chinese Yaun)"<<endl
         // <<"6. SAR(Saudi Riyal)"<<endl
         // <<"7. AED(UAE Dirham)"<<endl
         << "4. Exit" << endl;
}
// AED Currency Conversion Submenu
void CurrencyConverter::AEDConversionMenu()
{
    cout << "--- AED Currency Conversion ---" << endl;
    cout << "Convert AED to : " << endl;
    cout << "1. USD(United State Rupess)" << endl
         << "2. PKR(Pakistani Rupee)" << endl
         // <<"3. EUR(Euro)"<<endl
         // <<"4. GBP(British Pound)"<<endl
         // <<"3. INR(Indian Rupee)"<<endl
         // <<"5. CNY(Chinese Yaun)"<<endl
         // <<"6. SAR(Saudi Riyal)"<<endl
         // <<"7. AED(UAE Dirham)"<<endl
         << "3. Exit" << endl;
}

void CurrencyConverter::PerformUSDConversion()
{
    do
    {
        USDConversionMenu();
        cout << "Enter the currency conversion choice : ";
        cin >> choice;
        if (choice >= 1 && choice <= 7)
        {
            cout << "Enter the value : ";
            cin >> Amount;
            switch (choice)
            {
            case 1:
                cout << Amount << " in USD = " << Amount * 283.89 << " in PKR" << endl;
                break;
            case 2:
                cout << Amount << " in USD = " << Amount * 0.85 << " in EUR" << endl;
                break;
            case 3:
                cout << Amount << " in USD = " << Amount * 0.74 << " in GBP" << endl;
                break;
            case 4:
                cout << Amount << " in USD = " << Amount * 86.39 << " in INR" << endl;
                break;
            case 5:
                cout << Amount << " in USD = " << Amount * 7.17 << " in CNY" << endl;
                break;
            case 6:
                cout << Amount << " in USD = " << Amount * 3.75 << " in SAR" << endl;
                break;
            case 7:
                cout << Amount << " in USD = " << Amount * 3.67 << " in AED" << endl;
                break;
            }
        }
    } while (choice != 8);
    if (choice == 8)
    {
        cout << "Exiting... Thanks for using USD Conversion" << endl;
        return;
    }
}
void CurrencyConverter::PerformPKRConversion()
{
    do
    {
        PKRConversionMenu();
        cout << "Enter the currency conversion choice : ";
        cin >> choice;
        if (choice >= 1 && choice <= 4)
        {
            cout << "Enter the amount in PKR : ";
            cin >> Amount;
            switch (choice)
            {
            case 1:
                cout << Amount << " in PKR = " << Amount * 0.0035 << " in USD" << endl;
                break;
            case 2:
                cout << Amount << " in PKR = " << Amount * 0.0026 << " in GBP" << endl;
                break;
            case 3:
                cout << Amount << " in PKR = " << Amount * 0.30 << " in INR" << endl;
                break;
            case 4:
                cout << Amount << " in PKR = " << Amount * 0.025 << " in CNY" << endl;
                break;
            }
        }
    } while (choice != 5);
    if (choice == 5)
    {
        cout << "Exiting... Thanks for using PKR Conversion" << endl;
        return;
    }
}
void CurrencyConverter::PerformEURConversion()
{
    do
    {
        EURConversionMenu();
        cout << "Enter the currency conversion choice : ";
        cin >> choice;
        if (choice >= 1 && choice <= 4)
        {
            cout << "Enter the amount in EUR : ";
            cin >> Amount;
            switch (choice)
            {
            case 1:
                cout << Amount << " in EUR = " << Amount * 1.17 << " in USD" << endl;
                break;
            case 2:
                cout << Amount << " in EUR = " << Amount * 333.47 << " in PKR" << endl;
                break;
            case 3:
                cout << Amount << " in EUR = " << Amount * 0.87 << " in GBP" << endl;
                break;
            case 4:
                cout << Amount << " in EUR = " << Amount * 101.39 << " in INR" << endl;
                break;
            }
        }
    } while (choice != 5);
    if (choice == 5)
    {
        cout << "Exiting... Thanks for using EUR Conversion" << endl;
        return;
    }
}
void CurrencyConverter::PerformGBPConversion()
{
    do
    {
        GBPConversionMenu();
        cout << "Enter the currency conversion choice : ";
        cin >> choice;
        if (choice >= 1 && choice <= 4)
        {
            cout << "Enter the amount in GBP : ";
            cin >> Amount;
            switch (choice)
            {
            case 1:
                cout << Amount << " in GBP = " << Amount * 1.35 << " in USD" << endl;
                break;
            case 2:
                cout << Amount << " in GBP = " << Amount * 1.15 << " in EUR" << endl;
                break;
            case 3:
                cout << Amount << " in GBP = " << Amount * 385.26 << " in PKR" << endl;
                break;
            case 4:
                cout << Amount << " in GBP = " << Amount * 116.18 << " in INR" << endl;
                break;
            }
        }
    } while (choice != 5);
    if (choice == 5)
    {
        cout << "Exiting... Thanks for using GBP Conversion" << endl;
        return;
    }
}
void CurrencyConverter::PerformINRConversion()
{
    do
    {
        INRConversionMenu();
        cout << "Enter the currency conversion choice : ";
        cin >> choice;
        if (choice >= 1 && choice <= 4)
        {
            cout << "Enter the amount in INR : ";
            cin >> Amount;
            switch (choice)
            {
            case 1:
                cout << Amount << " in INR = " << Amount * 0.012 << " in USD" << endl;
                break;
            case 2:
                cout << Amount << " in INR = " << Amount * 3.31 << " in PKR" << endl;
                break;
            case 3:
                cout << Amount << " in INR = " << Amount * .0099 << " in EUR" << endl;
                break;
            case 4:
                cout << Amount << " in INR = " << Amount * .0086 << " in GBP" << endl;
                break;
            }
        }
    } while (choice != 5);
    if (choice == 5)
    {
        cout << "Exiting... Thanks for using INR Conversion" << endl;
        return;
    }
}
void CurrencyConverter::PerformCNYConversion()
{
    do
    {
        CNYConversionMenu();
        cout << "Enter the currency conversion choice : ";
        cin >> choice;
        if (choice >= 1 && choice <= 3)
        {
            cout << "Enter the amount in CNY : ";
            cin >> Amount;
            switch (choice)
            {
            case 1:
                cout << Amount << " in CNY = " << Amount * 0.14 << " in USD" << endl;
                break;
            case 2:
                cout << Amount << " in CNY = " << Amount * 39.57 << " in PKR" << endl;
                break;
            case 3:
                cout << Amount << " in CNY = " << Amount * 12.04 << " in INR" << endl;
                break;
            }
        }
    } while (choice != 4);
    if (choice == 4)
    {
        cout << "Exiting... Thanks for using CNY Conversion" << endl;
        return;
    }
}
void CurrencyConverter::PerformSARConversion()
{
    do
    {
        SARConversionMenu();
        cout << "Enter the currency conversion choice : ";
        cin >> choice;
        if (choice >= 1 && choice <= 2)
        {
            cout << "Enter the amount in SAR : ";
            cin >> Amount;
            switch (choice)
            {
            case 1:
                cout << Amount << " in SAR = " << Amount * 0.27 << " in USD" << endl;
                break;
            case 2:
                cout << Amount << " in SAR = " << Amount * 75.95 << " in PKR" << endl;
                break;
            }
        }
    } while (choice != 3);
    if (choice == 3)
    {
        cout << "Exiting... Thanks for using SAR Conversion" << endl;
        return;
    }
}
void CurrencyConverter::PerformAEDConversion()
{
    do
    {
        AEDConversionMenu();
        cout << "Enter the currency conversion choice : ";
        cin >> choice;
        if (choice >= 1 && choice <= 2)
        {
            cout << "Enter the amount in AED : ";
            cin >> Amount;
            switch (choice)
            {
            case 1:
                cout << Amount << " in AED = " << Amount * 0.27 << " in USD" << endl;
                break;
            case 2:
                cout << Amount << " in AED = " << Amount * 77.57 << " in PKR" << endl;
                break;
            }
        }
    } while (choice != 3);
    if (choice == 3)
    {
        cout << "Exiting... Thanks for using AED Conversion" << endl;
        return;
    }
}
// === CURRENCY CONVERSION MAIN FUNCTION
void CurrencyConverter::CurrencyConversion()
{
    do
    {
        ShowCurrencyConverterMenu();
        cout << "Choose The Conversion From Above : ";
        cin >> choice;
        if (choice >= 1 && choice <= 8)
        {
            switch (choice)
            {
            case 1:
                PerformUSDConversion();
                break;
            case 2:
                PerformPKRConversion();
                break;
            case 3:
                PerformEURConversion();
                break;
            case 4:
                PerformGBPConversion();
                break;
            case 5:
                PerformINRConversion();
                break;
            case 6:
                PerformCNYConversion();
                break;
            case 7:
                PerformSARConversion();
                break;
            case 8:
                PerformAEDConversion();
                break;
            }
        }
    } while (choice != 9);
    if (choice == 9)
    {
        cout << "Exiting... Thanks for Using CURRENCY CONVERTOR" << endl;
        return;
    }
}