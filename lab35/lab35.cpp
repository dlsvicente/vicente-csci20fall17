#include <iostream>
using namespace std;
// my class function 
class TemperatureConverter
{
    private:

    double kelvin_;

    public:

    TemperatureConverter() {
    kelvin_ = 0;
}
    TemperatureConverter(double kel) {
    if (kel >= 0){
        kelvin_ = kel;
    }
    
}
  double SetTempFromKelvin (double kel_val) {
    kelvin_ = kel_val;
    
}
   double GetTempFromKelvin() {
    return kelvin_;
    
}

double SetTempFromCelsius (double cel_val) {
   
    kelvin_ = cel_val + 273.15;
    if (cel_val >= -273.15) {
        return kelvin_;
    }
    else {
        cout << "invalid Input" << endl;
        
    }
}

double SetTempFromFahrenheit (double far_val) {
    
    kelvin_ = (5 *(far_val - 32) / 9) + 273.15;
   if (kelvin_ >= -459.67) {
       return kelvin_;
}
else {
    cout << "invalid input" << endl;
}
}

    double GetTempAsCelsius() {
        
        double cel_val = kelvin_ - 273.15;
        return cel_val;
    }
  double  GetTempAsFahrenheit() {
        
        double far_val = ((GetTempAsCelsius() * 9 / 5 + 32));
        return far_val;
        
    }
    
    void PrintTemperatures() {
        cout <<"Temperature in Kelvin: " <<  kelvin_ << endl << endl;
        cout << "Temperature in Fahrenheit: " << GetTempAsCelsius() << endl << endl;
        cout << "temperature in Celsius: " << GetTempAsFahrenheit() << endl << endl;
        
        
    }
    };
    