#include<iostream>

using namespace std;

int main()
{
	int n,k,m,f;
	while (cin>>n>>k>>m)
	{
		if (!n&&!k&&!m) break;
		f=0;//x1
		for (int i=2;i<n;i++)
			f=(f+k)%i;
		f=(f+m)%n;
		cout<<f+1<<endl;
	}
	return 0;
}