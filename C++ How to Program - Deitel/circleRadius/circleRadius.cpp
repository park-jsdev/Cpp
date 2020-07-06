// circle's diameter = 2R
// circle's area = piR^2
// circle's circumference = 2piR
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    float radius;

    cout<<"Enter radius: ";
    cin>>radius;


    cout << "Area: "<< 3.14*pow(radius,2) << " Diameter: "<< 2*radius
    << " Circumference: "<< 2*3.14*radius;

    return 0; 

}