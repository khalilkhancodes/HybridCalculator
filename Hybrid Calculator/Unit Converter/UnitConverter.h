#ifndef UNIT_CONVERTER_H
#define UNIT_CONVERTER_H

#include<iostream>

// === UNIT CONVERTER CLASS===
class UnitConverter
{
private:
    double measurement;
    int choice;

public:
    UnitConverter();

    void ShowConverterMenu();

    void LengthConversion();
    void TemperatureConversion();
    void WeightConversion();
    void SpeedConversion();
    void PowerConversion();
    void PressureConversion();
    void AreaConversion();
    void VolumeConversion();

    void UnitConversion();
};
#endif