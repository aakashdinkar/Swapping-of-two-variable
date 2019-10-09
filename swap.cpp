#include <iostream>
using namespace std;
main()
{
	int a,b,c;
	cout<<"Enter first number:-";
	cin>>a;
	cout<<"Enter Second number:-";
	cin>>b;
	c=a;
	a=b;
	b=c;
	cout<<"After Swapping First Number is:-"<<a<<endl;
	cout<<"After Swapping Second Number is:-"<<b;
}
