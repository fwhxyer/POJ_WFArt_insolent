#include <iostream>
#include <string.h>

using namespace std;

int f[55][1005]={0};

int min(int a,int b){return a>b?b:a;}
int max(int a,int b){return a>b?a:b;}

int main()
{
	int T,TT,b,m;
	for (int B=1;B<=50;B++)
		for (int M=1;M<=1000;M++)
			f[B][M]=5000;
	for (int i=1;i<=1000;i++)
		f[1][i]=i;
	for (int B=2;B<=50;B++)
		for (int M=1;M<=1000;M++)
			for (int i=1;i<=M;i++)
				f[B][M]=min(f[B][M],1+max(f[B-1][i-1],f[B][M-i]));
	cin>>T;
	while (T--){
		cin>>TT>>b>>m;
		cout<<TT<<" "<<f[b][m]<<endl;
	}
	return 0;
}