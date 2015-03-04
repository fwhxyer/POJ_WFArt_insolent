#include <iostream>

using namespace std;

int ff[1001];

int main()
{
	int T,a,b,c,d,e,f,g,h,aa;
	cin>>T;
	while (T--){
		memset(ff,0,sizeof(ff));
		scanf("%d%d%d%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f,&g,&h,&aa);
		ff[0]=a;ff[1]=b;ff[2]=c;
		for (int i=3;i<=aa;i++)
			if (i%2){
				ff[i]=(d*ff[i-1]+e*ff[i-2]-f*ff[i-3])%g;
				if (ff[i]<0) ff[i]+=g;
			}else{
				ff[i]=(f*ff[i-1]-d*ff[i-2]+e*ff[i-3])%h;
				if (ff[i]<0) ff[i]+=h;
			}
		printf("%d\n",ff[aa]);
	}
	return 0;
}
