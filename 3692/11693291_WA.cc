#include <iostream>
#include <vector>

using namespace std;

vector<int> e1[202],e2[202];

int max(int a,int b){ return a>b?a:b;}

int main()
{
	int T,n,TT=1,g,b,m,aa,bb;
	while (cin>>g>>b>>m)
	{
		if (g==0&&b==0&&m==0) break;
		for (int i=0;i<max(g,b);i++){
			e1[i].clear();
			e1[i].push_back(0);
			e2[i].clear();
			e2[i].push_back(0);
		}
		for (int i=0;i<m;i++){
			cin>>aa>>bb;
			e1[aa].push_back(bb);
			e1[aa][0]++;
			e2[bb].push_back(aa);
			e2[bb][0]++;
		}
		int maxans=0;
		for (int i=0;i<max(g,b);i++){
			if (e1[i][0]>maxans) maxans=e1[i][0];
			if (e2[i][0]>maxans) maxans=e2[i][0];
		}
		cout<<"Case "<<TT++<<": "<<maxans+1<<endl;
	}
	return 0;
}