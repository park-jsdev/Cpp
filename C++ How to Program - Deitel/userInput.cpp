#include <iostream>
#include <cmath>

using namespace std;

int factorial(int n){
    if (n <= 1) return 1;
    return factorial(n-1)*n;
}

int main(){
    int n;

    cout<<"Enter n: "<<endl;
    cin>>n;

    double numerator = 1;
    double denominator = 1;
    double sum = 1;

    for (int i=1;i<=n;i++){
        if (numerator<=4){
            numerator++;
        }
        sum += (numerator/(factorial(i)));
    }

    cout<<sum;
    return 0;
}