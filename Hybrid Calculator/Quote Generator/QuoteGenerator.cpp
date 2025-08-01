#include "QuoteGenerator.h"
#include <iostream>

void QuoteGenerator:: ShowRandomQuote()
{
    ifstream Infile("Quote Generator/All_Quotes.txt");
    if(!Infile)
    {
        cout<<"Unable to open the Quotes.txt File"<<endl;
    }

    string line;
    while(getline(Infile,line))
    {
        if(!line.empty())
        {
            Quote.push_back(line);
        }
    }
    Infile.close();

    srand(time(0));
    int index=rand() % Quote.size();
    cout<<"\" "<<Quote[index]<<" \""<<endl;
}
