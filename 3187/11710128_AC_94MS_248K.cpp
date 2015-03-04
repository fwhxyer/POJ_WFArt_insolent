#include <iostream>

using namespace std;

int way[11][10]={{0},{1},{1,1},{1,2,1},{1,3,3,1},{1,4,6,4,1},{1,5,10,10,5,1},{1,6,15,20,15,6,1},{1,7,21,35,35,21,7,1}
,{1,8,28,56,70,56,28,8,1},{1,9,36,84,126,126,84,36,9,1}};

bool b[11]={0};
int n,ans;
int a[11];
bool flag=0;

void go(int p){
	if (p>=n){
		int ans1=0;
		for (int i=0;i<n;i++)
			ans1+=a[i]*way[n][i];
		if (ans1==ans) {flag=true; for (int i=0;i<n-1;i++) cout<<a[i]<<" ";cout<<a[n-1]<<endl;}
		return;
	}else
	{
		for (int i=1;i<=n;i++)
		{
			if (!b[i]){
				b[i]=1;
				a[p]=i;
				go(p+1);
				if (flag) return;
				b[i]=0;
			}
		}
	}
}

int main()
{
	cin>>n>>ans;
	go(0);
	//system("pause");
	return 0;
}