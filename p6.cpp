#include<iostream>
using namespace std;
class Area{
  private:
  float side;
  public:
  float areaCircle(float s);
  float areaSquare(float s);
};

float Area::areaCircle(float s)
{
  return 3.14*s*s;
}
float Area::areaSquare(float s)
{
  return s*s;
}
int main()
{
 Area a1;
 float side;
 cout<<"Enter the side of square\n";
 cin>>side;
 float area=a1.areaSquare(side);
 cout<<"Area of the square is: "<<area<<"\n";
 
 
cout<<"Enter the radii of circle\n";
 cin>>side;
  area=a1.areaCircle(side);
 cout<<"Area of the square is: "<<area<<"\n";
return 0;
}
