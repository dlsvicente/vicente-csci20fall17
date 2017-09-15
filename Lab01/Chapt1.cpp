#include <iostream>
using namespace std;

struct employeeInfo{ // struct of employee info.
  string firstName; 
  string lastName;
   int odEnd;
  int odStart;
  double hourlyPay;
  double hrWorked;
};
  int main ()
  { 
    double milReimburse;
    double grossPay;
    double healthInsureCost; // I divided the gross amount by health insurance deduction
    double medPay;
    double aftMedPay;
    double taxes;
    double netPay;
    double finalPay;
    
  employeeInfo person1;
    // 
    cout << "Enter Employee First Name: "; // asked for first and last name seperately.
    cin >> person1.firstName;
    cout << endl << "Enter Empoloyee Last Name: ";
    cin >> person1.lastName;    // I did not use getline so multi word last names need a "_" between them.
    cout << endl << "Enter Hours Worked: ";
    cin >> person1.hrWorked;
     cout << endl << "Employee Hourly Rate: ";
    cin >> person1.hourlyPay;
    cout << endl << "Enter Insurance Cost: ";
    cin >> healthInsureCost;
    cout << endl << "Beginning Odometer Reading: ";
    cin >> person1.odStart;
    cout << endl << "Ending Odometer Reading: ";
    cin >> person1.odEnd;
    cout << endl;
    cout << endl;
     
     grossPay = person1.hourlyPay * person1.hrWorked; // These are my equations. 
     aftMedPay = grossPay - healthInsureCost;
     taxes = aftMedPay * 0.17;
     netPay = aftMedPay - taxes;
     milReimburse = (person1.odEnd - person1.odStart) * 0.35;
     finalPay = (aftMedPay - taxes) + milReimburse;
    
    
    cout << person1.firstName << " " << person1.lastName << endl; // this is my output of the final values. 
    cout << "Hours worked : " << person1.hrWorked << endl;
    cout << "Hourly Rate: $" << person1.hourlyPay << endl; 
    cout << "Gross Pay: $" << grossPay << endl;
    cout << "Netpay: $" << netPay << endl; 
    cout << "miles Driven: " << person1.odEnd - person1.odStart << endl; 
    cout << "Mileage Reimbursement: " << milReimburse << endl;
    cout << "total Pay: $" << finalPay << endl;
    
  }
   /*
 Enter Employee First Name: Sofia

Enter Empoloyee Last Name: Cameron

Enter Hours Worked: 40

Employee Hourly Rate: 23.57

Enter Insurance Cost: 178.65

Beginning Odometer Reading: 3268

Ending Odometer Reading: 4154


Sofia Cameron
Hours worked : 40
Hourly Rate: $23.57
Gross Pay: $942.8
Netpay: $634.245
miles Driven: 886
Mileage Reimbursement: 310.1
total Pay: $944.344

Enter Employee First Name: Richard      

Enter Empoloyee Last Name: Watson

Enter Hours Worked: 29

Employee Hourly Rate: 11.50

Enter Insurance Cost: 344.57

Beginning Odometer Reading: 9763

Ending Odometer Reading: 10701


Richard Watson
Hours worked : 29
Hourly Rate: $11.5
Gross Pay: $333.5
Netpay: $-9.1881
miles Driven: 938
Mileage Reimbursement: 328.3
total Pay: $319.112


Enter Employee First Name: Heather

Enter Empoloyee Last Name: Hunt

Enter Hours Worked: 35

Employee Hourly Rate: 60.00

Enter Insurance Cost: 224.75

Beginning Odometer Reading: 5705

Ending Odometer Reading: 5705


Heather Hunt
Hours worked : 35
Hourly Rate: $60
Gross Pay: $2100
Netpay: $1556.46
miles Driven: 0
Mileage Reimbursement: 0
total Pay: $1556.46


Enter Employee First Name: Eddy

Enter Empoloyee Last Name: Hall

Enter Hours Worked: 40

Employee Hourly Rate: 8.25

Enter Insurance Cost: 180.27

Beginning Odometer Reading: 12919

Ending Odometer Reading: 13146


Eddy Hall
Hours worked : 40
Hourly Rate: $8.25
Gross Pay: $330
Netpay: $124.276
miles Driven: 227
Mileage Reimbursement: 79.45
total Pay: $203.726



   */