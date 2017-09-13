 #include <iostream>
using namespace std;

struct stockInfo{
  string compName;
  char sect;
  double curSharePrice;
  int numOwnShare;
  double totalStockVal;
 };
 
 int main()
 {
    
     
     stockInfo Company1;
     stockInfo Company2;
     stockInfo Company3;
     stockInfo Company4;
     stockInfo Company5;
     stockInfo Company6;

     
    cout << "1st Company Name: ";
    cin >> Company1.compName;
    cout << endl; 
    cout << "1st Company Sector: ";
    cin >> Company1.sect;
    cout << endl; 
    cout << "1st Current Share Value: ";
    cin >> Company1.curSharePrice;
    cout << endl; 
    cout << "Number of 1st company stock Owned: ";
    cin >> Company1.numOwnShare;
    cout << endl;
    cout << "total Stock Price: $"<< Company1.numOwnShare * Company1.curSharePrice << endl;
    cout << endl;
    
    cout << "2nd Company Name: ";
    cin >> Company2.compName;
    cout << endl;
    cout << "2nd Company Sector: ";
    cin >> Company2.sect;
    cout << endl; 
    cout  << "2nd Current Share Value: ";
    cin >> Company2.curSharePrice;
    cout << endl;
    cout << "Number of 2nd company stock owned: ";
    cin >> Company2.numOwnShare;
    cout << endl;
     cout << "total Stock Price: $"<< Company2.numOwnShare * Company2.curSharePrice << endl;
     cout << endl;
     
    cout << "3rd Company Name: ";
    cin >> Company3.compName;
    cout << endl;
    cout << "3rd Company Sector: ";
    cin >> Company3.sect;
    cout << endl; 
    cout << "3rd Current Share Value: ";
    cin >> Company3.curSharePrice;
    cout << endl; 
    cout << " Number of 3rd Company stock Owned: ";
    cin >> Company3.numOwnShare;
    cout << endl; 
     cout << "total Stock Price: $"<< Company3.numOwnShare * Company3.curSharePrice << endl;
     cout << endl;
    
    cout << "4th Company Name: ";
    cin >> Company4.compName;
    cout << endl;
    cout << "4th Company Sector: ";
    cin >> Company4.sect;
    cout << endl; 
    cout << "4th company current share value: ";
    cin >> Company4.curSharePrice;
    cout << endl; 
    cout << "Number of 4th company stock Owned: ";
    cin >> Company4.numOwnShare;
    cout << endl;
     cout << "total Stock Price: $"<< Company4.numOwnShare * Company4.curSharePrice << endl;
     
      cout << "5th Company Name: ";
    cin >> Company5.compName;
    cout << endl;
    cout << "5th Company Sector: ";
    cin >> Company5.sect;
    cout << endl; 
    cout << "5th Current Share Value: ";
    cin >> Company5.curSharePrice;
    cout << endl; 
    cout << " Number of 5th Company stock Owned: ";
    cin >> Company5.numOwnShare;
    cout << endl; 
     cout << "total Stock Price: $"<< Company5.numOwnShare * Company5.curSharePrice << endl;
     cout << endl;
     
      cout << "6th Company Name: ";
    cin >> Company6.compName;
    cout << endl;
    cout << "6th Company Sector: ";
    cin >> Company6.sect;
    cout << endl; 
    cout << "6th Current Share Value: ";
    cin >> Company6.curSharePrice;
    cout << endl; 
    cout << " Number of 6th Company stock Owned: ";
    cin >> Company6.numOwnShare;
    cout << endl; 
     cout << "total Stock Price: $"<< Company6.numOwnShare * Company6.curSharePrice << endl;
     cout << endl;
     
    }

