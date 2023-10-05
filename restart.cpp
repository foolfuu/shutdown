#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	//system("shutdown -r");
	cout<<"1) shutdown"<<endl;
	cout<<"2) restart"<<endl;
	
	
	int x;
	cout<<"Enter: ";
	cin>>x;
	if(x == 1)
	{
		system("shutdown -s");
	}
	
	if(x == 2)
	{
		system("shutdown -r");
	}
}