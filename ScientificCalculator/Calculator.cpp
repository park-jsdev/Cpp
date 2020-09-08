// Abstract base class Calculator member function definitions
#include <iostream>
#include <string>
#include <math.h>
#include "Calculator.h"

using std::cout;
using std::cin;
using std::endl;

// Default constructor
Calculator::Calculator(){
    setOption(9);
    setBasic(1);
    setSci(1);
    setResult(0);
    setInput(0);
}

// Parameterized constructor
Calculator::Calculator(int option, int basic, int sci, double result){
    setOption(option);
    setBasic(basic);
    setSci(sci);
    setResult(result);
    setInput(0);
}

// Getter and Setters
int Calculator::getOption() const{
    return option;
}

void Calculator::setOption(int option){
    this->option = option;
}

int Calculator::getBasic() const{
    return basic;
}

void Calculator::setBasic(int basic){
    this->basic = basic;
}
int Calculator::getSci() const{
    return sci;
}

void Calculator::setSci(int sci){
    this->sci = sci;
}

double Calculator::getResult() const{
    return result;
}

void Calculator::setResult(double result){
    this->result = result;
}

double Calculator::getInput() const{
    return input;
}

void Calculator::setInput(double input){
    this->input = input;
}

// Main Menu
void Calculator::mainMenu() {
    if (getResult() != 0){
        cout << "Num: " << getResult() << endl << endl;
    }
    cout << "Main Menu" << endl << "----------------------------" << endl << endl;
    cout << "0.Exit 1.Basic Calculator 2.Scientific Calculator 3.Ans" << endl;
    cout << "----------------------------------------------------" << endl;
    cout << "Option: ";
    checkInput(cin);
    // check for valid options
    while (input != 0 && input != 1 && input !=2 && input !=3){
        cout << "0.Exit 1.Basic Calculator 2.Scientific Calculator 3.Ans" << endl;
        cout << "----------------------------------------------------" << endl;
        cout << "Option: ";
        checkInput(cin);
    }
    setOption(input);  
}

// Checking for NaN or infinity
// We can compare the number with itself. If the number is complex, it will return false. If it is a real number, it will return true
// https://www.geeksforgeeks.org/nan-in-cpp-what-is-it-and-how-to-check-for-it/
// if that is the case, immediately change the result to zero. Also return a bool.
bool Calculator::checkNan(double result){
    if (result != result || isinf(result)){
        setResult(0);
        cout << "Not a number! Try again." << endl << endl;
        return true;
    }
    return false;
}

// Checking input for double, if that is the case, put it as input
//https://isocpp.org/wiki/faq/input-output
void Calculator::checkInput(const std::istream& in){
    cout << std::flush; // we need flush so that previous cout prints without waiting on cin
    double number;
    while (!(cin >> number)){
        cout << "Not a number! Try again." << endl << endl;
        cin.clear();
        // Discard previous input
        cin.ignore(123, '\n');
    }
    setInput(number);
}

// TODO:
// Use operator overloader >> to check input.

// Use this method to both set input and check for non-numbers
// istream: https://stackoverflow.com/questions/20925828/passing-input-as-a-function-argument-using-cin
// https://stackoverflow.com/questions/48664037/c-specify-input-from-istream-and-test-it
// input validation for number: https://jesushilarioh.com/error-checking-input-validation-in-c-plus-plus-double/
// std::istream& operator>> (std::istream &in, double input){
//     double number;
//     while(!(in >> number)){
//         cout << "Not a number!" << endl << endl;
//         cin.clear();
//         // Discard previous input
//         cin.ignore(123, '\n');
//     }
//     return in;
// }