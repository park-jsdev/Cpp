#ifndef BASICCALCULATOR_H
#define BASICCALCULATOR_H

#include "Calculator.h"

class BasicCalculator : public Calculator {

public:
    BasicCalculator(int, int, int, double);

    void displayMenu();
    void exit();
    void add();
    void subtract();
    void multiply();
    void divide();
    void squareRoot();
    void square();
    void error();

private:
    

};
#endif // BASICCALCULATOR_H