#include <iostream>
#include <math.h>
#include <string>

using std::cout;
using std::cin;
using std::endl;

#include "ScientificCalculator.h"

// We need to make sure all the Calculator variables are maintained between Sci and Basic Mode
ScientificCalculator::ScientificCalculator(int option, int basic, int sci, double result){
    // constructor
    setOption(option);
    setBasic(basic);
    setSci(sci);
    setResult(result);
    setInput(0);
}

// function to display Scientific Calculator Menu
// We use a protected temp variable in the class definition to temporarily store cin variable to use for setters.
void ScientificCalculator::displayMenu(){
    cout << "Scientific Calculator Menu" << endl << "----------------------------" << endl << endl;
    if (getResult() == 0){
            cout << "Num: ";
            cin >> input;
            setResult(input);  
    } else {
            cout << "Num: " << getResult() << endl << endl;
    }
    cout << "1.Exponent 2.Sin(x) 3.Cos(x) 4.Tan(x) 5.Inv Sin(x) 6.Inv Cos(x) 7.Inv Tan(x) 8.Log(x) 9.Log10(x) 0.Menu" << endl;
    cout << "-------------------------------------------------------------------------------------------------------------------------" << endl;
    checkInput(cin);
    setSci(input);
    cout << endl;
}

// Exit
void ScientificCalculator::exit(){
    cout << "Main Menu" << endl << "----------------------------" << endl << endl;
    cout << "0.Exit 1.Basic Calculator 2.Scientific Calculator 3.Ans" << endl;
    cout << "------------------------------------------------------" << endl;
    cout << "Option: ";
    checkInput(cin);
    setOption(input); 
}

// Exponent
void ScientificCalculator::exponent(){
    cout << getResult() << "^ ";
    checkInput(cin);
    setResult(pow(getResult(), input));
}

// Sin
void ScientificCalculator::sinx(){
    cout << "Sin(" << getResult() << ") " << endl; 
    setResult(sin(getResult()));    
}

// Cos
void ScientificCalculator::cosx(){
    cout << "Cos(" << getResult() << ") " << endl; 
    setResult(cos(getResult()));    
}

// Tan
void ScientificCalculator::tanx(){
    cout << "Tan(" << getResult() << ") " << endl; 
    setResult(tan(getResult()));   
}
    
// aSin
void ScientificCalculator::asinx(){
    cout << "Inverse of Sin(" << getResult() << ") " << endl; 
    setResult(asin(getResult())*180.0/PI);
}

// aCos
void ScientificCalculator::acosx(){
    cout << "Inverse of Cos(" << getResult() << ") " << endl; 
    setResult(acos(getResult())*180.0/PI);
}

// aTan
void ScientificCalculator::atanx(){
    cout << "Inverse of Tan(" << getResult() << ") " << endl; 
    setResult(atan(getResult())*180.0/PI);
}

// Log
void ScientificCalculator::logx(){
    cout << "Log(" << getResult() << ") " << endl; 
    setResult(log(getResult()));
}

// Log Base 10
void ScientificCalculator::logBaseTen(){
    cout << "Log10(" << getResult() << ") " << endl; 
    setResult(log10(getResult()));
}

// TODO:
// Error (Exception Handling)
void ScientificCalculator::error(){
    cout << "Error" << endl;
    // Exception e?
}