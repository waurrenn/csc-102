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
	//program will continue here after the loop breaks
	cout<<"Last value of i: "<<i<<endl;	//last value of i 
	 
	//init i again to 0 for the do while loop
	i=0;
	//the breaking condition is at the end and loop verifies the condition at 
	//the end of each iteration, loop will run regardless of any conditions
	//for the first iteration
	do
	{
		cout<<i<<endl;
		i++;
	}while(i<10);
	return 0;
}

