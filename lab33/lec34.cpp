#include <iostream>
using namespace std;

int main()
{
    int number = 0, product = 0; // Initialize variable number and variable product.
    while (number >=0) // Use a while loop with the condition (number >= 0)
    {
        for (int i = 0; i<3; i++)  // Nest a for loop and initialize variable i and set it to 0 inside the loop (int i = 0; i < 3 ; i++)

        { 
            product = number * i;  //  Embed a function inside the for loop that will multiple number * i and make it equal to product.  

        }
        cout<<"Please enter a positive integer: "; // There is code that will request a  positive integer if vlue is not positive. 
        cin >> number;
    }
    cout<<"The product is: "<<product<<endl;
}

//Comment the code as pseudocode
//Determine how many times each loop executes if the numbers input are 5, 4, 3, 2, 1,-1
//What is the value of i at the end of the program?
// 5 > 