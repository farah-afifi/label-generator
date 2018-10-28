#ifndef LABELGENERATOR_H
#define LABELGENERATOR_H

#include <string>
#include <iostream>
#include <iomanip>
using namespace std;

class LabelGenerator
{
    private:
        string label;
        int counter;
    public:
        LabelGenerator();
        LabelGenerator(string lab,int initial);
        string nextlabel();

};

#endif // LABELGEN_H
