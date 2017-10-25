#include<iostream>
#include "lab35.cpp"
using namespace std;

int main ()
{
    TemperatureConverter temp1; //testing default constructor
    TemperatureConverter temp2(274); //testing overloaded constructor
    
    temp1.PrintTemperatures();
    temp2.PrintTemperatures();
    
    temp1.SetTempFromKelvin(400.15); //testing mutator function
    cout<<temp1.GetTempFromKelvin()<<endl;//testing accessor function
    temp1.PrintTemperatures();
    
    temp2.SetTempFromCelsius(32); //testing other functions
    cout<<temp2.GetTempAsCelsius()<<endl;
    temp2.PrintTemperatures();
    
    temp2.SetTempFromFahrenheit(32);
    cout<<temp2.GetTempAsFahrenheit()<<endl;
    temp2.PrintTemperatures();
    
    return 0;
}

/*

Temperature in Kelvin: 0

Temperature in Fahrenheit: -273.15

temperature in Celsius: -459.67

Temperature in Kelvin: 274

Temperature in Fahrenheit: 0.85

temperature in Celsius: 33.53

400.15
Temperature in Kelvin: 400.15

Temperature in Fahrenheit: 127

temperature in Celsius: 260.6

32
Temperature in Kelvin: 305.15

Temperature in Fahrenheit: 32

temperature in Celsius: 89.6

32
Temperature in Kelvin: 273.15

Temperature in Fahrenheit: 0

temperature in Celsius: 32



Process exited with code: 0


*/