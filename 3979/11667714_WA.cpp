#include <iostream>

using namespace std;

unsigned int gcd(unsigned int a,unsigned int b){
	while (b^=a^=b^=a%=b);
	return a;
}

int main()
{
	int a,b,c,d,g,l,ans1,ans2,tmp;
	char e,ee;
	while (cin>>a>>ee>>b>>e>>c>>ee>>d)
	{
		int g=gcd(b,d);
		if (e=='+')
			a=a*d/g+c*b/g;
		else
			a=a*d/g-c*b/g;
		ans1=a*g;ans2=b*d;
		if (ans1<0){
			ans1=-ans1;
			printf("-");
		}
		while ((tmp=gcd(ans1,ans2))>1)
		{
			ans1/=tmp;
			ans2/=tmp;
		}
		if (ans1){
			if (ans1==ans2)
				printf("1\n");
			else
				printf("%d/%d\n",ans1,ans2);
		}else 
			printf("0\n");
	}
	return 0;
}