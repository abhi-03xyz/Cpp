#include<iostream>
using namespace std;
int main()
{
  int *arr;
  arr=new int[5];
  int sp=0;
  for(int i=0;i<5;i++)
  {
    cout<< "enter the votes for candidate no."<<i+1<<"\n";
    cin>>arr[i];
    if(arr[i]<1 || arr[i]>5)
    {
      sp++;
    }
  }
  for(int i=0;i<5;i++)
  {
    cout<<"Candidate " <<i+1<<" got "<<arr[i]<<" votes.\n";
  }
  cout<<"Total spoilt ballots: "<<sp;
  
  return 0;
}
