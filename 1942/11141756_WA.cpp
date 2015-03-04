#include<iostream>
using namespace std;

int main()
{
	long long n,m;
	while (cin>>m>>n && (m!=0&&n!=0))
	{
		if (m==0||n==0) {cout<<1<<endl;continue;}
		if (m>n) {long long tmp=n;n=m;m=tmp;}
		double s=1;
		for (long long i=n+1;i<=m+n;i++)
		{
			s*=(double)i/(double)(i-n);
		}
		printf("%0.0f\n",s);
	}
	system("pause");
}