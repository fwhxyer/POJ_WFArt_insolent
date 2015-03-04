#include<iostream>
using namespace std;

int main()
{
	int m,n;
	while (cin>>n>>m){
		cout<<(m&(n-m)?0:1)<<endl;
	}

}