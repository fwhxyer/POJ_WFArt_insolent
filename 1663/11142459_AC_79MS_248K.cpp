#include<iostream>
#include<string>
using namespace std;

int main()
{
	int t,x,y;
	cin>>t;
	for (int i=0;i<t;i++){
		cin>>x>>y;
		if (x==y)
		{
			if (x%2) cout<<2*x-1;
			else cout<<2*x;
		}else if(x-y==2)
		{
			if (x%2) cout<<2*x-3;
			else cout<<2*x-2;
		}else
			cout<<"No Number";
		cout<<endl;
	}
}