#include <iostream>
#include <conio.h>
#include <cstdlib>
//using namespace std;

class Distance
{
private:
   int feet;
   float inches;
public:

    Distance()          //constructor1
    {
        feet=0;
        inches=0;
    }

    Distance(int ft,float inch)       //constructor2
    {
        feet=ft;
        inches=inch;
    }

    void getdata()
    {
        std::cout<<"Enter Feet and inches respectively: ";
        std::cin>>feet>>inches;
    }

    void display()
    {
        std::cout<<"Feet : "<<feet<<std::endl;
        std::cout <<"Inches :"<<inches;
    }

    //Operator declaration in Class
    friend Distance operator + (Distance &ob1, Distance &ob2)
    {
    Distance temp;
    temp.feet   = ob1.feet   + ob2.feet;
    temp.inches = ob1.inches + ob2.inches;
    if(temp.inches > 12)
    {
       temp.inches -= 12;
       temp.feet++;
    }
    return(temp);
    }
    friend Distance operator - (Distance &ob1, Distance &ob2)
    {
    // Complete the code for the difference operation
    Distance temp;
    temp.feet   = abs(ob1.feet   - ob2.feet);
    temp.inches = abs(ob1.inches - ob2.inches);
    if(temp.inches > 12)
    {
       temp.inches -= 12;
       temp.feet++;
    }
    return(temp);
}

friend Distance operator *(int d, Distance &ob)
{
    //Complete the code for the multiplication
    Distance temp;
    temp.feet   = ob.feet   * d;
    temp.inches = ob.inches * d;
    while(temp.inches > 12)
    {
       temp.inches -= 12;
       temp.feet++;
    }
    return(temp);
}

friend int operator ==(Distance &ob1, Distance &ob2)
{
// complete the code
return ob1.inches == ob2.inches && ob1.feet == ob2.feet;
}

friend int operator < (Distance &ob1, Distance &ob2)
{
   // complete the code
   if (ob1.feet < ob2.feet){
       return true;
   } else if (ob1.feet == ob2.feet) {
       if (ob1.inches < ob2.inches){
           return true;
       }
   } else {
       return false;
   }
}

friend int operator > (Distance &ob1, Distance &ob2)
{
   // complete the code
   if (ob1.feet > ob2.feet){
       return true;
   } else if (ob1.feet == ob2.feet) {
       if (ob1.inches > ob2.inches){
           return true;
       }
   } else {
       return false;
   }
}

};
