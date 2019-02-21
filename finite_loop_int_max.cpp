#include <iostream>
#include <string>		
using namespace std;

int main()				
{
	int i;
	// value of i will change to negative after 2147483648(max) 
	//This is an finite loop
	for(i=1;i>0;i=i+99999)		//loop will break when the value is negetive
	{
		cout<<"i: "<<i<<endl;
	}
	cout<<"Last value of i: "<<i<<endl;		//The value of loop broke
	return 0;
}

