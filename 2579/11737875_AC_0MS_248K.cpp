#include <iostream>
#include <string>
using namespace std;

int mp[10][10];

int main()
{
	string s;
	int n,m;
	while (cin>>s&&s=="START"){
		cin>>n>>m;
		char c;
		for (int i=0;i<n;i++)
			for (int j=0;j<m;j++){
				cin>>c;
				mp[i][j]=c-'0';
			}
		cin>>s;
		for (int i=0;i<n-1;i++)
			for (int j=0;j<m-1;j++)
				mp[i][j]=(mp[i][j]+mp[i+1][j]+mp[i][j+1]+mp[i+1][j+1])/4.0;
		for (int i=0;i<n-1;i++){
			for (int j=0;j<m-1;j++) cout<<mp[i][j];
			cout<<endl;
		}
	}
	return 0;
}