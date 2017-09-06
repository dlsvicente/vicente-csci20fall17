 #include <iostream> 
 using namespace std;
 
 int main()
 {
     int numQuarts = 0;
     int numNicks = 0;
     int numPens = 0;
     int numDimes = 0;
     double feeCharge = .109;
     double finalFee = 0.0;
     double finalAmount = 0.0;
    int quartVal = 25;
    int nickVal = 5;
    int dimeVal = 10;
    int penVal = 1;
    int cents = 0;
    int begAmount = 0;
    
    cout << "Enter beginning amount: ";
    cin >> begAmount;
    
    cents = begAmount;
    
     numQuarts = cents / quartVal;
     cents  = cents - (numQuarts * quartVal);
     
     numDimes = cents / dimeVal;
     cents = cents % dimeVal;
     
     numNicks = cents / nickVal;
     cents = cents % nickVal;
    
     numPens = cents / penVal;
     cents = cents - (numPens * penVal);
     
     
    finalFee = begAmount * feeCharge;
    
    finalAmount = (begAmount - finalFee)/ 100;
    
    cout << "You have entered " << begAmount << " cents." << endl;
    cout << "that was " << numQuarts << " quarters, " << numDimes << " dimes, " << numNicks << " nickel(s), and " << numPens << " pennies.";
    cout << "The Total is " << begAmount << ". After the Fee, you get $" << finalAmount << " in cash.";
     
     
    
 }