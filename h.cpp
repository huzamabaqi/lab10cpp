#include "iostream"
#include "string"
#include "chrono"
#include "thread"

using namespace std;
void huzama (){

     float marksReceived = 0;
        float totalMarksAvailable = 0;
        double gradePercentage = 0;

        // Read in 2 integer values
      cout << "please enter the mark you got: ";
      cin >> marksReceived;
      cout << "enter total amount of marks: ";
      cin >> totalMarksAvailable;
       
       gradePercentage = (marksReceived/totalMarksAvailable)*100; 
       cout << "You achieved a grade of: " << gradePercentage << "%" << endl;
}
void baqi () {

    cout << "Why do they call it hyper text? "<<endl; 
    cout<<"Too much JAVA."; 
}
int number () {
for (int a=1; a<11; a++ )
cout << a << endl; 
return 0; 
}

int main() {
    cout << "Welcome to the function machine!" << endl;
    cout << "================================" << endl;
    cout << endl;
    cout << "Enter a number to select the program you want to run:" << endl;
    cout << endl;
    cout << "1: Calculate your grade on a test" << endl;
    cout << "2: Tell me a joke" << endl;
    cout << "3: Count to 10" << endl;
    cout << "Any other key: Exit" << endl;

    int selection;
    cin >> selection;

    if (cin.fail() || selection < 1 || selection > 3) {
        cout << endl;
        cout << "Have a nice day, goodbye!" << endl;
        return 0; 
    }

    if(selection == 1) {
       


        /* 
           Pass the integer values to a function. 
           The function should calculates the grade
           as a percentage out of 100 and return as
           as a double
        */
huzama (); 


        
    } else if(selection == 2) {
        int name; 
        // Ask the user for their name
      
      
        cout << "What is your name: ";
        cin >> name; 

baqi (); 
        // Call a function that tells them a joke
        // The function should not return a value


    } else {
        int count;

        // Replace the while loop with a for loop
number (); 
    }

    return 0;
}