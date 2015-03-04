#include<iostream>
using namespace std;

int f[101][101]={0};
int a[101][101]={0};

int main()
{
	int n;
	cin>>n;
	for (int i=1;i<=n;i++)
		for (int j=1;j<=i;j++)
			cin>>a[i][j];
	for (int i=1;i<=n;i++)
		for (int j=1;j<=i;j++)
			f[i][j]=max(f[i-1][j-1],f[i-1][j])+a[i][j];
	int maxt=0;
	for (int i=1;i<=n;i++)
		if (f[n][i]>maxt)maxt=f[n][i];
	cout<<maxt<<endl;
	system("pause");
}