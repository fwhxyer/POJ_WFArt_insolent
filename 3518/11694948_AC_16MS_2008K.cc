#include<iostream>
#include<math.h>
using namespace std;

bool b[1299710];
int c[100001];

int main()
{
	fill(b,b+1299710,1);
	b[1]=0;
	for (int i=2;i<sqrt(1299710);i++)
	{
		if (b[i])
			for (int j=i+i;j<1299710;j+=i)
				b[j]=0;
	}
	int j=0;
	int n;
	while (cin>>n&&n)
	{
		int n1=n;
		while(!b[n]) n++;
		while(!b[n1]) n1--;
		cout<<n-n1<<endl;
	}
}