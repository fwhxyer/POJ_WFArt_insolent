#include<iostream>
#include<algorithm>
using namespace std;

struct Point{
	int x;
	int y;
}point[5010];
bool b[5010];
int ans[5010];
int tmpans;

bool cmp(Point a,Point b){
	if (a.y==b.y)
	{
		return a.x<b.x;
	}
	else
	{
		return a.y<b.y;
	}
}
bool dmp(Point a,Point b){return (a.x<b.x&&a.y==b.y);}

int main()
{
	int t;
	cin>>t;
	for (int i=0;i<t;i++)
	{
		int n;
		cin>>n;
		for (int i=0;i<n;i++)
			cin>>point[i].x>>point[i].y;
		sort(point,point+n,cmp);
		//sort(point,point+n,dmp);
		tmpans=0;
		fill(b,b+n,1);
		//for (int i=0;i<n;i++) cout<<point[i].x<<"\t"<<point[i].y<<endl;
		for (int i=0;i<n;i++){
			int maxt=-1,maxp=-1;
			for (int j=0;j<i;j++){
				if (point[i].x>=point[j].x&&point[j].x>=maxt&&b[j]){
					maxt=point[j].x;
					maxp=j;
					ans[i]=ans[j];
				}
			}
			if (maxp==-1) ans[i]=++tmpans;
			else b[maxp]=false;
		}
		cout<<tmpans<<endl;
	}
	system("pause");
}