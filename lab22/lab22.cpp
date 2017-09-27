#include <iostream> // this is the input output stream.
#include <ctime> // this includes the time function so we can use it. 
using namespace std; // this includes the different function types.


  void ranNumGen() // this was the name of my random number generator function name.
 {
    
    srand(time(0)); // this is where I seeded the random number to one. 
    int randNum = rand() % 100 + 1; // this is my random number generating formula
    cout << "Your Random Number: " << randNum << endl; // this is the last output in my function that prints out the random number (randNum).
 }
 int main() {
   ranNumGen(); // this is just calling for the function. 
   
}




