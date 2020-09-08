// Calculator base class
#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <iostream>

class Calculator {

protected:
    double input;
    const double PI = 3.14159265;

public:
    Calculator();
    Calculator(int, int, int, double);

    int getOption() const;
    void setOption(int);

    int getBasic() const;
    void setBasic(int);

    int getSci() const;
    void setSci(int);

    double getResult() const;
    void setResult(double);

    double getInput() const;
    void setInput(double);

    void mainMenu();
    bool checkNan(double);

    void checkInput(const std::istream&);

    virtual ~Calculator(){} // one virtual function to enable runtime polymorphism

private:
    int option;
    int basic;
    int sci;
    double result;
};

#endif // CALCULATOR_H