# Code Plan
# OOP Features

The calculator will have two derived classes: basic and scientific, which are derived from a base class: calculator, using polymorphism.
We will instantiate 1 object of each class at the beginning and take user input for them.
We will store variables needed for computations at the base level, and whenever we switch to either the base or sci mode, or back to main, we will pass all the current member variables to the corresponding object. We can reset the variables when we collect the answer. We use this OOP principle of encapsulation for our data members to ensure thread-safety.
The control flow of each class is implemented with a switch statement.

## Input Validation
We need to check input for strings, non-numbers (NaN) and infinity. In this program, no input will be strings, and we will only need numbers.

## Classes
Base Class: Calculator
Member variables:
	Protected: input, const Pi
	Private: option, basic, sci, result
We will declare Pi as a constant because we will never change it, and it will be protected, such that all derived classes can easily access it, even without an accessor. We use a protected base level variable “input” to use O(1) space for the user input that we will perform our input validation and calculations on.
For the private variables, option is the base level option to select which mode to use, basic is the basic mode’s switch value, sci is the scientific mode’s switch value, and result is the current total that we will pass from mode to mode. We store it at the base class level like “input”.
This class will contain the accessors and mutators for its member variables (getters and setters), except PI, because we never want to change it.

### Derived Class: Basic Calculator
-	Inherit from Calculator
This class will inherit all of Calculator’s member variables and functions, and add functionalities:
-	Display Basic Mode’s Menu
-	Addition
-	Subtraction
-	Multiply
-	Divide
-	Square Root
-	Square

### Derived Class: Scientific Calculator
-	Inherit from Calculator
This class will inherit all of Calculator’s member variables and functions, and add functionalities:
-	Exponent
-	Sin
-	Cos
-	Tan
-	Inverse Sin
-	Inverse Cos
-	Inverse Tan
-	Log
-	Log base 10

## Suggestions for Improvement
-	We can use operator overloading and/or with Regex to support operators like ‘+’ or “Add” to perform corresponding functions.
-	Use dynamic casting and/or upcasting to pass values from class to class by default.
-	Add GUI.

## Usage
-	Download all the files, either run test.exe with $ ./test or compile with your favorite compiler. On MinGW64: $ ``g++ test.cpp Calculator.cpp BasicCalculator.cpp ScientificCalculator.cpp Calculator.h BasicCalculator.h ScientificCalculator.h -o``
-	The main menu will appear
-	Make sure to enter a valid number, or you will get an error message, or the menu again
-	Choose the basic or scientific calculator and select what operation you would like
-	You can go to the above menu and retain the running total. Choose another mode and choose what operation you would like
-	Select Ans at the main menu to get your running total and reset it to zero, and finally, exit at the main menu to get your final answer and exit the program.
 
