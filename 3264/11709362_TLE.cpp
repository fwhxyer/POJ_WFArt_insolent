#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

pair<int,int> a[50001];

int main()
{
	int n,q,tmp;
	cin>>n>>q;
	for (int i=1;i<=n;i++){
		cin>>tmp;
		a[i-1]=make_pair(tmp,i);
	}
	sort(a,a+n);
	int x,y,mint,maxt;
	while (q--)
	{
		cin>>x>>y;
		for (int i=n-1;i>=0;i--)
			if (a[i].second<=y&&a[i].second>=x){
				maxt=a[i].first;
				break;
			}
		for (int i=0;i<n;i++)
			if (a[i].second<=y&&a[i].second>=x){
				mint=a[i].first;
				break;
			}
		cout<<maxt-mint<<endl;
	}
	return 0;
}
