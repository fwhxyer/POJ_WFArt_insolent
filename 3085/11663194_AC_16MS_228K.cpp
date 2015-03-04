#include<iostream>

using namespace std;

int main()
{
	int T;
	cin>>T;
	int n,a,b,c,d,i=0;
	while (T--)
	{
		a=b=c=d=0;
		cin>>n;
		while (n>=25)
		{
			a++;
			n-=25;
		}
		while (n>=10)
		{
			b++;
			n-=10;
		}
		while (n>=5)
		{
			c++;
			n-=5;
		}
		while (n>=1)
		{
			d++;
			n--;
		}
		printf("%d %d QUARTER(S), %d DIME(S), %d NICKEL(S), %d PENNY(S)\n",++i,a,b,c,d);
	}
	return 0;
}