#include <iostream>
#include <string.h>
using namespace std;

int mp1[35][35];
int mp2[35][35];
int main()
{
	int T,n;
	cin>>T;
	while (T--)
	{
		cin>>n;
		memset(mp1,0,sizeof(mp1));
		memset(mp2,0,sizeof(mp2));
		mp2[n+1][n+1]=1;
		for (int k=0;k<(n+1)/2;k++){
			for (int i=1;i<=1+n+n;i++)
				for (int j=1;j<=1+n+n;j++)
				{
					mp1[i][j]=mp2[i+1][j]+mp2[i-1][j]+mp2[i][j+1]+mp2[i][j-1]+mp2[i+1][j-1]+mp2[i-1][j+1];
				}
			if (!(n%2)||(k+1<(n+1)/2)) 
			for (int i=1;i<=1+n+n;i++)
				for (int j=1;j<=1+n+n;j++)
				{
					mp2[i][j]=mp1[i+1][j]+mp1[i-1][j]+mp1[i][j+1]+mp1[i][j-1]+mp1[i+1][j-1]+mp1[i-1][j+1];
				}
		}
		if (n%2)
			cout<<mp1[n+1][n+1];
		else 
			cout<<mp2[n+1][n+1];
		cout<<endl;
	}
}