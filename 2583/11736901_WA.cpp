#include <iostream>
using namespace std;

int main()
{
	int a,b,c;
	while (cin>>c>>a>>b)
	{
		a*=2;
		a=(b-a)/2;
		b=(b-4*a)/2;
		cout<<a*9+b*3+c<<" "<<a*16+b*4+c<<" "<<a*25+b*5+c<<endl;
	}
	return 0;
}