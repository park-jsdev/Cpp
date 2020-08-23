#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
void display(string names[10], int marks[5]);

int main() {
    int marks[5] = {88, 76, 90, 61, 69};
    string names[10] = {"John", "Bob", "Mary", "Cindy", "Mark", "Sundar", "Tim", "Jeff", "Steve", "Larry"};

    display(names, marks);
    return 0;
}

void display(string n[10], int m[5]) {
    sort(n, n+10);
    cout<<"Displaying marks: "<<endl;
    for (int i=0;i<10;i++){
        cout<<n[i]<<": "<<endl;
        for (int j = 0; j <5; j++) {
            cout<<m[j]<<endl;
    }
}
}


// Make a caracter array to store the names of ten students
// make another int marks[10][5] array to store three marks for ten students
// extend the display function to display the name of every student, followed by 5 marks, total , percentage and Grade obtained by the students.
// display() should be called ten time from the loop in the main body of the program

