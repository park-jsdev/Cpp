#include <iostream>
using namespace std;

int main(){

    int num_1, num_2;
    cout<<"Enter num1: ";
    cin>>num_1;
    cout<<"Enter num2: ";
    cin>>num_2;

    if (num_1 == num_2){
        cout<<"The numbers are equal";
    } else {
        if (num_1 > num_2){
        cout<<num_1;
    } else {
        cout<<num_2;
    }
    cout<<" is larger.";
    }
    return 0;
}