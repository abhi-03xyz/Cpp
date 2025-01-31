#include<iostream>
using namespace std;
class Item{
 	int size;
 	int *itemPrice;
 	int *itemCode;
 	int count;
 	public:
 	void initialise(void);
 	void addItem(void);
 	void displayAll(void);
 	void displaySum(void);
 	
};

void Item :: initialise(){

 cout<<"Enter the total number of items:\n";
 cin>>size;
 itemPrice=new int[size];
 itemCode=new int[size];

}

void Item :: addItem()
{

 if(count<size)
 {
  int id,price;
  cout<<"Enter the product code:\n";
  cin>>id;
  cout<<"Enter the product price:\n";
  cin>>price;
  itemPrice[count]=price;
  itemCode[count]=id;
  count++;
 }else{
  cout<<"No more items can't be added";
  //exit(0);
 }
    
}

void Item :: displaySum()
{  
     int sum=0;
  for(int i=0;i<count;i++)
  {
     sum += itemPrice[i];
  
  }
  cout<<"Total price is:"<<sum<<"\n";

}
void Item :: displayAll()
{

   for(int i=0;i<count;i++)
   {
      cout<<"Product code:"<<itemCode[i]<<"  Product price:"<<itemPrice[i]<<"\n";
   
   }

}


int main()
{
   Item ob;
   ob.initialise();
   int x;
   
   do{
   
    cout<<"menu\n";
    cout<<"1:Add an item\n";
    cout<<"2:Display total price\n";
    cout<<"3:Display All\n";
    cout<<"4:quit\n";
    
    cin>>x;
    switch(x){
     case 1:ob.addItem();
     	    break;
    case 2:ob.displaySum();
    	    break;
    case 3:ob.displayAll();
    	    break;
    case 4:
         break;
    default:
    	   cout<<"Invalid input";
    
    }   
   }while(x!=4);
   
   
   
return 0;
}
