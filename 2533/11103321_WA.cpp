#include<iostream>
using namespace std;

int a[1001]={0};
int f[1001];

int max(int a,int b){return a>b?a:b;}

int main()
{
	int n;
	cin>>n;
	for (int i=0;i<n;i++)
		cin>>a[i];
	for (int i=0;i<n;i++)
		f[i]=1;
	for (int i=1;i<n;i++)
		for (int j=0;j<i;j++)
			if (a[j]<a[i])
				f[i]=max(f[i],f[j]+1);
	cout<<f[n-1]<<endl;
	system("pause");
}