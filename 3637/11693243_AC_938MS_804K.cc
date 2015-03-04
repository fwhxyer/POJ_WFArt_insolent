#include <iostream>
#include <algorithm>

using namespace std;

int a[20005];
int main()
{
	int T,n;
	cin>>T;
	while (T--)
	{
		int ans=0;
		cin>>n;
		for (int i=0;i<n;i++)
			cin>>a[i];
		sort(a,a+n);
		for (int i=n-1;i>=0;i--)
			if ((n-i-1)%3==2)
				ans+=a[i];
		cout<<ans<<endl;
	}
	return 0;
}