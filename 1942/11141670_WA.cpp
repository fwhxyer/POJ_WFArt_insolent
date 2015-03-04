#include<iostream>
using namespace std;

int main()
{
	long long n,m;
	while (cin>>m>>n)
	{
		if (m==0||n==0) {cout<<1<<endl;continue;}
		if (m>n) {int tmp=n;n=m;m=tmp;}
		double s=1;
		for (int i=n+m;i>n;i--)
		{
			s*=(double)i/(double)(i-n);
		}
		printf("%1.0f\n",s);
	}
	system("pause;");
}