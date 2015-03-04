#include<iostream>
using namespace std;

int main()
{
	int n;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		int a,b,c,d;
		cin>>a>>b;
		c=(a+b)/2;
		d=(a-b)/2;
		if (c>=0&&d>=0&&c>d&&d==(a-c))
			cout<<c<<" "<<d<<endl;
		else if (c>=0&&d>=0&&c<=d&&d==(a-c))
			cout<<d<<" "<<c<<endl;
		else
			cout<<"impossible\n";
	}
	system("pause");
}