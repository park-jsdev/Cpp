#include<iostream>
#include<conio.h>
using std::cout; // program uses cout
using std::cin; // program uses cin
using std::endl; // program uses endl

int main()
{
//clear the screen.
//declare variable type float and char
float a,b,area;
char ch;
while (ch!='x')
{
    //Input the choice.
    cout <<endl<<endl;
    cout<<"Enter c for circle"<<endl;
    cout<<"Enter s for square"<<endl;
    cout<<"Enter r for rectangle"<<endl;
    cout<<"Enter t for triangle"<<endl;
    cout<<"Enter h for rhombus"<<endl;
    cout <<"Enter x to exit" << endl;
    cin>>ch;
    //conditional switch statement.
switch (ch){
    case 'c':
    {
        cout<<"Enter radius"<<endl;
        cin>>a;
        area=3.14*a*a;
        break;
    }
    case 's':
    {
        cout<<"Enter the side"<<endl;
        cin>>a;
        area=a*a;
        break;
    }
    case 'r':
    {
        cout<<"Enter the length"<<endl;
        cin>>a;
        cout<<"Enter the breadth"<<endl;
        cin>>b;
        area=a*b;
        break;
    }
    case  't':
    {
        cout<<"Enter the height"<<endl;
        cin>>a;
        cout<<"Enter the base"<<endl;
        cin>>b;
        area=0.5*a*b;
        break;
    }
    case 'h':
    {
        cout<<"Enter diagonal vertical"<<endl;
        cin>>a;
        cout<<"Enter diagonal horizontal"<<endl;
        cin>>b;
        area=a*b/2;
        break;
    }
    case 'x':
        break;
    default:
    {
    cout<<"Syntax Error"; ch =='c';
    continue;
    }
    }
}
//print the area.
//get character
cout<<"Area is "<<area;

system("pause");

}
//@ convert the program using a switch statement
//@ add one more option to calculate the area of rhombus

