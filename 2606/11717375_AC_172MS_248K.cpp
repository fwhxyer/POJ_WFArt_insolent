#include <iostream>
#include <map>
using namespace std;

pair <int ,int > mp[205];

double getkk(int a,int b){
	if ((mp[b].first-mp[a].first)==0) return 2100000000.0;
	return double(mp[b].second-mp[a].second)/double(mp[b].first-mp[a].first);
}
int main()
{
	int n,ansf=0;
	cin>>n;
	for (int i=0;i<n;i++) {
		int a,b;
		cin>>a>>b;
		mp[i]=make_pair(a,b);
	}
	for (int i=0;i<n;i++)
	for (int j=i+1;j<n;j++){
		double kk=getkk(i,j);
		int ans=1;
		for (int k=0;k<n;k++)
			if (i!=k&&kk==getkk(i,k))
				ans++;
		if (ans>ansf) ansf=ans;
	}
	cout<<ansf<<endl;
	return 0;
}
