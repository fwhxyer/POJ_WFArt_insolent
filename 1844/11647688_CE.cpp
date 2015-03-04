#include <iostream>
using namespace std;

int main()
{
	int n,sum=0;
	cin>>n;
	for (int i =1 ;i<=n;i++){
		sum+=i;
		if (sum>=n)
			if ((sum-n)%2)
				continue;
			else
				break;
	}
	cout<<i<<endl;
	return 0;
}