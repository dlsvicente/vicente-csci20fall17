#include <iostream>
using namespace std;
// this allows me to use the private variables for all of my functiuon in public.
  class WellInfo { // my class has variables for the volume and gallon capacity to function.
  
private:
double well_radius_; // i have the radius inputted as inches.
double well_depth_; // Ihave the well depth inputted as feet.
const double pi_val_ = 22.0 / 7.0; // I made the pi value a constant variable    
double cyl_vol;
const double gallons_feet = 7.48; // I made the variable for gallons to feet a constant value
double gallon_cap; 

public: // this sets the value of the arguement to the private variable oF radius
void SetRadius( double rad_feet){ 
    
well_radius_ = rad_feet ;
} // this sets the valuefo the argument to the private cariable of depth
void SetDepth( double depth_feet)
{
well_depth_ = depth_feet;
} 
 // this function is to call the set value or radius.
double GetRadiusFeet( )
{
    return well_radius_;
}
// this function is used to call the set value of depth.
double GetDepth()
{
    return well_depth_;
}
 // this function is the cylinder volume formula.
double CylVol(double well_radius_, double well_depth_ )
{               // this is where I converted the radius from inches to feet.
        cyl_vol = (pi_val_ * ((well_radius_ / 12)* (well_radius_ / 12))) * well_depth_;
    
    return cyl_vol;
    
}

 double CapGallons(double cyl_vol) // this i where i converted the volume to gallons per sq. ft.
 {
     gallon_cap = cyl_vol * gallons_feet;
     
     return gallon_cap;
     
 } // this is where i printed out my output of the WellInfo class.
 
 void print()
 {
     cout << "The volume of a well that has a depth of  " << well_depth_ << " ft.";
     cout << " and the radius of " << well_radius_ << " ft. is " << cyl_vol << " ft. " << endl;
     cout << "The total capacity of water in the casing is " << gallon_cap << " gallons. " << endl;
     if (gallon_cap > 250)
     {
         cout << "The amount of water supplied will not require a separate holding tank." << endl;
     }
     else {
         cout << "the amount of water supplied will require a separate holding tank." <<  endl;
     }
 }
  };
 int main ()
 
 { // I reinitialized these variables to use them for place holder for my user input
     double rad_in;
     double well_dep;
     double well_vol;
     double gall_cap;
     WellInfo WellA; // this is my object. 
     
     cout << "Enter Well Radius in Inches: ";
     cin >> rad_in;
     cout << endl; 
     WellA.SetRadius(rad_in);
     
     WellA.GetRadiusFeet();
     
     cout<< "Enter Well Depth in Feet: ";
     cin >> well_dep;
     cout << endl;
     
     WellA.SetDepth(well_dep);
     
     WellA.GetDepth();
     
    well_vol = WellA.CylVol(rad_in, well_dep);
     
     gall_cap = WellA.CapGallons(well_vol);
     
     
   
    
        WellA.print();

        
     
     
     
 }
 
    /*
    Enter Well Radius in Inches: 80

    Enter Well Depth in Feet: 464

    The volume of a well that has a depth of  464 ft. and the radius of 80 ft. is 64812.7 ft. 
    The total capacity of water in the casing is 484799 gallons. 

    Enter Well Radius in Inches: 67

    Enter Well Depth in Feet: 382

    The volume of a well that has a depth of  382 ft. and the radius of 67 ft. is 37426.1 ft. 
    The total capacity of water in the casing is 279948 gallons. 

    Enter Well Radius in Inches: 456

    Enter Well Depth in Feet: 153

    The volume of a well that has a depth of  153 ft. and the radius of 456 ft. is 694358 ft. 
    The total capacity of water in the casing is 5.1938e+06 gallons. 

    Enter Well Radius in Inches: 75

    Enter Well Depth in Feet: 366

    The volume of a well that has a depth of  366 ft. and the radius of 75 ft. is 44933 ft. 
    The total capacity of water in the casing is 336099 gallons. 
    
    Enter Well Radius in Inches: 11

    Enter Well Depth in Feet: 333

    The volume of a well that has a depth of  333 ft. and the radius of 11 ft. is 879.411 ft. 
    The total capacity of water in the casing is 6577.99 gallons. 
    
    Enter Well Radius in Inches: 8

    Enter Well Depth in Feet: 205

    The volume of a well that has a depth of  205 ft. and the radius of 8 ft. is 286.349 ft. 
    The total capacity of water in the casing is 2141.89 gallons. 

    
    Enter Well Radius in Inches: 10

    Enter Well Depth in Feet: 83

    The volume of a well that has a depth of  83 ft. and the radius of 10 ft. is 181.151 ft. 
    The total capacity of water in the casing is 1355.01 gallons. 

    Enter Well Radius in Inches: 31   

    Enter Well Depth in Feet: 98

    The volume of a well that has a depth of  98 ft. and the radius of 31 ft. is 2055.47 ft. 
    The total capacity of water in the casing is 15374.9 gallons. 

    Enter Well Radius in Inches: 56

    Enter Well Depth in Feet: 261

    The volume of a well that has a depth of  261 ft. and the radius of 56 ft. is 17864 ft. 
    The total capacity of water in the casing is 133623 gallons. 
    
    Enter Well Radius in Inches: 28

    Enter Well Depth in Feet: 109

    The volume of a well that has a depth of  109 ft. and the radius of 28 ft. is 1865.11 ft. 
    The total capacity of water in the casing is 13951 gallons. 


    
    
    */ 