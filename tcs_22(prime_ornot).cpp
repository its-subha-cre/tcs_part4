#include<iostream>
#include<vector>
using namespace std;
int main()
{
	int min=2;
	int max=11;
	int c=0;
	for(int i=min;i<=max;i++)
	{
		int c=0;
		for(int j=1;j<=i;j++)
		{
			if(i%j==0)
			{
				c++;
			}
		}
		if(c==2)
		{
			cout<<i<<endl;
		}
	}
}