#include<iostream>

using namespace std;

int a[256],b[256];

int ga(int a,int b){return (a+b)/2;}
int gb(int a,int b){return (a-b)/2;}

int n;

void change(int nn)
{;
	for (int i=0;i<nn;i++)
	{
		b[i*2]=ga(a[i],a[i+nn]);
		b[i*2+1]=gb(a[i],a[i+nn]);
	}
	for (int i=0;i<nn*2;i++) a[i]=b[i];
	if (nn*2<n) change(2*nn);
}

int main()
{
	while(cin>>n&&n)
	{
		for (int i=0;i<n;i++)
			cin>>a[i];
		change(1);
		for (int i=0;i<n-1;i++)
			cout<<a[i]<<" ";
		cout<<a[n-1]<<endl;
	}
}