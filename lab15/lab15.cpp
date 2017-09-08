#include <iostream>
#include <string>
 using namespace std;
 
 int main()
 {
     string adjOne = "scary"; // these are my declared strings.
     string nounOne = "lion";
     string adjTwo = "dark";
     string nounTwo = "alley";
     string verbOne = "ran";
     string nounThree = "friend";
     string nounFour = "me";
     string adjThree = "satisfied";
     
     cout << "While I was walking home, I was followed by a " << adjOne << " " << nounOne ;
     cout << " to a " << adjTwo << " " << nounTwo << "." << endl; 
     cout << "Once I realized it, I panicked and " << verbOne << " home." << endl; 
     cout <<" Unfortunately, the " << adjOne << " " << nounOne;
     cout << " got me, and I did not make it home." << endl;
     cout << "My " << nounThree << " went searching for ";
     cout << nounFour << " , but only found a " << adjThree << " " << nounOne << "." << endl;
 }