#include <iostream>
#include <math.h>

using namespace std;

int Wget(int a,int b) { return (a>>b)&1;}
int main()
{
	int T,a;
	cin>>T;
	while (T--)
	{
		cin>>a;
		int p=0;
		while (!Wget(a,p++));
		int b=a;
		for (int i=1;i<=p;i++)
			b=b|(1<<(i-1));
		int c=a;
		c++;
		c=c&~(1<<(p-1));
		cout<<c<<" "<<b<<endl;
	}
	return 0;
}