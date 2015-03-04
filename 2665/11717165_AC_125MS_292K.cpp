#include <iostream>
#include <string.h>
#include <map>
#include <algorithm>

using namespace std;

pair<int ,int > mp[5001];

int main()
{
	int l,m,a,b;
	while(cin>>l>>m){
		if (!l&&!m) break;
		for (int i=0;i<m;i++) {
			cin>>a>>b;
			bool flag=0;
			for(int j=0;j<=i;j++) 
				if (mp[j].first==a) 
					if (mp[j].second<b) {
						mp[j].second=b;
						flag=1;
					}
			if (!flag) mp[i]=make_pair(a,b);
			
		}
		sort(mp,mp+m);
		int ans=0;
		int front=mp[0].first,rear=mp[0].second;
		for (int i=1;i<m;i++){
			if (rear<mp[i].first){
				ans+=rear-front+1;
				front=mp[i].first;
				rear=mp[i].second;
			}else 
				if (rear<mp[i].second) rear=mp[i].second;
		}
		ans+=rear-front+1;
		ans=l+1-ans;
		cout<<ans<<endl;
	}
	return 0;
}