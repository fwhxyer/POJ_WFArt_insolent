#include<iostream>

using namespace std;

int a[50001],b[50001],c[50001];

int main()
{
	int n;
	cin>>n;
	for (int i=0;i<n;i++)
		cin>>a[i];
	a[n]=0;
	bool type=0;
	for (int i=0;i<n;i++)
	{
		int tmp=i;
		while (tmp>0&&a[tmp-1]<a[tmp]) tmp--;
		b[i]=tmp;
		tmp=i;
		while (tmp<n-1&&a[tmp+1]<a[tmp]) tmp++;
		c[i]=tmp;
	} 
	for (int i=0;i<n;)
	{
		if (a[i]==a[i+1]) {cout<<i+1<<endl;i++;}
		else if (a[i]>a[i+1]) {cout<<i+1<<endl;i=c[i]+1;}
		else i++;
	}
	return 0;
}