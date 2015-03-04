#include <iostream>
#include <string.h>

using namespace std;

int a[100010];
int b[100010];

int main()
{
	int n,len;
	while(scanf("%d",&n)!=EOF)
	{
		if (n==0) {printf("0\n");continue;}
		for(int i=0;i<n;i++)
			scanf("%d",&a[i]);
		memset(b,0,sizeof(b));
		len=1;
		b[len-1]=a[0];
		for(int i=1;i<n;i++)
		{
			if (a[i]>b[len-1]) {
				len++;
				b[len-1]=a[i];
			}
			else
			{
				int p=0,q=len-1,j;
				while(p<=q) {
					j=((p+q)>>1);
					if (a[i]>b[j])
						p=j+1;
					else if (a[i]<b[j])
						q=j-1;
					else 
						break;
				}
				if (p<=q) continue;
				else{
					if (a[i]>b[j]){
						b[j+1]=a[i];
					}else{
						b[j]=a[i];
					}
				}
			}
		}
		printf("%d\n",len);
	}
	return 0;
}