#include<iostream>
using namespace std;

bool b[10001]={0};

int find(int n){
	int ans=0;
	for (int i=1;i<=n;i++){
		for (int j=1;j<=n/i;j++)
			if (b[j*i]) b[j*i]=0; else b[j*i]=1;
	}
	for (int i=1;i<=n;i++)
		if (b[i]) ans++;
	return ans;
}

int main()
{
	int t,n;
	cin>>t;
	for (int i=0;i<t;i++){
		cin>>n;
		fill(b,b+n+1,0);
		cout<<find(n)<<endl;
	}
	system("pause");
}
