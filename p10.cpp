//usage of friend
#include<iostream>
using namespace std;
class DB;//forward declaration
class DM{
  float m;
  float c;
  public:
  void getDistance()
  {
    cout<<"Enter the distance in meter and centimeter\n";
    cin>>m;
    cin>>c;
  }
  void display()
  {
     cout<<"Meters:"<<m<<" Centimeter:"<<c;
  }
  friend DM addDistances(DM,DB);
  

};

class DB{
  float f;
  float i;
  public:
  void getDistance()
  {
    
    cout<<"Enter the distance in feet and inches\n";
    cin>>f;
    cin>>i;
  }
  friend DM addDistances(DM,DB);

};

DM addDistances(DM dm,DB db)
{
  DM result;
  float meter;
  float centi;
  meter += dm.m;
  centi += dm.c;
  
meter += db.f*0.3048;
centi += db.i*2.54;
  if(centi >= 100)
  {
    meter +=centi/100;
    centi= (int)centi % 100;
  }
  result.m=meter;
  result.c=centi;
return result;
}

int main()
{
  DM obj1;
  DB obj2;
  obj1.getDistance();
  obj2.getDistance();
 DM obj3=addDistances(obj1,obj2);
 obj3.display();
return 0;
}









