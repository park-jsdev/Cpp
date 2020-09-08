// Business logic of project, before breaking up into OOD

// TODO:
// We can use operator overloading or convert input into appropriate int cases if we wanted to use operators such as '+' or '-'
// multiple cases
// interface?
// basic and scientific calculator classes


#include <iostream>
#include <math.h>
#include <string>

using namespace std;

int main() {
int option = 9;
int basic = 1;
int sci = 1;
double result = 0;
double input;
double PI = 3.14159265; 

cout << "Calculator by Parkjsdev" << endl;
cout << "Main Menu" << endl << "----------------------------" << endl << endl;
cout << "0.Exit 1.Basic Calculator 2.Scientific Calculator 3.Ans" << endl;
cout << "--------------------------------------------------------" << endl;
cout << "Option: ";
cin >> option;
cout << endl; 

while (option != 0) {

        // outer switch
        switch (option){
                case 0:
                        cout << "Exit all";
                        break;

                case 1:
                // Basic Calculator
                basic:
                cout << "Basic Calculator Menu" << endl << "----------------------------" << endl << endl;
                if (result == 0){
                        cout << "Num: ";
                        cin >> result;  
                } else {
                        cout << "Num: " << result << endl << endl;
                }
                cout << "1.+ 2.- 3.x 4.% 5.sqrt 6.^2 9.Scientific mode 0.Exit" << endl;
                cout << "------------------------------------------------------" << endl;
                cin >> basic;
                cout << endl;
                switch (basic){
                        case 0:
                                cout << "Main Menu" << endl << "----------------------------" << endl << endl;
                                cout << "0.Exit 1.Basic Calculator 2.Scientific Calculator 3.Ans" << endl;
                                cout << "--------------------------------------------------------" << endl;
                                cout << "Option: ";
                                cin >> option;  
                                break;
                        case 1:
                                cout << " + ";
                                cin >> input;
                                result += input;
                                break;
                        case 2:
                                cout << " - ";
                                cin >> input;
                                result -= input;
                                break;
                        case 3:
                                cout << " * ";
                                cin >> input;
                                result *= input;
                                break;
                        case 4:
                                cout << " / ";
                                cin >> input;
                                result /= input;
                                break;
                        case 5:
                                cout << " Square Root of " << result;
                                result = sqrt(result);
                                break;
                        case 6:
                                cout << result << " Squared";
                                result *= result;
                                break;
                        case 9:
                                cout << "Scientific Mode" << endl;
                                option = 2;
                                goto sci;
                                break;
                        default:
                                cout << "Error";
                                break;
                }
                cout << " = " << result << endl << endl;
                break;

                case 2:
                // Scientific Calculator
                sci:
                cout << "Scientific Calculator Menu" << endl << "----------------------------" << endl << endl;
                if (result == 0){
                        cout << "Num: ";
                        cin >> result;  
                } else {
                        cout << "Num: " << result << endl << endl;
                }
                cout << "1.Exponent 2.Sin(x) 3.Cos(x) 4.Tan(x) 5.Inv Sin(x) 6.Inv Cos(x) 7.Inv Tan(x) 8.Log(x) 9.Log10(x) 10.Basic mode 0.E(x)it" << endl;
                cout << "-------------------------------------------------------------------------------------------------------------------------" << endl;
                cin >> sci;
                cout << endl;
                switch (sci){
                        case 0:
                                cout << "Main Menu" << endl << "----------------------------" << endl << endl;
                                cout << "0.Exit 1.Basic Calculator 2.Scientific Calculator 3.Ans" << endl;
                                cout << "------------------------------------------------------" << endl;
                                cout << "Option: ";
                                cin >> option; 
                                break;
                        case 1: 
                                cout << result << "^ "; 
                                cin >> input; 
                                result = pow(result,input);
                                break; 
                        case 2: 
                                cout << "Sin(x)" << endl; 
                                result = sin(result);
                                break; 
                        case 3: 
                                cout << "Cos(x)" << endl;
                                result = cos(result); 
                                break; 
                        case 4: 
                                cout << "Tan(x)" << endl; 
                                result = tan(result);
                                break; 
                        case 5: 
                                cout << "Inverse of Sin(x)" << endl; 
                                result = asin(result)*180.0/PI;
                                break; 
                        case 6: 
                                cout << "Inverse of Cos(x)" << endl; 
                                result = cos(result)*180.0/PI;
                                break; 
                        case 7:  
                                cout << "Inverse of Tan(x)" << endl; 
                                result = atan(result)*180.0/PI;
                                break; 
                        case 8: 
                                cout << "Log(x) = " << endl; 
                                result = log(result);
                                break; 
                        case 9: 
                                cout << "Log(x) with base 10" << endl; 
                                result = log10(result);
                                break;
                        case 10:
                                cout << "Basic Mode" << endl;
                                option = 1;
                                goto basic;
                                break;
                        default:
                                cout << "1.Exponent 2.Sin(x) 3.Cos(x) 4.Tan(x) 5.Inv Sin(x) 6.Inv Cos(x) 7.Inv Tan(x) 8.Log(x) 9.Log10(x) 10.Basic mode 0.E(x)it" << endl;
                                cout << "-------------------------------------------------------------------------------------------------------------------------" << endl;
                                cout << "Option: ";
                }
                cout << " = " << result << endl << endl;
                break;

                case 3:
                        cout << "= " << result << endl << endl;
                        result = 0;
                        cout << " 0.Exit 1.Basic Calculator 2.Scientific Calculator 3.Ans" << endl;
                        cout << "--------------------------------------------------------" << endl;
                        cout << "Option: ";
                        cin >> option;
                        break;

                default:
                        cout << "Error. Enter valid number" << endl;
        }
   }
  
   return 0;
}