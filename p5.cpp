#include<iostream>
using namespace std;
int main()
{
  int *arr;
  arr=new int[5];
  int sp=0;
  int bal=0;
  for(int i=0;i<5;i++)
  {
    cout<< "enter the ballot no.\n";
    cin>>bal;
    if(bal>=1 && bal<=5)
    {
      arr[bal-1]++;
    }else{
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
