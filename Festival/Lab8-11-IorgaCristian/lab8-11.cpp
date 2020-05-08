#include <iostream>
#include "Tests.h"
using namespace std;

int main()
{
    cout << "Initializare modul testare - beep bop beep.";
    Test test;
    test.runAll();
    cout << "\nModul testare finalizat - beep beep.\n";
    return 0;
}

