#include <iostream>
#include <algorithm>
#include <array>
#include <iterator>
#include <bits/stdc++.h> 
using namespace std;
int getLength(char *);


int main()
{
    char str[100];
    char rev[100];
    int len = 0;
    int rLen = 0;

    bool quit;
    while (!quit){
    cout << endl << "Menu: " << endl << "1. Input a String" << endl << "2. Reverse a String" << endl <<
    "3. Compare Two Strings" << endl << "4. Concatenate Two Strings" << endl << "5. End" << endl; 

    int menu;
    cin >> menu;
    switch(menu){
        case 1:
        {
            cout << "1. Enter a string :" << endl;
            cin >> str;
            cout << "Entered: " << str << endl;
        }
            break;
        case 2:
        {
            cout << "2. Reverse a String" << endl;
            cout << "Enter a string :" << endl;
            cin >> str;
            len = getLength(str);
            for (int i=0, k=len-1; i<len; i++, k--){
                rev[k] = str[i];
            }
            cout << endl << rev;
        } 
            break;
        case 3:
        {
            cout << "3. Compare Two Strings" << endl;
            cout << "Enter string one: " << endl;
            cin >> str;
            len = getLength(str);
            cout << "Enter string two: " << endl;
            cin >> rev;
            rLen = getLength(rev);
            if (len != rLen){
                cout << "They are not the same." << endl;
            } else {
                for (int i=0; i<len; i++){
                    if (str[i] != rev[i]){
                        cout << "They are not the same." << endl;
                        goto end;
                    }
                }
                cout << "They are the same." << endl;
            }
        }end:
            break;
        case 4:
        {
            cout << "4. Concatenate Two Strings" << endl;
            cout << "Enter string one: " << endl;
            cin >> str;
            len = getLength(str);
            cout << "Enter string two: " << endl;
            cin >> rev;
            rLen = getLength(rev);
            char concat[len+rLen];
            int k = 0;
            int l = 0;
            while (str[k] != '\0'){
                concat[k] = str[k];
                k++;
            }
            while (rev[l] != '\0'){
                concat[k+l] = rev[l];
                l++;
            }
            cout << "New String is: " << concat << endl;
        }
            break;
        case 5:
        {
            cout << "End.";
            quit = !quit;
        }
    }
    }



    return 0;
}

int getLength(char *p)
{

    int ctr=0;
    while (*p)
    { cout << *p << " " ;
        ctr++;
        p++;

    }
    return ctr;
}
