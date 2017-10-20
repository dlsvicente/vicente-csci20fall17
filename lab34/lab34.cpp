// This program reads in a letter and reports whether
// it is an uppercase letter, a lowercase letter, or neither.
// it should continue reading in values until the user enters a -1.
#include <iostream> 
using namespace std; 
int main() {
        // Read a character in
        string ch;
        cout << "Please enter a character: ";
        cin  >> ch;
         
// check -- is it a letter??
while (ch != "-1") {
        if ((ch >= "A") && (ch <= "Z")) {
               cout << "Yes, that is a uppercase letter." << endl;
                 cout << "Please enter a character: ";
                cin  >> ch;
               
            }
        
        else  if ((ch >= "a") && (ch <= "z")) { // I added 
               cout << "Yes, that is a lowercase letter" << endl;
                 cout << "Please enter a character: ";
                cin  >> ch;
            }
                else  {
            cout << "Not a letter" << endl;
              cout << "Please enter a character: ";
                cin  >> ch;
                    
                }}
            return 0;}
            
            /* 
            Debugging Method: I read the diresctions that you provided us. I inputted the code into my compiler and ran it. 
            I studied the output, and the way that it reacted to my input. I realized that the way that the code was written was a little crowded
            so I decided to push both if conditions that went together into one line and combine them with an "and" statement. 
            The method that i used to figure out this bug was a trial an error method. I tried to look at each piece of the code line from line,
            but it did not help me. The debugging method that will work best will always depend on the experience and preference of the coder, and also 
            on the style and type of code that you are debugging. Some methods may have worked better for someone else that was debugging this code, but trial and error
            was what i felt help me out the most. 
            
            
            
            */
            