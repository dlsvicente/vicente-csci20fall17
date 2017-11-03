#include <iostream> 
using namespace std;



int main () {
    const int num_elements = 10;
  
    cout << "Please Enter  Name of Each Product: " << endl;
    
    string ItemName[num_elements] = { "bail of straw", "toilet paper", "mango", "bottled water", "pog", "dog", "cat", "horse", "string", "syringes" };
    
     int NumItems[num_elements] = {20, 50, 60, 24, 300, 4, 1, 7, 45, 20 } ;
    
  
  double ItemCost[num_elements] = {40.00, 2.00, 1.00, 1.25, 3.00, 50.00, 30.00, 500.00, .25, .50} ;
        
   
    for(int i=0; i < num_elements; i++)
    cout << ItemName[i] << "  Quantity: " << NumItems [i] << "  Cost: " << ItemCost[i] << endl;
}