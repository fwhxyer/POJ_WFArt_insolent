#include <iostream>
#include <set>
using namespace std;

int cho[101];
set<int> s;
int main()
{
	int k,m,tmp;
	while(cin>>k&&k){
		s.clear();
		cin>>m;
		for (int i=0;i<k;i++) {
			cin>>tmp;
			s.insert(tmp);
		}
		int n,lim;
		bool flag=true;
		for (int i=0;i<m;i++) {
			cin>>n>>lim;
			int ans=0;
			for (int j=0;j<n;j++) {
				cin>>tmp;
				if (s.count(tmp)) ans++;
			}
			if (ans<lim) flag=false;
		}
		if (flag) cout<<"yes\n";
		else cout<<"no\n";
	}
	return 0;
}