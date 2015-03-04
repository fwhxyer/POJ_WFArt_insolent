#include <iostream>

using namespace std;

int mp[1001][1001];
int main()
{
	int n;
	bool ans=1;
	while (cin>>n&&n){
		for (int i=0;i<n;i++)
			for (int j=0;j<n;j++)
				cin>>mp[i][j];
		for (int i=0;i<n-1;i++){
			for (int j=0;j<n-1;j++)
				if (mp[i][j]+mp[i+1][j+1]!=mp[i+1][j]+mp[i][j+1]){
					ans=false;
					break;
				}
			if (!ans) break;
		}
		if (ans) cout<<"homogeneous\n";
		else cout<<"not homogeneous\n";
	}
	return 0;
}