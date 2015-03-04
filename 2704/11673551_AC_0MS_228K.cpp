#include <iostream>
#include <string.h>

using namespace std;

char mp[35][35];
long long f[35][35];

int main()
{
	long long n;
	while (cin>>n&&n!=-1)
	{
		for (long long i=0;i<n;i++)
			for (long long j=0;j<n;j++){
				cin>>mp[i][j];
				mp[i][j]-='0';
			}
		memset(f,0,sizeof(f));
		f[0][0]=1;
		for (long long i=0;i<n;i++)
			for (long long j=0;j<n;j++){
				if (mp[i][j]==0) continue;
				if (i+mp[i][j]<n) f[i+mp[i][j]][j]+=f[i][j];
				if (j+mp[i][j]<n) f[i][j+mp[i][j]]+=f[i][j];
				/*
				cout<<i<<" "<<j<<endl;
				for (long long i=0;i<n;i++){
					for (long long j=0;j<n;j++){
						cout<<f[i][j]<<" ";
					}
					cout<<endl;
				}
				cout<<"dddddddddddd\n";
				*/
			}
		cout<<f[n-1][n-1]<<endl;
	}
	return 0;
}