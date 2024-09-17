#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int n=10;
	int j=n;
	int s=0;
	while(n!=0)
	{
		int d=n%10;
		s+=d;
		n=n/10;
	}
	if(j%s==0)
	{
		cout<<"harshad number"<<endl;
	}
	else
	{
			cout<<"not harshad number"<<endl;
	}
}