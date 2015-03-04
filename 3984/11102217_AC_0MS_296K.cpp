#include<iostream>
using namespace std;

int map[6][6];
int f[6][6];
int w[6][6];

void print(int x,int y)
{
	if (x==1&&y==1){cout<<"(0, 0)\n";return;}
	if (w[x][y]==1) print(x-1,y);
	else if(w[x][y]==0) print(x,y-1);
	else cout<<"error!";
	cout<<"("<<x-1<<", "<<y-1<<")\n";
}

int main()
{
	for (int i=0;i<6;i++)
		for (int j=0;j<6;j++)
			f[i][j]=100;
	f[0][1]=0;
	for (int i=1;i<6;i++)
		for (int j=1;j<6;j++)
		{
			cin>>map[i][j];
			if (map[i][j]){
				f[i][j]=1000;
				w[i][j]=-1;
			}
		}
	for (int i=1;i<6;i++)
		for (int j=1;j<6;j++)
		if (map[i][j]==0)
			if (f[i][j-1]<f[i-1][j]){
				f[i][j]=f[i][j-1]+1;
				w[i][j]=0;
			}else{
				f[i][j]=f[i-1][j]+1;
				w[i][j]=1;
			}
	print(5,5);
	system("pause");
}