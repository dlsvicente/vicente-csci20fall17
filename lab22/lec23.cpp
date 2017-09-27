#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

/* Compute Sphere uses the equation to calculate the volume of a sphere based on radius.
   Input: Accepts a single integer for radius.
   Output: None */
void ComputeSphere(int); // these are the parameters for computeSphere.

void ComputeBox(int, int, int); // these are the parameters for computeBox.

void ComputePyramid(int, int); // these are the parameters for the computePyramid.

int main()
{
    int length = 1; 
    int width = 1;
    int height = 1;

    ComputeSphere(length); // this is the argument for ComputeSphere.
    ComputeBox(length, width, height); // these are the arguments for computeBox. 
    ComputePyramid(length, height); // these are the arguments for computePyramid.

    cin>>length>>width>>height; // this is the input of the function
    
    ComputeSphere(length); // these are the arguments for the function ComputeSphere.
    ComputeBox(length, width, height); // these are the arguments for the function ComputeBox.
    ComputePyramid(length, height); // these are the arguments for the function ComputePyramid.
}

void ComputeSphere(int l){
    double v = (4.0/3) * 3.14 * (l * l * l); // this is the equation for the volume of the sphere
    cout<<"The volume of a sphere is "<<v<<endl; 
}

void ComputeBox(int l, int w, int h){ // this is the equation for the volume of the rectangle
    double v = l * w * h;
    cout<<"The volume of a rectangular box is "<<v<<endl;
}

void ComputePyramid(int l, int h){ 
    double v = (1.0/3) * l * h; //this is the equation for the volume of the Pyramid. 
    cout<<"The volume of a pyramid is "<<v<<endl;
} 

//Appropriately comment all of the functions.  Make a note to identify the paramters and input.
//Comment the main function as if it was pseudocode.
//   make note of where the functions are called and the arguments.