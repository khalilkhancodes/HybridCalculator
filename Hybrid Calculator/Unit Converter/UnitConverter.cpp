#include "UnitConverter.h"
#include <iostream>
using namespace std;

UnitConverter::UnitConverter()
{
    measurement = 0;
}
void UnitConverter::ShowConverterMenu()
{
    cout << "----- UNITS CONVERTER -----" << endl;
    cout << "Select Catagory : " << endl;
    cout << "1. length" << endl
         << "2. Tamperature" << endl
         << "3. Weight" << endl
         << "4. Speed" << endl
         << "5. Power" << endl
         << "6. Pressure" << endl
         << "7. Area" << endl
         << "8. Volume" << endl
         << "9. Back" << endl;
    cout << "--------------------------" << endl;
}
// === LENGTH CONVERSION ===
void UnitConverter::LengthConversion()
{
    cout << "--- LENGTH CONVERSIONS ---- " << endl;
    do
    {
        cout << "1. Kilometers - Miles" << endl
             << "2. Miles -Kilometers" << endl
             << "3. Meters - Feets" << endl
             << "4. Feets - Meters" << endl
             << "5. Centimeters - Inches" << endl
             << "6. Inches - Centimeters" << endl
             << "7. Centimeters - meters" << endl
             << "8. Meters - Centimeters" << endl
             << "9. Exit" << endl;

        cout << "Choose from Above Menu : ";
        cin >> choice;
        if (choice >= 1 && choice <= 8)
        {
            switch (choice)
            {
            case 1:
                cout << "Enter the value in Kilometers : ";
                cin >> measurement;
                cout << "Value in Miles = " << measurement * .621371 << endl;
                break;
            case 2:
                cout << "Enter the value in Miles : ";
                cin >> measurement;
                cout << "Value in Kilometers = " << measurement / .621371 << endl;
                break;
            case 3:
                cout << "Enter the value in Meters : ";
                cin >> measurement;
                cout << "Value in Feets = " << measurement * 3.28084 << endl;
                break;
            case 4:
                cout << "Enter the value in Feets : ";
                cin >> measurement;
                cout << "Value in Miles = " << measurement / 3.28084 << endl;
                break;
            case 5:
                cout << "Enter the value in Centimeters : ";
                cin >> measurement;
                cout << "Value in Inches = " << measurement * .393701 << endl;
                break;
            case 6:
                cout << "Enter the value in Inches : ";
                cin >> measurement;
                cout << "Value in Centimeters = " << measurement * 2.54 << endl;
                break;
            case 7:
                cout << "Enter the value in Centimeter : ";
                cin >> measurement;
                cout << "Value in Meters = " << measurement * .0001 << endl;
                break;
            case 8:
                cout << "Enter the value in Meters : ";
                cin >> measurement;
                cout << "Value in Centimeters = " << measurement * 1000 << endl;
                break;
            }
        }
    } while (choice != 9);
    if (choice == 9)
    {
        cout << "Exiting... Thanks for using length conversion" << endl;
        return;
    }
}
// === TEMPERATURE CONVERSION ===
void UnitConverter::TemperatureConversion()
{
    cout << "--- TEMPERATURE CONVERSION ---- " << endl;
    do
    {
        cout << "1. Celcius to Kelvin" << endl
             << "2. Kelvin to Celcius" << endl
             << "3. Celcius to Fahrenheit" << endl
             << "4. Fahrenheit to Celcius" << endl
             << "5. Kelvin to Fahrenheit" << endl
             << "6. Fahrenheit to Kelvin" << endl
             << "7. Exit" << endl;

        cout << "Choose from Above Menu : ";
        cin >> choice;
        if (choice >= 1 && choice <= 6)
        {
            switch (choice)
            {
            case 1:
                cout << "Enter the value in Celcius : ";
                cin >> measurement;
                cout << "Value in Kelvin = " << measurement + 273.16 << endl;
                break;
            case 2:
                cout << "Enter the value in Kelvin : ";
                cin >> measurement;
                cout << "Value in Celcius = " << measurement - 273.16 << endl;
                break;
            case 3:
                cout << "Enter the value in Celcius : ";
                cin >> measurement;
                cout << "Value in Fahreheit = " << (measurement * 1.8) + 32 << endl;
                break;
            case 4:
                cout << "Enter the value in Fahrenheit : ";
                cin >> measurement;
                cout << "Value in Celcius = " << (measurement - 32) * .555555 << endl;
                break;
            case 5:
                cout << "Enter the value in Kevin : ";
                cin >> measurement;
                cout << "Value in Fahrenheit = " << ((measurement - 273.16) * 1.8) + 32 << endl;
                break;
            case 6:
                cout << "Enter the value in Fahrenheit : ";
                cin >> measurement;
                cout << "Value in Kelvin = " << ((measurement - 32) * .55555) + 273.16 << endl;
                break;
            }
        }
    } while (choice != 7);
    if (choice == 7)
    {
        cout << "Exiting... Thanks for using Temperature conversion" << endl;
        return;
    }
}
// === WEIGHT CONVERSION ===
void UnitConverter::WeightConversion()
{
    cout << "--- WEIGHT CONVERSION ---- " << endl;
    do
    {
        cout << "1. Kilograms to Grams" << endl
             << "2. Grams to Kilograms" << endl
             << "3. Kilograms to Pounds" << endl
             << "4. Pounds to Kilograms" << endl
             << "5. Grams to Ounces" << endl
             << "6. Ounces to Grams" << endl
             << "7. Metric Tons to US Tons" << endl
             << "8. US Tons to Metric Tons" << endl
             << "9. Exit" << endl;
        cout << "Choose from Above Menu : ";
        cin >> choice;
        if (choice >= 1 && choice <= 7)
        {
            switch (choice)
            {
            case 1:
                cout << "Enter the value in Kilograms : ";
                cin >> measurement;
                cout << "Value in Grams = " << measurement * 1000 << endl;
                break;
            case 2:
                cout << "Enter the value in Grams : ";
                cin >> measurement;
                cout << "Value in Kilograms = " << measurement * 0.001 << endl;
                break;
            case 3:
                cout << "Enter the value in Kilogram : ";
                cin >> measurement;
                cout << "Value in Pounds = " << measurement * 2.20462 << endl;
                break;
            case 4:
                cout << "Enter the value in Pounds : ";
                cin >> measurement;
                cout << "Value in Kilogram = " << measurement * .453592 << endl;
                break;
            case 5:
                cout << "Enter the value in Grams : ";
                cin >> measurement;
                cout << "Value in Ounce = " << measurement * 0.035274 << endl;
                break;
            case 6:
                cout << "Enter the value in Ounce : ";
                cin >> measurement;
                cout << "Value in Grams = " << measurement * 28.3495 << endl;
                break;
            case 7:
                cout << "Enter the value in Metric Ton : ";
                cin >> measurement;
                cout << "Value in US Ton = " << measurement * 1.10231 << endl;
                break;
            case 8:
                cout << "Enter the value in US Ton : ";
                cin >> measurement;
                cout << "Value in Metric Ton = " << measurement / 1.10231 << endl;
                break;
            }
        }
    } while (choice != 9);
    if (choice == 9)
    {
        cout << "Exiting... Thanks for using Wieght Conversion" << endl;
        return;
    }
}
// === SPEED CONVERSION ===
void UnitConverter::SpeedConversion()
{
    cout << "--- SPEED CONVERSION ---- " << endl;
    do
    {
        cout << "1. Kilometers-Per-Hours(km/h) -> Miles-per-Hours(mph)" << endl
             << "2. Miles-per-Hours(mph) -> Kilometers-Per-Hours(km/h)" << endl
             << "3. Meter-per-second(m/s) -> Kilometers-per-Hours(km/h)" << endl
             << "4. Kilometers-per-Hours(km/h) -> Meter-per-second(m/s)" << endl
             << "5. Kilometers-per-second(km/s-> Meter-per-second(m/s)" << endl
             << "6. Meter-per-second(m/s) -> Kilometers-per-second(km/s)" << endl
             << "7. Exit" << endl;
        cout << "Choose from Above Menu : ";
        cin >> choice;
        if (choice >= 1 && choice <= 6)
        {

            switch (choice)
            {
            case 1:
                cout << "Enter the value in Km/h : ";
                cin >> measurement;
                cout << "Value in mph = " << measurement * 0.621371 << endl;
                break;
            case 2:
                cout << "Enter the value in mph : ";
                cin >> measurement;
                cout << "Value in Km/h = " << measurement * 1.60934 << endl;
                break;
            case 3:
                cout << "Enter the value in m/s : ";
                cin >> measurement;
                cout << "Value in km/h = " << measurement * 3.6 << endl;
                break;
            case 4:
                cout << "Enter the value in km/h : ";
                cin >> measurement;
                cout << "Value in m/s = " << measurement / 3.6 << endl;
                break;
            case 5:
                cout << "Enter the value in km/s : ";
                cin >> measurement;
                cout << "Value in m/s = " << measurement * 1000 << endl;
                break;
            case 6:
                cout << "Enter the value in m/s : ";
                cin >> measurement;
                cout << "Value in km/s = " << measurement / 1000 << endl;
                break;
            }
        }
    } while (choice != 7);
    if (choice == 7)
    {
        cout << "Exiting... Thanks for using Speed Conversion" << endl;
        return;
    }
}
// === POWER CONVERSION ===
void UnitConverter::PowerConversion()
{
    cout << "--- POWER CONVERSION ---- " << endl;
    do
    {
        cout << "\n1. Watts(W) to KiloWatts(kW)" << endl
             << "2. Kilowatts(kW) to Watts(W)" << endl
             << "3. Watts(W) to Housepower(HP)" << endl
             << "4. Housepower(HP) to Watts(W)" << endl
             << "5. KiloWatts(kW) to Housepower(HP)" << endl
             << "6. Housepower(HP) to KiloWatts(kW)" << endl
             << "7. Exit" << endl;
        cout << "Choose from Above Menu : ";
        cin >> choice;
        if (choice >= 1 && choice <= 6)
        {

            switch (choice)
            {
            case 1:
                cout << "Enter the value in Watts(W) : ";
                cin >> measurement;
                cout << "Value in KiloWatts(kW) = " << measurement / 1000 << endl;
                break;
            case 2:
                cout << "Enter the value in KiloWatts(kW) : ";
                cin >> measurement;
                cout << "Value in Watts(W) = " << measurement * 1000 << endl;
                break;
            case 3:
                cout << "Enter the value in Watts(W) : ";
                cin >> measurement;
                cout << "Value in Housepower(HP) = " << measurement / 745.7 << endl;
                break;
            case 4:
                cout << "Enter the value in Housepower(HP) : ";
                cin >> measurement;
                cout << "Value in Watts(W) = " << measurement * 745.7 << endl;
                break;
            case 5:
                cout << "Enter the value in KiloWatts(kW) : ";
                cin >> measurement;
                cout << "Value in Housepower(HP) = " << measurement * 1.34102 << endl;
                break;
            case 6:
                cout << "Enter the value in Housepower(HP) : ";
                cin >> measurement;
                cout << "Value in KiloWatts(kW) = " << measurement / 1.34102 << endl;
                break;
            }
        }
    } while (choice != 7);
    if (choice == 7)
    {
        cout << "Exiting... Thanks for using power Conversion" << endl;
        return;
    }
}
// === PRESSURE CONVERSION ===
void UnitConverter::PressureConversion()
{
    cout << "--- PRESSURE CONVERSION ---- " << endl;
    do
    {
        cout << "\n1. Pascal(Pa) to Bar(bar)" << endl
             << "2. Bar(bar) to Pascal(Pa)" << endl
             << "3. Pascal(Pa) to PSI" << endl
             << "4. PSI to Pascal(Pa)" << endl
             << "5. Atmosphere(atm) to Pascal(Pa)" << endl
             << "6. Pascal(Pa) to Atmosphere(atm)" << endl
             << "7. Exit" << endl;
        cout << "Choose from Above Menu : ";
        cin >> choice;
        if (choice >= 1 && choice <= 6)
        {

            switch (choice)
            {
            case 1:
                cout << "Enter the value in Pascal : ";
                cin >> measurement;
                cout << "Value in Bar = " << measurement / 100000 << endl;
                break;
            case 2:
                cout << "Enter the value in Bar : ";
                cin >> measurement;
                cout << "Value in Pascal = " << measurement * 100000 << endl;
                break;
            case 3:
                cout << "Enter the value in Pascal : ";
                cin >> measurement;
                cout << "Value in PSI = " << measurement / 6894.76 << endl;
                break;
            case 4:
                cout << "Enter the value in PSI : ";
                cin >> measurement;
                cout << "Value in Pascal = " << measurement * 6894.76 << endl;
                break;
            case 5:
                cout << "Enter the value in Pascal : ";
                cin >> measurement;
                cout << "Value in atm = " << measurement / 101325 << endl;
                break;
            case 6:
                cout << "Enter the value in atm : ";
                cin >> measurement;
                cout << "Value in Pascal = " << measurement * 101325 << endl;
                break;
            }
        }
    } while (choice != 7);
    if (choice == 7)
    {
        cout << "Exiting... Thanks for using Pressure Conversion" << endl;
        return;
    }
}
// === AREA CONVERSION ===
void UnitConverter::AreaConversion()
{
    cout << "--- PRESSURE CONVERSION ---- " << endl;
    do
    {
        cout << "\n1. Square Meters to Square Feet" << endl
             << "2. Square Feet to Square Meters" << endl
             << "3. Square Kilometers to Square Miles" << endl
             << "4. Square Miles to Square Kilometers" << endl
             << "5. Acres to Hectares" << endl
             << "6. Hectares to Acres" << endl
             << "7. Exit" << endl;
        cout << "Choose from Above Menu : ";
        cin >> choice;
        if (choice >= 1 && choice <= 6)
        {

            switch (choice)
            {
            case 1:
                cout << "Enter the value in Square Meters(m^2) : ";
                cin >> measurement;
                cout << "Value in Square Feet(ft^2) = " << measurement * 10.7639 << endl;
                break;
            case 2:
                cout << "Enter the value in Square Feet(ft^2) : ";
                cin >> measurement;
                cout << "Value in Square Meters(m^2) = " << measurement / 10.7639 << endl;
                break;
            case 3:
                cout << "Enter the value in Square Kilometers(km^2) : ";
                cin >> measurement;
                cout << "Value in Square Miles(mi^2) = " << measurement * 0.386102 << endl;
                break;
            case 4:
                cout << "Enter the value in Square Miles(mi^2) : ";
                cin >> measurement;
                cout << "Value in Square Kilometers(km^2) = " << measurement / 0.386102 << endl;
                break;
            case 5:
                cout << "Enter the value in Acres : ";
                cin >> measurement;
                cout << "Value in Hectares(ha) = " << measurement * 0.404686 << endl;
                break;
            case 6:
                cout << "Enter the value in Hectares(ha) : ";
                cin >> measurement;
                cout << "Value in Acres = " << measurement / 0.404686 << endl;
                break;
            }
        }
    } while (choice != 7);
    if (choice == 7)
    {
        cout << "Exiting... Thanks for using Area Conversion" << endl;
        return;
    }
}
// === VOLUME CONVERSION ===
void UnitConverter::VolumeConversion()
{
    cout << "--- VOLUME CONVERSION ---- " << endl;
    do
    {
        cout << "\n1. Liters to MiliLiters" << endl
             << "2. MiliLeters to Liters" << endl
             << "3. Liters to Cubic Meters" << endl
             << "4. Cubic Meters to Liters" << endl
             << "5. Gallons(US) to Liters" << endl
             << "6. Liters to Gallons" << endl
             << "7. Exit" << endl;
        cout << "Choose from Above Menu : ";
        cin >> choice;
        if (choice >= 1 && choice <= 6)
        {

            switch (choice)
            {
            case 1:
                cout << "Enter the value in miliLiter(ml) : ";
                cin >> measurement;
                cout << "Value in Liter(L) = " << measurement * 1000 << endl;
                break;
            case 2:
                cout << "Enter the value in Liter(L) : ";
                cin >> measurement;
                cout << "Value in miliLiter(ml) = " << measurement / 1000 << endl;
                break;
            case 3:
                cout << "Enter the value in Liter(L) : ";
                cin >> measurement;
                cout << "Value in m^3 = " << measurement / 1000 << endl;
                break;
            case 4:
                cout << "Enter the value in Cubic Meter (m^3) : ";
                cin >> measurement;
                cout << "Value in Liter(L) = " << measurement * 1000 << endl;
                break;
            case 5:
                cout << "Enter the value in gallons(gal) : ";
                cin >> measurement;
                cout << "Value in Liter(L) = " << measurement * 3.78541 << endl;
                break;
            case 6:
                cout << "Enter the value in Liter(L) : ";
                cin >> measurement;
                cout << "Value in gallons(gal) = " << measurement * 3.78541 << endl;
                break;
            }
        }
    } while (choice != 7);
    if (choice == 7)
    {
        cout << "Exiting... Thanks for using Volume Conversion" << endl;
        return;
    }
}
// === UNITS CONVERSION MAIN FUNCTION
void UnitConverter::UnitConversion()
{
    do
    {
        ShowConverterMenu();
        cout << "\nChoose from Above Menu : ";
        cin >> choice;
        if (choice >= 1 && choice <= 8)
        {
            switch (choice)
            {
            case 1:
                LengthConversion();
                break;
            case 2:
                TemperatureConversion();
                break;
            case 3:
                WeightConversion();
                break;
            case 4:
                SpeedConversion();
                break;
            case 5:
                PowerConversion();
                break;
            case 6:
                PressureConversion();
                break;
            case 7:
                AreaConversion();
                break;
            case 8:
                VolumeConversion();
                break;
            }
        }
    } while (choice != 9);
}