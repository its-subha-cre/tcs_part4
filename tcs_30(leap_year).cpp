#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
bool leap(int n)
{
	if(n%4==0&&n%100==0&&n%400==0)
	{
	return true;	
	}
	if(n%4==0&&n%100!=0)
	{
		return true;
	}
return false;
}
int main()
{
	int n=1700;
	if(leap(n))
	{
		cout<<"leap year is"<<n<<endl;
	}
	else
	{
		cout<<n<<"is not a leap year"<<endl;
	}
}