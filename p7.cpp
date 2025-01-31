#include<iostream>
using namespace std;
class Area{
 
  float side;
  
  float areaCircle(float s);
  float areaSquare(float s);
  public:
  float circle(float s)
  {
    return areaCircle(s);
  }
  float area(float s)
  {
    return areaCircle(s);
  }
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
 float area=a1.callSquare(side);
 cout<<"Area of the square is: "<<area<<"\n";
  
return 0;

}
