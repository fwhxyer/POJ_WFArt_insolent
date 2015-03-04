#include<iostream>
#include<string>
using namespace std;

short f[5001][5001];

int max(int a,int b){return a>b?a:b;}
int sam(char a,char b){return a==b;}

int main()
{
	int n,tmp,ans=5000;
	string a,b;
	cin>>n;
	cin>>a;
	b=a;
	for (int i=0;i<b.length()/2;i++)
	{tmp=b[i];b[i]=b[b.length()-i-1];b[b.length()-i-1]=tmp;}
	{
		memset(f,0,sizeof(f));
		for (int i=1;i<=a.length();i++)
			for (int j=1;j<=b.length();j++)
				f[i][j]=max(f[i-1][j-1]+sam(a[i-1],b[j-1]),max(f[i-1][j],f[i][j-1]));
		if (a.length()-f[a.length()][b.length()]<ans) ans=a.length()-f[a.length()][b.length()];
	} 
	cout<<ans<<endl;
	system("pause");
}