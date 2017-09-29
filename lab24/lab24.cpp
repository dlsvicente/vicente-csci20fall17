#include <iostream> // this is the input output stream.
#include <ctime> // this includes the time function so we can use it. 
using namespace std; // this includes the different function types.

void NumSwap(int& user_num_one, int& user_num_two) {
      int A = user_num_one;
      int B = user_num_two;
      user_num_two = A;
      user_num_one = B;
      
      
      
  } 

 double PndsToKilog(double user_pounds){
     double equi_kilo = user_pounds * 2.20462; // I used the values I found on google.
     return equi_kilo; // this was the function for the conversion to kilos.
     
}

    double KiloToPnds(double user_kilo) {
        double equi_pnds = user_kilo * 0.453592; //  I used the values i found on google.
        
        return equi_pnds; // this is the function for the conversion to pounds. 
    } 
    
 int RanNumGen(int user_num_one, int user_num_two) // this was the name of my random number generator function name.
 {
    
    srand(time(0)); // this is where I seeded the random number to one. 
   
    int rand_num = (((rand() %  (user_num_two - user_num_one)) + 1) + user_num_one) ; // this is my random number generating formula
     NumSwap(user_num_one, user_num_two);
     
     return rand_num;
 }
 
  int main() {
    int ent_num1;
    int ent_num2;
     int rand_num = 0;
     double pnds = 0;
     double kilog = 0; // I initialized all of the values here. 
    
     cout << "Enter Small Value: " ; 
     cin >> ent_num1 ;
     cout << endl << endl << "Enter Big Value: ";
     cin >> ent_num2;
     
     rand_num = RanNumGen(ent_num1, ent_num2);
    
     kilog =  KiloToPnds(rand_num); 
    
     pnds = PndsToKilog(kilog); 
     
      
    
     
     cout << "Random Number between " << ent_num1 << " and " << ent_num2 << " : " << rand_num << endl << endl;
        cout << "Number converted to Kilograms: " << kilog << endl << endl;
     
     
     cout << "Number converted to pounds: " << pnds << endl << endl;
     
  
  } 
     
     