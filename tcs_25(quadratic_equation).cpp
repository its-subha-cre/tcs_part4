#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
	double a,b,c;
	a=1;
	b=1;
	c=1;
	double x,y;
	x=(-b+sqrt(abs(pow(b,2)-4*a*c)))/2*a;
	y=(-b-sqrt(abs(pow(b,2)-4*a*c)))/2*a;
	if(pow(b,2)-4*a*c<0)
	{
		cout<<-b/2*a<<"+i"<<sqrt(abs(pow(b,2)-4*a*c))<<endl;
			cout<<-b/2*a<<"-i"<<sqrt(abs(pow(b,2)-4*a*c))<<endl;
	}
	else
	{
		cout<<x<<endl;
	cout<<y;	
	}

}