#include <iostream>		
using namespace std;

int main()				
{
	int i;
	i=0;		//initialize i
	while(i<10)	//breaking condition
	{
		cout<<i<<endl;
		i++; 			//increment
	}
	cout<<"Last value of i: "<<i<<endl;	
	i=0;
	do
	{
		cout<<i<<endl;
		i++;
	}while(i<10);
	return 0;
}

