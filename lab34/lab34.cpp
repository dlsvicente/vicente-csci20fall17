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
            I studied the output, and the way that it reacted  
            
            
            */
            