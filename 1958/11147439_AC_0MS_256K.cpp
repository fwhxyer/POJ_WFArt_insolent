#include<iostream>
#include<math.h>
using namespace std;

int f(int n,int a)
{
	if (n==1) return 1;
	if (n<=0) return 0;
	if (a==1) return 1+2*f(n-1,2);
	if (a==2) {
		if (n==2) return 2;
		int ans=f(1,1)+int(pow(2.0,n-1))-1;
		for (int i=n-2;i>=0;i--)
			if (ans>f(n-i,1)+int(pow(2.0,i))-1)
				ans=f(n-i,1)+int(pow(2.0,i))-1;
		//printf("ans:%d %d, %d\n",n,a,ans);
		return ans;
	}
}

int go(int n)
{
	//system("pause");
	return f(n,1);
}

int main()
{
	for (int i=1;i<=12;i++)
		cout<<go(i)<<endl;
	system("pause");
}