#ifndef CURRENCY_CONVERTER_H
#define CURRENCY_CONVERTER_H
#include<string>

// === CURRENCY CONVERTER CLASS ===
class CurrencyConverter
{
private:
    double Amount;
    int choice;
public:
    CurrencyConverter();
    
    void ShowCurrencyConverterMenu();
    void USDConversionMenu();
    void PKRConversionMenu();
    void EURConversionMenu();
    void GBPConversionMenu();
    void INRConversionMenu();
    void CNYConversionMenu();
    void SARConversionMenu();
    void AEDConversionMenu();

    void PerformUSDConversion();
    void PerformPKRConversion();
    void PerformEURConversion();
    void PerformGBPConversion();
    void PerformINRConversion();
    void PerformCNYConversion();
    void PerformSARConversion();
    void PerformAEDConversion();

    void CurrencyConversion();
};

#endif