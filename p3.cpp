#include<iostream>
#include<iomanip>
using namespace std;
//#define *area;
void sqaureAREA(float &side)
{
 side=side*side;
}
void circleAREA(float &side)
{
  side= 3.14*(side*side);
}
int main()
{

float radii;
cout<<"Enter the radius of the circle\n";
cin>>radii;
circleAREA(radii);
cout<<"Area of the circle: "<<radii<<"\n";

cout<<"Enter the side of the square\n";
cin>>radii;
sqaureAREA(radii);
cout<<"Area of the square: "<<radii<<"\n";

return 0;
}
