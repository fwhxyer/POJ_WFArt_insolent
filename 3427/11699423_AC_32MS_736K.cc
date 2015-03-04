#include <iostream>

using namespace std;

int a[30001],c[30001];

int main()
{
	int n,l;
	cin>>n>>l;
	for(int i=0;i<n;i++){
		cin>>a[i];
		a[i]%=l;
		c[a[i]]++;
	}
	int mint=0,minp=0;
	for (int i=1;i<l;i++)
	{
		if (i*(n-c[l-i])-c[l-i]*(l-i)<mint) {mint=i*n-c[l-i]*(l-i);minp=i;}
	}
	cout<<minp<<endl;
	return 0;
}