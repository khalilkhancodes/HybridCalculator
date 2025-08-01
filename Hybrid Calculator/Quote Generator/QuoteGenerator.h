#ifndef QUOTE_GENERATOR_H
#define QUOTE_GENERATOR_H

#include<iostream>
#include<vector>
#include<string>
#include<fstream>
#include<cstdlib>
#include<ctime>
using namespace std;

class QuoteGenerator{
    private:
    vector<string> Quote;
    public:
    void ShowRandomQuote();

};
#endif