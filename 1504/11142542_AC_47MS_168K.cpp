#include<stdio.h>
#include<algorithm>
using namespace std;

int main()
{
	int n,a,b;
	char aa[100],bb[100];
	scanf("%d",&n);
	for (int i=0;i<n;i++)
	{
		scanf("%d%d",&a,&b);
		sprintf(aa,"%d",a);
		sprintf(bb,"%d",b);
		reverse(aa,aa+strlen(aa));
		reverse(bb,bb+strlen(bb));
		sscanf(aa,"%d",&a);
		sscanf(bb,"%d",&b);
		a+=b;
		sprintf(aa,"%d",a);
		reverse(aa,aa+strlen(aa));
		sscanf(aa,"%d",&a);
		printf("%d\n",a);
	}
}