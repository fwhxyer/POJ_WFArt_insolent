#include<iostream>

using namespace std;

int main()
{
	int a,b,c,d;
	while (cin>>a>>b>>c>>d)
	{
		if (a==0&&b==0&&c==0&d==0)
			break;
		cout<<a+c-b<<endl;
	}
	return 0;
}