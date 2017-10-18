#include <iostream> // this is the input output stream.
#include <ctime> // this includes the time function so we can use it. 
using namespace std; // this includes the different function types.

int main ()
{
int user_num; 
int rand_num;
int a;
     srand(time(0)); // this is where I seeded the random number to one. 
     rand_num = rand() % 50 + 1; // this is my random number generating formula
    cout << " $$!!Welcome contestant, lets test your luck with the guessing game!!$$   " << endl;
    cout << " The computer wizard shall manifest a random number between 1 and 50 that you will have to guess to pass. "<< endl;
     cout << "Please enter a value between 1 and 50: ";
        cin >> user_num;
    
    while (user_num != rand_num)
    {
       
        if (user_num < 1)
        {
            cout << "Please enter a larger valid number."; // this keeps the user value larger than 1. 
            
        }
          else  if (user_num > 50) 
          {
                
            cout << "Please enter a smaller valid number."; // this keeps the user values lower than 50.
        }
        
           if (user_num > rand_num)
        {
            cout << "Psst, enter a lower number:"; // this outputs and tells the user to enter a smaller number.
        } 
        
        else if (user_num < rand_num)
        { 
           cout << "Psst, enter a larger number: ";  // this outputs and tells the user to enter a larger number.
        }
        
        else 
        
         cout << "Please enter a value between 1 and 50: "; // this asks for the user to guess a number again when they dont guess to high or to low. 
        cin >> user_num;
        
    }
    //if(user_num == rand_num) this function is not needed for the while loop to work properly. 
      //  {
         for (a =5 ; a > 0 ; --a )
        {
            cout << endl << a << endl;
         }
         cout << "You have guessed the correct number. YOU SHALL PASS.";
    //    }else
    
    
}
/*
 $$!!Welcome contestant, lets test your luck with the guessing game!!$$   
 The computer wizard shall manifest a random number between 1 and 50 that you will have to guess to pass. 
Please enter a value between 1 and 50: 25
Psst, enter a lower number:20
Psst, enter a lower number:15
Psst, enter a lower number:10
Psst, enter a lower number:5
Psst, enter a larger number: 6
Psst, enter a larger number: 4
Psst, enter a larger number: 7

5

4

3

2

1
You have guessed the correct number. YOU SHALL PASS.

Process exited with code: 0

*/