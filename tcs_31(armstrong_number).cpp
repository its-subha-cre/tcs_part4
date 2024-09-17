#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
int main()
{
	int n=154;
	int d;
	int s=0;
	int g=n;
	while(n!=0)
	{
	d=n%10;	
	s+=pow(d,3);
	n=n/10;
	}
	if(s==g)
	{
		cout<<g<<" "<<"is an armstrong number"<<endl;
	}
	else
	{
			cout<<g<<" "<<"is not an armstrong number"<<endl;
	}
}