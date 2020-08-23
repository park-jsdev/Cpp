#include <iostream>
#include <algorithm>
#include <array>
#include <iterator>
using namespace std;
int getLength(char *);
void toUpper(char *);
void toLower(char *);
void toProper(char *);
void toPattern(char *);

int main()
{
    char name[80];

    cout << "Enter a name :";
    cin >> name;

    int r= getLength(name);

    cout << "The length of string is :" << r;
    toUpper(name);
    cout << "The string in Capital Letters is: " << name << endl;

    toLower(name);
    cout << "The string in Lower Letters is: " << name << endl;
    
    toProper(name);
    cout << "The string in Proper Letters is: " << name << endl;

    toPattern(name);
    cout << "The string in Pattern Letters is: " << name << endl;

}

void toUpper(char *p)
{

    while (*p)
    {

      *p = (*p>='a' && *p<='z') ? *p=*p-32 : *p;
        p++;

    }


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

void toLower(char *p) {
// write code to convert to small cases
    while (*p)
    {
        *p = (*p>='A' && *p<='Z') ? *p=*p+32 : *p;
        p++;
    }
}

void toProper(char *p) {
// write code to convert to proper case i.e. firts capital and rest small
int count = 0;
    while (*p)
    {
    if (count == 0){
        *p = (*p>='a' && *p<='z') ? *p=*p-32 : *p;
        p++;
        count++;
    } else {
        *p = (*p>='A' && *p<='Z') ? *p=*p+32 : *p;
        p++;
    }
    }
}

void toPattern(char *p) {
// write code to convert to the pattern ... aBcDeFgHiJ...one capital and one small
bool flag;
    while (*p)
    {
    if (flag){
        *p = (*p>='a' && *p<='z') ? *p=*p-32 : *p;
        p++;
        flag = !flag;
    } else {
        *p = (*p>='A' && *p<='Z') ? *p=*p+32 : *p;
        p++;
        flag = !flag;
    }
    }
}
