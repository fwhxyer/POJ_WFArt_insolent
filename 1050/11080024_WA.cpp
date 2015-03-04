#include<iostream>
using namespace std;

int a[101][101];
int sum[101][101]={0};
int tmp[101];
int ans=0;

int main()
{
	int n;
	cin>>n;
	for (int i=1;i<=n;i++)
		for (int j=1;j<=n;j++)
			cin>>a[i][j];
	for (int i=1;i<=n;i++)
		for (int j=1;j<=n;j++)
			sum[i][j]=sum[i][j-1]+a[i][j];
	for (int i=n;i>=1;i--)
		for (int j=i-1;j>=0;j--){
			int tmpN=0;
			for (int k=1;k<=n;k++){
				tmp[k]=sum[k][i]-a[k][j];
				tmpN+=tmp[k];
				if (tmpN<0) tmpN=0;
				if (tmpN>ans) ans=tmpN;
			}
		}
	cout<<ans<<endl;
	system("pause");
}