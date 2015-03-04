#include<iostream>
#include<math.h>
using namespace std;

int main()
{
	int a=50000;
	cin>>a;
		unsigned long long x=a*a+1;
		for (unsigned long long i=a;i>0;i--){
			unsigned long long j;
			bool tmp=true;
			for (j=unsigned long long(x/i)-1;j<=unsigned long long(x/i)+1;j++){
				if (x==i*j){
					cout<<i+j+a+a<<endl;
					tmp=false;
					break;
				}
			}
			if (!tmp) break;
		}
	system("pause");
	return 0;
}