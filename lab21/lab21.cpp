#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double wind_speed; // this is the variable for the Velocity.
    double tempr_f; // this is the variable for the temperature.
    double old_style_wind_chill; // this is the variable for the old formula.
    double new_style_wind_chill; // this is the variable for the new formula.
    double sqr_wind_speed;  
    double pwr_velocity; // I added a power function variable so i wouldnt need since it is true. 
    
    cout << "Enter Temperature: "; 
    cin >> tempr_f;  // this is where i ask for the input in temperature.
    cout << endl << "Enter Velocity: "; 
    cin >> wind_speed;
    cout << endl;
    
    sqr_wind_speed = sqrt(wind_speed);
    pwr_velocity = pow(wind_speed , 0.16); // you need these functions after the input. 
    
    old_style_wind_chill = 0.081 * ((3.71 * sqr_wind_speed)  + 5.81 - (0.25 * wind_speed)) * (tempr_f - 91.4) + 91.4; 
    new_style_wind_chill= 35.74 + 0.6215 * tempr_f - (35.75 * pwr_velocity) + 0.4275 * tempr_f * pwr_velocity; 
    
    cout << "Windspeed: " << wind_speed << endl << endl;  // output for the velocity.  
    cout << "Old Formula: " << old_style_wind_chill << endl << endl; // 
    cout << "New Formula: " << new_style_wind_chill<< endl << endl; 
    cout << "Difference: " << new_style_wind_chill - old_style_wind_chill << endl; // I was not sure if putting the new before the old would be an issue so I did it.
}

/*

Enter Temperature: 30

Enter Velocity: 4

Windspeed: 4

Old Formula: 30.5753

New Formula: 25.767

Difference: -4.8083


Enter Temperature: 39.25

Enter Velocity: 10

Windspeed: 10

Old Formula: 27.8601

New Formula: 32.713

Difference: 4.85286


Enter Temperature: 100

Enter Velocity: 2

Windspeed: 2

Old Formula: 98.7538

New Formula: 105.711

Difference: 6.95719


*/