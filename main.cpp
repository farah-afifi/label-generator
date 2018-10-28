#include <iostream>
#include "LabelGenerator.h"
using namespace std;

int main() {
    LabelGenerator figureNumbers("Figure ", 1);
    LabelGenerator pointNumbers("P", 0);
    cout << "Figure numbers: ";
    for (int i = 0; i < 3; i++) {
        if (i > 0) cout << ", ";
            cout << figureNumbers.nextlabel();
    }
    cout << endl << "Point numbers: ";
    for (int i = 0; i < 5; i++) {
        if (i > 0) cout << ", ";
            cout << pointNumbers.nextlabel();
    }
    cout << endl << "More figures: ";
    for (int i = 0; i < 3; i++) {
        if (i > 0) cout << ", ";
            cout << figureNumbers.nextlabel();
    }
    cout << endl;
    return 0;
}
