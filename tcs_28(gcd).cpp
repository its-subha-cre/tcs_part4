#include<iostream>
#include<vector>
using namespace std;
int gcd(int a,int b)
{
	if(a==0)
	{
		return b;
	}
	else
	{
		return gcd(b%a,a);
	}
}
int lcm(int a,int b)
{
	int x=a*b;
	int y=x/gcd(a,b);
	return y;
}
int main()
{
	int a=9;
	int b=12;
	cout<<lcm(a,b);
	cout<<gcd(a,b);
}