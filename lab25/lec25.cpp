#include <iostream>
using namespace std;

class Salary //  
{
    private: 
        double annual_;
    public:
        void SetAnnualSalary(double salary) // this is the accessor function 
        {
            annual_ = salary;
        }
        double GetAnnualSalary() // this is the mutator function 
        {
            return annual_;
        }
        void Print()
        {
             cout<<"$"<<annual_<<endl;
        }
};

int main () {
    
    Salary person_one;
     
     person_one.SetAnnualSalary(45000.00);
     
     person_one.GetAnnualSalary();
     
     person_one.Print();
     
}