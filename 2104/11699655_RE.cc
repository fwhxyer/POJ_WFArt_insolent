#include<stdio.h>
#include<algorithm>
#include<iostream>
#include<map>
using namespace std;

pair<int,int> a[100005];

int main()
{
	int n,m,q,w,e;
	scanf("%d%d",&n,&m);
	for (int i=0;i<n;i++){
		scanf("%d",&a[i].first);
		a[i].second=i+1;
	}
	sort(a,a+n);
	while (m--)
	{
		scanf("%d%d%d",&q,&w,&e);
		int tmp=0,i;
		for (i=0;i<n;i++){
			if (a[i].second<=w&&a[i].second>=q)
				tmp++;
			if (tmp>=e) break;
		}
		printf("%d\n",a[i]);
	}
}