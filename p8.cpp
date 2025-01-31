#include<iostream>
#include <string>
#include<cstdlib>
using namespace std;
class Binary{
	string binary;
	public:
	void readBinary(){
	 cout<<"Enter the binary nuber\n";
	 cin>>binary;
	}
	bool chk_bin(){
	  for(int i=0;i<binary.length();i++)
	  {
	    if(binary[i] != '0' && binary.at(i) != '1')
	    {
	      return false;
	    }
	  }
	  return true;
	}
	void ones()
	{      
		bool valid=chk_bin();
		if(valid==false)
		{
		  cout<<"Please enter a valid binary number\n"; 
		  exit(0);
		}else{
		 //String one="";
		 for(int i=0;i<binary.length();i++)
		 {
		   if(binary.at(i)=='0')
		   {
		     binary.at(i)='1';
		   }else{
		     binary.at(i)='0';
		   }
		 }
		
		}	
	
	}
	void display()
	{ 
	  ones();
	  
	  cout<<binary;
	}
	
	


}; 

int main()
{
Binary b;
b.readBinary();
b.display();

return 0;

}
