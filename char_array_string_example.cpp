#include <iostream>		
using namespace std;

int main()				
{
	int i;
	//See details about the ASCII table and values in the book or any online source
	//This program will print some additional symbols
	char c;
	c='A';		//Starts from A  65
	while(c<='z')	//Ends at z 122
	{
		i=c;	//assign the char value to the integer varriable
		cout<<c<<" ";			//print the character
		cout<<i<<endl;		//print the ASCII value
		c++;			//Increment by one, goes to the next character
	}
	return 0;
}
