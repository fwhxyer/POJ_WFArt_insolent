#include<iostream>

using namespace std;

int main()
{
	int a,b,c;
	while (cin>>a>>b>>c)
	{
		if (a==0&&b==0&&c==0) break;
		if (c)
		{
			a-=7;
			b-=7;
			if (a%2&&b%2)
			{
				cout<<(a*b+1)/2<<endl;
			}
			else 
				cout<<a*b/2<<endl;
		}else
		{
			a-=7;
			b-=7;
			if (a%2&&b%2)
			{
				cout<<(a*b-1)/2<<endl;
			}
			else 
				cout<<a*b/2<<endl;
		}
	}
	return 0;
}