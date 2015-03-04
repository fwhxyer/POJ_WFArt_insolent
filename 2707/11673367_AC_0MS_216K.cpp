#include<iostream>
using namespace std;

int main()
{
	int a,b,c,d;
	while(cin>>a>>b>>c>>d){
		if (a==0&&b==0&&c==0&&d==0) break;
		if (a>b) a^=b^=a^=b;
		if (c>d) c^=d^=c^=d;
		if (a<=c&&b<=d)
			cout<<"100%\n";
		else if (c*100/a>d*100/b)
			cout<<d*100/b<<"%\n";
		else
			cout<<c*100/a<<"%\n";
	}
}