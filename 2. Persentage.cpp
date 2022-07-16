#include <iostream>

using namespace std;

int main()

{
	float percent;
	
	int x;
	
	cout<<"Enter Your Percentage: ";
	cin>>percent;
	cout<<"You scored: "<<percent<<"%"<<endl;
	   x=percent/10;
	
	switch (x)
	{
		case 10:
		case 9:
		case 8:
		
		cout<<"You have Passed with Distinction";
		
		break;
		
		case 7:
		case 6:
		
		cout<<"You have Passed with First division";
		
		break;
		
		case 5:
		
		cout<<"You have Passed with Second Division";
		
		break;
		
		case 4:
		
		cout<<"You have passed with Third distinction";
		
		break;
		
		default:
		
		cout<<"Sorry: You have Failed";
		
	   }   
	
	
	return 0;
}
