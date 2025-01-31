#include<iostream>
using namespace std;
int main()
{
 float far;
 cout << "Enter the temprature in fahrenheit:\n"; 
 cin >> far;
 float c=(float)(5*((far-32)/9));
 cout << "temprature in celcius is: "<<c<<" degree celcius";
 return 0;
 
}
