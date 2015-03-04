#include <iostream>
using namespace std;

int arr[1002];

int main()
{
	int T,n,a,b;
	char c;
	cin>>T;
	while(T--){
		memset(arr,0,sizeof(arr));
		cin>>n;
		for (int i=0;i<n;i++) {
			cin>>c;
			cin>>a>>b;
			arr[a]++;
			arr[b]--;
		}
		int tmp=0;
		for (int i=1;i<=1000;i++) {
			tmp+=arr[i];
			if (tmp) cout<<char(tmp+'A'-1);
		}
		cout<<endl;
	}
	return 0;
}