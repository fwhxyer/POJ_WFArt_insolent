#include<iostream>

using namespace std;

int main()
{
	int n0,T=0;
	while (cin>>n0&&n0!=0)
	{
		int n1=3*n0,n2,n3,n4;
		cout<<++T;
		if (n1%2) {
			cout<<". odd ";
			n2=(n1+1)/2;
		}else{ 
			cout<<". even ";
			n2=n1/2;
		}
		n3=3*n2;
		n4=n3/9;
		cout<<n4<<endl;
	}
	return 0;
}