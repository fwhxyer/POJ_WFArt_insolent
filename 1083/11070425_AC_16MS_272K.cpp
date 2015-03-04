#include<iostream>
using namespace std;

int room[201]={0};
int max1=0;

int main()
{
	int n;
	cin>>n;
	for (int i= 0;i<n;i++)
	{
		int m;
		for (int j=0;j<201;j++)
			room[j]=0;
		cin>>m;
		max1=0;
		for (int j=0;j<m;j++){
			int a,b;
			cin>>a>>b;
			if (a>b) {a=a^b;b=a^b;a=a^b;}
			room[(a-1)/2]++;
			room[(b-1)/2+1]--;
		}
		int ans=0;
		for (int j=0;j<201;j++){
			ans+=room[j];
			if (ans>max1) max1=ans;
		}
		cout<<max1*10<<endl;
	}
	system("pause");
}