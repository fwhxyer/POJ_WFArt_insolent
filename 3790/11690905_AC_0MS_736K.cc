#include <iostream>

using namespace std;

int ansf[1005]={0,1};

int re (int a)
{
	if (ansf[a]) return ansf[a];
	if (a<=0) return 0;
	if (a==1) return 1;
	int ans=1;
	if (a%2) {
		for (int i=1;i<=a;i+=2)
		{
			int tmp=(a-i)/2;
			ans+=re(tmp);
		}
	}else
	{
		ans+=re(a/2);
		for (int i=2;i<=a;i+=2)
		{
			int tmp=(a-i)/2;
			ans+=re(tmp);
		}
	}
	ansf[a]=ans;
	return ans;
}

int main()
{
	int n,a,j=1;
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>a;
		cout<<j++<<" "<<re(a)<<endl;
	}
	return 0;
}