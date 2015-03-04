#include <iostream>

using namespace std;

int main()
{
	int a,T,n=0,tmp=0,max=0,min=1000000000;
	while (cin>>T&&T!=0)
	{
		for (int i=0;i<T;i++)
		{
			cin>>a;
			tmp+=a;
			n++;
			if (a<min) min=a;
			if (a>max) max=a;
		} 
		tmp-=min;
		tmp-=max;
		cout<<tmp/(n-2)<<endl;
		n=0,tmp=0,max=0,min=1000000000;
	}
	return 0;
}