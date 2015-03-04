#include <iostream>
#include <queue>
#include <map>
using namespace std;

int mp[1005][1005]={0};
queue<pair<int,int> > q;
pair<int,int> tmp;

int main()
{
	int x,y,n,a,b;
	cin>>x>>y>>n;
	x+=500;y+=500;
	if (x==500&&y==500) {
		cout<<0<<endl;
		return 0;
	}
	while (n--){
		cin>>a>>b;
		mp[a+500][b+500]=true;
	}
	q.push(make_pair(500,500));
	while (!q.empty()){
		tmp=q.front();
		q.pop();
		if ((tmp.first+1==x&&tmp.second==y)||(tmp.first-1==x&&tmp.second==y)||(tmp.first==x&&tmp.second+1==y)||(tmp.first==x&&tmp.second-1==y)){
			cout<<mp[tmp.first][tmp.second]+1<<endl;
			break;
		}
		if (!mp[tmp.first+1][tmp.second]){
			mp[tmp.first+1][tmp.second]=mp[tmp.first][tmp.second]+1;
			q.push(make_pair(tmp.first+1,tmp.second));
		}
		if (!mp[tmp.first-1][tmp.second]){
			mp[tmp.first-1][tmp.second]=mp[tmp.first][tmp.second]+1;
			q.push(make_pair(tmp.first-1,tmp.second));
		}
		if (!mp[tmp.first][tmp.second+1]){
			mp[tmp.first][tmp.second+1]=mp[tmp.first][tmp.second]+1;
			q.push(make_pair(tmp.first,tmp.second+1));
		}
		if (!mp[tmp.first][tmp.second-1]){
			mp[tmp.first][tmp.second-1]=mp[tmp.first][tmp.second]+1;
			q.push(make_pair(tmp.first,tmp.second-1));
		}
	}
	return 0;
}