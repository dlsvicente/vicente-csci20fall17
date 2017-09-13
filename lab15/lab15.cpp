#include <iostream>
#include <string> // this is where I am including the string funstion.
 using namespace std;
 
 int main()
 {
     string adjOne = "scary"; 
     string nounOne = "lion"; // I used this noun multiple times.
     string adjTwo = "dark";
     string nounTwo = "alley";
     string verbOne = "ran";
     string nounThree = "friend";
     string nounFour = "me";
     string adjThree = "satisfied"; // these are my declared strings.
     
     cout << "While I was walking home, I was followed by a " << adjOne << " " << nounOne ; 
     cout << " to a " << adjTwo << " " << nounTwo << "." << endl;  // this is the end of my first line 
     cout << "Once I realized it, I panicked and " << verbOne << " home." << endl;  // this is the end of my second sentence. 
     cout <<" Unfortunately, the " << adjOne << " " << nounOne;
     cout << " got me, and I did not make it home." << endl; // this is the end of my second line.
     cout << "My " << nounThree << " went searching for "; 
     cout << nounFour << " , but only found a " << adjThree << " " << nounOne << "." << endl; // this is the end of my final sentence. 
 }