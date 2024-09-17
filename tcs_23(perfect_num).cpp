#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n=6;
	int k=n;
	int s=0;
	for(int i=1;i<n;i++)
	{
		if(n%i==0)
		{
			s=s+i;
		}
	}
	if(k==s)
	{
		cout<<"perfect";
	}
}