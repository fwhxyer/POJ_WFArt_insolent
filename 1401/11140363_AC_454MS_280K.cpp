#include<iostream>
using namespace std;

int main()
{
	int t=0;
	cin>>t;
	int n;
	for (int i=0;i<t;i++)
	{
		cin>>n;
		cout<<n/5+n/25+n/125+n/625+n/3125+n/15625+n/78125+n/390625
			  +n/1953125+n/9765625+n/48828125+n/244140625+n/1220703125
			<<endl;
	}
	system("pause");
}