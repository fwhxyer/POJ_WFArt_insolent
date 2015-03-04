#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
	while(n)
	{
		int x=(-1+sqrt(1.0+8*n))/2;
		cout<<n<<" ";
		cout<<int((x+1)*(n-(x*x+x)/2)+x*(x+1)*(x+x+1)/6)<<endl;
		cin>>n;
	}
}