#include<iostream>
#include<string>
using namespace std;

string a,b;
int f[1024][1024];

int max(int a,int b){return a>b?a:b;}
int sam(char a,char b){return a==b;}

int main()
{
	while (cin>>a>>b)
	{
		memset(f,0,sizeof(f));
		for (int i=1;i<=a.length();i++)
			for (int j=1;j<=b.length();j++)
				f[i][j]=max(f[i-1][j-1]+sam(a[i-1],b[j-1]),max(f[i-1][j],f[i][j-1]));
		cout<<f[a.length()][b.length()]<<endl;
	}
}
