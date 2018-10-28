#include "LabelGenerator.h"
#include <string>
#include <iostream>
#include <iomanip>
#include <sstream>
LabelGenerator::LabelGenerator()
{

}

LabelGenerator::LabelGenerator(string lab,int initial=0):label(lab),counter(initial)
{

}

string LabelGenerator:: nextlabel(){
    string l=label;

    l+=' '+ to_string(counter);
    counter++;
    return l;
}
