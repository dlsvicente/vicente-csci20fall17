#include <iostream>
#include <ctime>
using namespace std;

class ComputerInput 
{
    private:
    int num_stones_rem_;
    bool comp_turn_ = false;
    
    public:
    
    ComputerInput() {
        num_stones_rem_ = 0; }
    int SetComputerMove (int s) {
        num_stones_rem_ = s;
        return num_stones_rem_;
    } // this is the end of my setter function for the number of stones removed. 
    int GetComputerMove () {
       return num_stones_rem_;
        
    } // this is the end of my getter function for the number of stones removed. 
    
        
    
};
void ranNumGen() // this was the name of my random number generator function name.
 {
    
    srand(time(0)); // this is where I seeded the random number to one. 
    int randNum = rand() % 20 + 1; // this is my random number generating formula
    cout << randNum << endl; // this is the last output in my function that prints out the random number (randNum).
 };


int main () {
    int pile_one_count;
    int pile_two_count;
    string name_one;
    int user_stones_rem;
    
    cout << "Welcome to the wonderful game of NIM. " << endl << endl;
    cout << "the game consists of two players, you and the computer. " << endl << endl;
    cout <<  "you have to remove stones from two piles. " <<  endl << endl;
    cout << "Players alternate taking turns and removing 1 to 3 stones from either of the two piles.   " << endl << endl;
    cout << "Player that picks up last stone wins. " << endl << endl;
     cout << "What is your first name competitor? ";
     cin >> name_one;
     cout << endl << endl << "Welcome " << name_one << " good luck! ";
     
     pile_one_count = ranNumGen();
     pile_two_count = ranNumGen();
     
     cout << "stones in pile one: " << pile_one_count << endl << endl;
     cout << "Stones in pile two: " << pile_two_count << endl << endl;

    while ((pile_one_count >= 1) && (pile_two_count >= 1)) {
        
        
    }
    
    while (pile_one_count > 1) {
        
    }  
    
    while (pile_two_count >1) {
        
    }
} 