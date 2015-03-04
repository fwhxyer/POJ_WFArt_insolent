#include <iostream>
#include <stdlib.h>
#include <stdio.h>

using namespace std;

int a[150009];
int dp[150009][2];

int max(int a,int b){return a>b?a:b;}

int main()
{
	int n;
	cin>>n;
	for (int i=0;i<n;i++)
		scanf("%d",&a[i]);
	int tmp=0,flag=1,ans=0;
	dp[n+1][0]=dp[n+1][1]=0;
	for (int i=n;i>0;i--)
	{
		dp[i][0]=max(a[i-1]+dp[i+1][1],dp[i+1][0]);
		dp[i][1]=max(-a[i-1]+dp[i+1][0],dp[i+1][1]);
	}
	cout<<dp[1][0]<<endl;
	//system("pause");
	return 0;
}