#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    int i = 0;
    int guess;
    int r = rand() % 100 + 1;
    cout<<"Guess a number: "<<endl;
    while (guess!=r){
        cin>>guess;
        if (guess < r){
            if (r - guess >= 25){
                cout<<"You are cold on lower side -----"<<endl;
            } else {
                cout<<"You are hot on lower side ---"<<endl;
            }
        }
        if (guess > r){
            if (guess -r >= 25){
                cout<<"You are cold on upper side +++++"<<endl;
            } else {
                cout<<"You are hot on upper side +++"<<endl;
            }
        }
        else if (guess == r) {
            cout<<"### YOU WIN! ###"<<endl;
            break;
        }
        cout<<"Guess again: "<<endl;
    }
    return 0;
}