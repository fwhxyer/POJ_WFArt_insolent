#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int mp[10][10];
int c[10];
int get(int x,int y){
	bool flag=0;
	memset(c,0,sizeof(c));
	for (int i=0;i<9;i++)
		if (i!=x) {
			c[mp[i][y]]++;
			if (!mp[i][y]) {
				flag=1;
				break;
			}
		}
	if (!flag)
	for (int i=1;i<=9;i++)
		if (!c[i]) {mp[x][y]=i;return 1;}
	flag=0;
	memset(c,0,sizeof(c));
	for (int i=0;i<9;i++)
		if (i!=y) {
			c[mp[x][i]]++;
			if (!mp[x][i]) {
				flag=1;
				break;
			}
		}
	if (!flag)
	for (int i=1;i<=9;i++)
		if (!c[i]) {mp[x][y]=i;return 1;}
	flag=0;
	memset(c,0,sizeof(c));
	for (int i=x/3*3;i<x/3*3+3;i++)
		for (int j=y/3*3;j<y/3*3+3;j++)
		{
			if (!(i==x&&j==y)) {
				c[mp[i][j]]++;
				if (!mp[i][j]) {
					flag=1;
					break;
				}
			}
		}
	if (!flag)
	for (int i=1;i<=9;i++)
		if (!c[i]) {mp[x][y]=i;return 1;}
	return 0;
}
int main()
{
	int T,TT=1;
	char c;
	scanf("%d",&T);
	while (T--){
		memset(mp,0,sizeof(mp));
		int tmp=0;
		for (int i=0;i<9;i++)
			for (int j=0;j<9;j++){
				while (scanf("%c",&c)&&((c=='\n')||(c==' ')));
				if (c=='0') tmp++;
				mp[i][j]=c-'0';
			}
		while (tmp)
		for (int i=0;i<9;i++)
			for (int j=0;j<9;j++){
				if (mp[i][j]==0)
					tmp-=get(i,j);
			}
		printf("Scenario #%d:\n",TT++);
		for (int i=0;i<9;i++) {
			for (int j=0;j<9;j++){
				printf("%d",mp[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}