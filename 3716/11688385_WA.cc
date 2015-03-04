#include<iostream>
#include<stdio.h>

using namespace std;

int main()
{
	int T;
	cin>>T;
	while (T--)
	{
		int p,q;
		scanf("%d%d",&p,&q);
		double a=(p+q+10)/7.0;
		printf("%0.3lf\n",a);
	}
}