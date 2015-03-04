#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int a[10001]={0};
	int n;
	cin>>n;
	for (int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	cout<<a[n/2]<<endl;
	system("pause");
}