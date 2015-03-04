#include<iostream>
#include <string.h>
#include <queue>
using namespace std;

queue <int> q;

void prnt()
{
	if (!q.empty()){
		int tmp=q.front();
		q.pop();
		prnt();
		cout<<tmp<<" ";
	}
}

int main() 
{
	int T,n;
	cin>>T;
	while (T--){
		cin>>n;
		int t=n;
		while (t){
			q.push(t);
			for (int i=0;i<t;i++)
			{
				int tmp=q.front();
				q.pop();
				q.push(tmp);
			}
			t--;
		}
		prnt();
		cout<<endl;
	}
	return 0;
}
