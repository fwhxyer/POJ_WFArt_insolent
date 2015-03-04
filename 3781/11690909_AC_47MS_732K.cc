#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	int T,TT;
	int a[10];
	cin>>T;
	while (T--)
	{
		cin>>TT;
		for (int i=0;i<10;i++)
			cin>>a[i];
		sort(a,a+10);
		cout<<TT<<" "<<a[7]<<endl;
	}
	return 0;
}