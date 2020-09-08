#include <iostream>
#include <math.h>
#include <string>

using std::cout;
using std::cin;
using std::endl;

#include "BasicCalculator.h"

// TODO:
// Try to use dynamic casting to just pass all the values from base calculator to derived (basic and sci) without using them as parameters
// Default constructor should just get parameters from existing Calculator object
// cast conversion base to derived class

// We need to make sure all the Calculator variables are maintained between Sci and Basic Mode
BasicCalculator::BasicCalculator(int option, int basic, int sci, double result){
    // constructor
    setOption(option);
    setBasic(basic);
    setSci(sci);
    setResult(result);
    setInput(0);
}

// function to display Basic Calculator Menu
// We use a public temp variable in the class definition to temporarily store cin variable to use for setters.
void BasicCalculator::displayMenu(){
    cout << "Basic Calculator Menu" << endl << "----------------------------" << endl << endl;
    if (getResult() == 0){
            cout << "Num: ";
            checkInput(cin);
            setResult(input);  
    } else {
            cout << "Num: " << getResult() << endl << endl;
    }
    cout << "1.+ 2.- 3.x 4./ 5.sqrt 6.^2 0.Menu" << endl;
    cout << "------------------------------------------------------" << endl;
    checkInput(cin);
    setBasic(input);
    cout << endl;
}

// Exit
void BasicCalculator::exit(){
    cout << "Main Menu" << endl << "----------------------------" << endl << endl;
    cout << "0.Exit 1.Basic Calculator 2.Scientific Calculator 3.Ans" << endl;
    cout << "------------------------------------------------------" << endl;
    cout << "Option: ";
    checkInput(cin);
    setOption(input); 
}

// Addition
void BasicCalculator::add(){
    cout << getResult() << " + ";
    checkInput(cin);
    setResult(getResult() + input);
}

// Subtraction
void BasicCalculator::subtract(){
    cout << getResult() << " - ";
    checkInput(cin);
    setResult(getResult() - input);
}

// Multiplication
void BasicCalculator::multiply(){
    cout << getResult() << " * ";
    checkInput(cin);
    setResult(getResult() * input);
}

// Division
void BasicCalculator::divide(){
    cout << getResult() << " / ";
    checkInput(cin);
    setResult(getResult() / input);
}

// Square Root
void BasicCalculator::squareRoot(){
    cout << " Square Root of " << getResult();
    setResult(sqrt(getResult()));
}

// Square
void BasicCalculator::square(){
    cout << getResult() << " Squared";
    setResult(getResult()*getResult());
}

// TODO:
// Error (Exception Handling)
void BasicCalculator::error(){
    cout << "Error" << endl;
    // Exception e?
}