#include <iostream>
#include <queue>
#include <stack>

using namespace std;

// Used queue and stack from STL to find the palindrome
int main(){
    int num;

    cout<<"Enter integer: ";
    cin>>num;

    if (!cin || num >= 99999){
        cin.clear();
        cout<<"Not valid.";
    } else {
        queue<int> q;
        stack<int> stack;
        int lsd;
        int sum=0;
        while (num >= 10){
            // 1234
            lsd = num%10; // 4
            num/=10; // 123
            q.push(lsd); // 4 3 2 1 -> 4 3 2 1
            stack.push(lsd); // 4 3 2 1 -> 1 2 3 4
            sum+=lsd;
        } 
        q.push(num);
        stack.push(num);
        while (!q.empty() && !stack.empty()){
            if (q.front() != stack.top()){
                cout<<"Not a palindrome."<<endl;
                break;
            } else {
                q.pop();
                stack.pop();
            }
            if (q.empty() && stack.empty()){
                cout<<"It's a palindrome."<<endl;
            }
        } 
        sum+=num;
        cout<<"Sum is "<<sum;
    }
    return 0;
}