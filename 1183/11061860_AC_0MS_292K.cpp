#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	unsigned long long a=0;
	cin>>a;
	unsigned long long x=a*a+1;
	for (unsigned long long i=a;i>0;i--)
		if (x%i==0){
			cout<<i+x/i+2*a<<endl;
			break;
		}
	system("pause");
	return 0;
}