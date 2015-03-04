#include<iostream>
using namespace std;

bool par[100]={0};

int main()
{
	int t;
	cin>>t;
	for (int i=0;i<t;i++)
	{
		int n,a,tmp=0;
		cin>>n;
		fill(par,par+n+1,0);
		for (int j=0;j<n;j++){
			cin>>a;
			int i=1;
			while (par[a]){
				a--;
				i++;
			}
			par[a]=1;
			cout<<i<<" ";
		}
		cout<<endl;
	}
	system("pause");
}