#include<iostream>
#include<math.h>
using namespace std;

int a[20];

int main()
{
	int n,m,k;
	cin>>n>>m>>k;
	for (int i=0;i<k;i++)
		cin>>a[i];
	int tmp,ans=0;
	for (int i=0;i<k;i++){
		cin>>tmp;
		ans+=abs(tmp-a[i]);
	}
	cout<<ans/2<<endl;
	return 0;
}