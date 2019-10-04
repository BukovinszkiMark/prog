#include "std_lib_facilities.h"



int main()
{
	
	/**
	int a,b;
	while(cin>>a && cin>>b)
	{
		cout<<a<<' '<<b<<'\n';
		if(a>b)
			cout<<"The larger value is: "<<a<<'\n';
		else if(b>a)
			cout<<"The larger value is: "<<b<<'\n';
		else if(a==b)
			cout<<"The numbers are equal"<<'\n';
	}
	*/

	
	double a,b;
	while(cin>>a && cin >> b)
	{
		if(a>b)
		{
			cout<<"The larger value is: "<<a<<'\n';
			if((a-b)<(1.0/100))
				cout<<"The numbers are almost equal\n";
		}
		else if(b>a)
		{
			cout<<"The larger value is: "<<b<<'\n';
			if((b-a)<(1.0/100))
				cout<<"The numbers are almost equal\n";
		}
		else if(a==b)
			cout<<"The numbers are equal"<<'\n';
	}
	
   
	return 0;
}
