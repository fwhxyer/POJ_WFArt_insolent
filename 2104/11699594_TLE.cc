#include<stdio.h>
#include<algorithm>
#include<iostream>

using namespace std;

int a[100005];int b[100005];

int main()
{
	int n,m,q,w,e;
	scanf("%d%d",&n,&m);
	for (int i=0;i<n;i++)
		scanf("%d",&a[i]);
	while (m--)
	{
		scanf("%d%d%d",&q,&w,&e);
		for (int i=q;i<=w;i++)
			b[i-q]=a[i-1];
		sort(b,b+w-q+1);
		printf("%d\n",b[e-1]);
	}
}