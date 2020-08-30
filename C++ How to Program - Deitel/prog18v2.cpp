#include <iostream>
#include <string>
using namespace std;

class GradeBook{
public:

void setCourseName( string name ){
    courseName = name;
}
string getCourseName() const{
return courseName;
}
void displayMessage() const{
cout << "Welcome to the grade book for\n" << getCourseName() << endl;
}

void displayNames(){
   sortNames();
   cout <<"Displaying names: " << endl;
   for (int i = 0; i <10; ++i){
       cout << "Student " << i+1 << " is: " << names[i] <<endl;
   }

}

void readNames(){
   for(int i=0; i<10;i++){
       cout << "Enter student name: ";
       cin >> names[i];
   }
}


private:
string courseName;
string names[10]; 

void sortNames(){
       string temp;
       for (int i = 0; i <10; ++i)
           for (int j =i+1; j<10; j++)
           {
  
           if (names[i].compare(names[j])>0)
           {
               temp=names[i];
               names[i]=names[j];
               names[j]=temp;
           }
       }
}
};

int main(){
string nameOfCourse;
GradeBook myGradeBook;

cout << "Initial course name is: " << myGradeBook.getCourseName()<< endl;

cout << "\nPlease enter the course name:" << endl;
getline( cin, nameOfCourse );
myGradeBook.setCourseName( nameOfCourse );
cout << endl;
myGradeBook.displayMessage();
myGradeBook.readNames();
myGradeBook.displayNames();
}


// Make a caracter array to store the names of ten students
// make another int marks[10][5] array to store three marks for ten students
// extend the display function to display the name of every student, followed by 5 marks, total , percentage and Grade obtained by the students.
// display() should be called ten time from the loop in the main body of the program

