#ifndef HYBRID_CALCULATOR_H
#define HYBRID_CALCULATOR_H

#include<iostream>
#include<vector>
#include<string>

#include "Unit Converter\UnitConverter.h"
#include "Unit Converter\UnitConverter.cpp"
#include "Currency Converter\CurrencyConverter.h"
#include "Currency Converter\CurrencyConverter.cpp"
#include "Basic Calculator\BasicCalculator.h"
#include "Basic Calculator\BasicCalculator.cpp"
#include "Scientific Calculator\ScientificCalculator.h"
#include "Scientific Calculator\ScientificCalculator.cpp"
#include "Quote Generator\QuoteGenerator.h"
#include "Quote Generator\QuoteGenerator.cpp"

// === HYBRID CLASS===
class HybridCalculator
{
private:
    int choice;
    vector<string> history;
    vector<string> Allhistory;

    void ShowRecentHistory();
    vector<string> LoadResult();
    void ShowHistory();
    void SaveResult(vector<string> &Result);
    void DeleteAllHistoryPermanently();
    void DeleteHistoryByIndex();

public:
    void ShowMenu();
};

#endif