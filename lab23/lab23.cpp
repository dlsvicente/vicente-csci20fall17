#include <iostream> // this is the input output stream.
#include <ctime> // this includes the time function so we can use it. 
using namespace std; // this includes the different function types.

void NumSwap(int& user_num_one, int& user_num_two) {
      int A = user_num_one;
      int B = user_num_two;
      user_num_two = A;
      user_num_one = B;
      
      
      
  } 

  void RanNumGen(int user_num_one, int user_num_two) // this was the name of my random number generator function name.
 {
    
    srand(time(0)); // this is where I seeded the random number to one. 
   
    int rand_num = (((rand() %  (user_num_two - user_num_one)) + 1) + user_num_one) ; // this is my random number generating formula
     NumSwap(user_num_one, user_num_two);
    cout << "Random Number Between " << user_num_two << " and " << user_num_one << " is " << rand_num << "." << endl; // this is the last output in my function that prints out the random number (randNum).
 } 
  
  
 int main() {
    int ent_num1;
    int ent_num2;
     
     cout << "Enter Small Value: " ; 
     cin >> ent_num1 ;
     cout << endl << endl << "Enter Big Value: ";
     cin >> ent_num2;
     
     RanNumGen(ent_num1, ent_num2);
     

     
 }
 
 /*
 Enter Small Value: 1


Enter Big Value: 10
Random Number Between 1 and 10 is 4.

Enter Small Value: 5


Enter Big Value: 82
Random Number Between 5 and 82 is 71.



 */