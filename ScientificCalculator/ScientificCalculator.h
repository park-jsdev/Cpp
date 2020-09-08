#ifndef SCIENTIFICCALCULATOR_H
#define SCIENTIFICCALCULATOR_H

#include "Calculator.h"

class ScientificCalculator : public Calculator {
public:
    ScientificCalculator(int, int, int, double);

    void displayMenu();
    void exit();
    void exponent();
    void sinx();
    void cosx();
    void tanx();
    void asinx();
    void acosx();
    void atanx();
    void logx();
    void logBaseTen();
    void error();

private:
};
#endif // SCIENTIFICCALCULATOR_H