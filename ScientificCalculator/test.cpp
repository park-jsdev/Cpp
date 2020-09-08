#include <iostream>
#include <math.h>
#include <string>
#include "Calculator.h"
#include "BasicCalculator.h"
#include "ScientificCalculator.h"

using std::cout;
using std::cin;
using std::endl;

int main(){
    Calculator calc;
    BasicCalculator bCalc(calc.getOption(), calc.getBasic(), calc.getSci(), calc.getResult());
    ScientificCalculator sCalc(calc.getOption(), calc.getBasic(), calc.getSci(), calc.getResult());

    cout << "Calculator by Parkjsdev" << endl;
    calc.mainMenu();

while (calc.getOption() != 0) {
        // outer switch
        switch (calc.getOption()){
                case 0:
                        cout << "Exit all";
                        break;
                case 1:
                    // Basic Calculator
                    {
                        bCalc.setResult(calc.getResult());
                    }
                    bCalc.displayMenu();
                    switch (bCalc.getBasic()){
                        case 0:
                            calc.setResult(0);
                            calc.mainMenu();
                            break;
                        case 1:
                            bCalc.add();
                            break;
                        case 2:
                            bCalc.subtract();
                            break;
                        case 3:
                            bCalc.multiply();
                            break;
                        case 4:
                            bCalc.divide();
                            break;
                        case 5:
                            bCalc.squareRoot();
                            break;
                        case 6:
                            bCalc.square();
                            break;
                        default:
                            bCalc.displayMenu();
                            break;
                    }
                bCalc.checkNan(bCalc.getResult());
                calc.setResult(bCalc.getResult());
                cout << " = " << bCalc.getResult() << endl << endl;
                break;

                case 2:
                    // Scientific Calculator
                    {
                        sCalc.setResult(calc.getResult());
                    }
                    sCalc.displayMenu();
                    switch (sCalc.getSci()){
                        case 0:
                            calc.setResult(0);
                            calc.mainMenu();
                            break;
                        case 1: 
                            sCalc.exponent();
                            break; 
                        case 2: 
                            sCalc.sinx();
                            break; 
                        case 3: 
                            sCalc.cosx();
                            break; 
                        case 4: 
                            sCalc.tanx();
                            break; 
                        case 5: 
                            sCalc.asinx();
                            break; 
                        case 6: 
                            sCalc.acosx();
                            break; 
                        case 7:  
                            sCalc.atanx();
                            break; 
                        case 8: 
                            sCalc.logx();
                            break; 
                        case 9: 
                            sCalc.logBaseTen();
                            break;
                        default:
                            sCalc.displayMenu();
                            break;
                }
                sCalc.checkNan(sCalc.getResult());
                calc.setResult(sCalc.getResult());
                cout << " = " << sCalc.getResult() << endl << endl;
                break;

                // Get Answer and reset it to zero.
                case 3:
                    cout << " = " << calc.getResult() << endl << endl;
                    calc.setResult(0);
                    calc.mainMenu();
                    break;

                default:
                    // Defensive programming. We shouldn't get here.
                    cout << "Error. Enter valid number" << endl;
                    break;
        }
   }


    return 0;
}