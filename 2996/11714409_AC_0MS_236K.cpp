#include <iostream>
#include <vector>
#include <map>
#include <algorithm>

using namespace std;
vector<pair<int,int> > k[2],q[2],r[2],b[2],n[2],p[2];

bool cmp(pair<int ,int > a,pair<int ,int > b){
	if (a.first>b.first)
		return true;
	else if (a.first<b.first)
		return false;
	else{
		if (a.second<b.second) return true;
		else return false;
	}
}
bool cmp1(pair<int ,int > a,pair<int ,int > b){
	if (a.first<b.first)
		return true;
	else if (a.first>b.first)
		return false;
	else{
		if (a.second<b.second) return true;
		else return false;
	}
}

int main()
{
	k[0].clear();q[0].clear();r[0].clear();b[0].clear();n[0].clear();p[0].clear();
	k[1].clear();q[1].clear();r[1].clear();b[1].clear();n[1].clear();p[1].clear();
	char c;
	int x=1,y=8;
	while (cin>>c){
		if (c=='+'||c=='|'||c=='-') continue;
		if (c=='.'||c==':') {
			cin>>c;
			switch(c){
			case 'K':
				k[0].push_back(make_pair(y,x));
				break;
			case 'Q':
				q[0].push_back(make_pair(y,x));
				break;
			case 'R':
				r[0].push_back(make_pair(y,x));
				break;
			case 'B':
				b[0].push_back(make_pair(y,x));
				break;
			case 'N':
				n[0].push_back(make_pair(y,x));
				break;
			case 'P':
				p[0].push_back(make_pair(y,x));
				break;
			case 'k':
				k[1].push_back(make_pair(y,x));
				break;
			case 'q':
				q[1].push_back(make_pair(y,x));
				break;
			case 'r':
				r[1].push_back(make_pair(y,x));
				break;
			case 'b':
				b[1].push_back(make_pair(y,x));
				break;
			case 'n':
				n[1].push_back(make_pair(y,x));
				break;
			case 'p':
				p[1].push_back(make_pair(y,x));
			}
			x++;
			if (x>=9) {x=1;y--;}
			cin>>c;
		}
	}
	sort(r[0].begin(),r[0].end(),cmp1);
	sort(r[1].begin(),r[1].end(),cmp);
	sort(b[0].begin(),b[0].end(),cmp1);
	sort(b[1].begin(),b[1].end(),cmp);
	sort(n[0].begin(),n[0].end(),cmp1);
	sort(n[1].begin(),n[1].end(),cmp);
	sort(p[0].begin(),p[0].end(),cmp1);
	sort(p[1].begin(),p[1].end(),cmp);
	cout<<"White: K"<<char(k[0][0].second-1+'a')<<k[0][0].first;
	cout<<",Q"<<char(q[0][0].second-1+'a')<<q[0][0].first;
	for (int i=0;i<r[0].size();i++)
		cout<<",R"<<char(r[0][i].second-1+'a')<<r[0][i].first;
	for (int i=0;i<b[0].size();i++)
		cout<<",B"<<char(b[0][i].second-1+'a')<<b[0][i].first;
	for (int i=0;i<n[0].size();i++)
		cout<<",N"<<char(n[0][i].second-1+'a')<<n[0][i].first;
	for (int i=0;i<p[0].size();i++)
		cout<<","<<char(p[0][i].second-1+'a')<<p[0][i].first;
	cout<<endl;
	cout<<"Black: K"<<char(k[1][0].second-1+'a')<<k[1][0].first;
	cout<<",Q"<<char(q[1][0].second-1+'a')<<q[1][0].first;
	for (int i=0;i<r[1].size();i++)
		cout<<",R"<<char(r[1][i].second-1+'a')<<r[1][i].first;
	for (int i=0;i<b[1].size();i++)
		cout<<",B"<<char(b[1][i].second-1+'a')<<b[1][i].first;
	for (int i=0;i<n[1].size();i++)
		cout<<",N"<<char(n[1][i].second-1+'a')<<n[1][i].first;
	for (int i=0;i<p[1].size();i++)
		cout<<","<<char(p[1][i].second-1+'a')<<p[1][i].first;
	cout<<endl;
	return 0;
}


