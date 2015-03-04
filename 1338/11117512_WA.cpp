#include<iostream>
#include<algorithm>
using namespace std;

int ans[1501]={0};

int main()
{
	int j=1;
	ans[0]=1;
	for(int i=0;i<1500;i++){
		if (!binary_search(ans,ans+j,ans[i]*2))
			ans[j++]=ans[i]*2;
		sort(ans,ans+j);
		if (!binary_search(ans,ans+j,ans[i]*3))
			ans[j++]=ans[i]*3;
		sort(ans,ans+j);
		if (!binary_search(ans,ans+j,ans[i]*5))
			ans[j++]=ans[i]*5;
		sort(ans,ans+j);
		if (j>=1500) break;
	}
	int n;
	while(cin>>n&&n!=0)
	{
		cout<<ans[n-1]<<endl;
	}
}