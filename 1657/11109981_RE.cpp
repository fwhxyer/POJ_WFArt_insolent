#include<iostream>
#include<string>
using namespace std;

bool b[10][10]={0};
struct Queue{
	int x;
	int y;
	int n;
};
Queue queue[100];

void find(int bx,int by,int x,int y)
{
	int way[8][2]={{-1,-1},{-1,0},{-1,1},{0,1},{1,1},{1,0},{1,-1},{0,-1}};
	memset(b,0,sizeof(b)); for (int i=0;i<=10;i++){b[0][i]=1;b[9][i]=1;b[i][0]=1;b[i][9]=1;}
	int p=0,q=0;
	queue[p].x=bx;
	queue[p].y=by;
	queue[p].n=0;
	b[bx][by]=true;
	while (p<=q)
	{
		int tmpx,tmpy;
		for (int i=0;i<8;i++){
			tmpx=queue[p].x+way[i][0];
			tmpy=queue[p].y+way[i][1];
			if (tmpx==x&&tmpy==y) {cout<<queue[p].n+1<<" "; goto go1;}
			if (!b[tmpx][tmpy]){
				q++;
				queue[q].x=tmpx;
				queue[q].y=tmpy;
				queue[q].n=queue[p].n+1;
				b[tmpx][tmpy]=true;
			}
		}
		p++;
	}
	cout<<"Inf ";
	go1:
	//-----------------------------------------------finishedKing
	memset(b,0,sizeof(b)); for (int i=0;i<=10;i++){b[0][i]=1;b[9][i]=1;b[i][0]=1;b[i][9]=1;}
	p=0,q=0;
	queue[p].x=bx;
	queue[p].y=by;
	queue[p].n=00;
	b[bx][by]=true;
	while (p<=q)
	{
		int tmpx,tmpy;
		for (int i=-8;i<8;i++){
			tmpx=queue[p].x+i; if (tmpx<1||tmpx>8) continue;
			tmpy=queue[p].y+i; if (tmpy<1||tmpy>8) continue;
			if (tmpx==x&&tmpy==y) {cout<<queue[p].n+1<<" "; goto go2;}
			if (!b[tmpx][tmpy]){
				q++;
				queue[q].x=tmpx;
				queue[q].y=tmpy;
				queue[q].n=queue[p].n+1;
				b[tmpx][tmpy]=true;
			}
		}
		for (int i=-8;i<8;i++){
			tmpx=queue[p].x+i; if (tmpx<1||tmpx>8) continue;
			tmpy=queue[p].y-i; if (tmpy<1||tmpy>8) continue;
			if (tmpx==x&&tmpy==y) {cout<<queue[p].n+1<<" "; goto go2;}
			if (!b[tmpx][tmpy]){
				q++;
				queue[q].x=tmpx;
				queue[q].y=tmpy;
				queue[q].n=queue[p].n+1;
				b[tmpx][tmpy]=true;
			}
		}
		for (int i=-8;i<8;i++){
			tmpx=queue[p].x+i; if (tmpx<1||tmpx>8) continue;
			tmpy=queue[p].y; if (tmpy<1||tmpy>8) continue;
			if (tmpx==x&&tmpy==y) {cout<<queue[p].n+1<<" "; goto go2;}
			if (!b[tmpx][tmpy]){
				q++;
				queue[q].x=tmpx;
				queue[q].y=tmpy;
				queue[q].n=queue[p].n+1;
				b[tmpx][tmpy]=true;
			}
		}
		for (int i=-8;i<8;i++){
			tmpx=queue[p].x; if (tmpx<1||tmpx>8) continue;
			tmpy=queue[p].y+i; if (tmpy<1||tmpy>8) continue;
			if (tmpx==x&&tmpy==y) {cout<<queue[p].n+1<<" "; goto go2;}
			if (!b[tmpx][tmpy]){
				q++;
				queue[q].x=tmpx;
				queue[q].y=tmpy;
				queue[q].n=queue[p].n+1;
				b[tmpx][tmpy]=true;
			}
		}
		p++;
	}
	cout<<"Inf ";
	go2:
	//-----------------------------------------------finishedQueen
	memset(b,0,sizeof(b)); for (int i=0;i<=10;i++){b[0][i]=1;b[9][i]=1;b[i][0]=1;b[i][9]=1;}
	p=0,q=0;
	queue[p].x=bx;
	queue[p].y=by;
	queue[p].n=00;
	b[bx][by]=true;
	while (p<=q)
	{
		int tmpx,tmpy;
		for (int i=-8;i<8;i++){
			tmpx=queue[p].x+i; if (tmpx<1||tmpx>8) continue;
			tmpy=queue[p].y; if (tmpy<1||tmpy>8) continue;
			if (tmpx==x&&tmpy==y) {cout<<queue[p].n+1<<" "; goto go3;}
			if (!b[tmpx][tmpy]){
				q++;
				queue[q].x=tmpx;
				queue[q].y=tmpy;
				queue[q].n=queue[p].n+1;
				b[tmpx][tmpy]=true;
			}
		}
		for (int i=-8;i<8;i++){
			tmpx=queue[p].x; if (tmpx<1||tmpx>8) continue;
			tmpy=queue[p].y+i; if (tmpy<1||tmpy>8) continue;
			if (tmpx==x&&tmpy==y) {cout<<queue[p].n+1<<" "; goto go3;}
			if (!b[tmpx][tmpy]){
				q++;
				queue[q].x=tmpx;
				queue[q].y=tmpy;
				queue[q].n=queue[p].n+1;
				b[tmpx][tmpy]=true;
			}
		}
		p++;
	}
	cout<<"Inf ";
	go3:
	//-----------------------------------------------finishedCar
	memset(b,0,sizeof(b)); for (int i=0;i<=10;i++){b[0][i]=1;b[9][i]=1;b[i][0]=1;b[i][9]=1;}
	p=0,q=0;
	queue[p].x=bx;
	queue[p].y=by;
	queue[p].n=00;
	b[bx][by]=true;
	while (p<=q)
	{
		int tmpx,tmpy;
		for (int i=-8;i<8;i++){
			tmpx=queue[p].x+i; if (tmpx<1||tmpx>8) continue;
			tmpy=queue[p].y+i; if (tmpy<1||tmpy>8) continue;
			if (tmpx==x&&tmpy==y) {cout<<queue[p].n+1<<"\n"; goto go4;}
			if (!b[tmpx][tmpy]){
				q++;
				queue[q].x=tmpx;
				queue[q].y=tmpy;
				queue[q].n=queue[p].n+1;
				b[tmpx][tmpy]=true;
			}
		}
		for (int i=-8;i<8;i++){
			tmpx=queue[p].x+i; if (tmpx<1||tmpx>8) continue;
			tmpy=queue[p].y-i; if (tmpy<1||tmpy>8) continue;
			if (tmpx==x&&tmpy==y) {cout<<queue[p].n+1<<"\n"; goto go4;}
			if (!b[tmpx][tmpy]){
				q++;
				queue[q].x=tmpx;
				queue[q].y=tmpy;
				queue[q].n=queue[p].n+1;
				b[tmpx][tmpy]=true;
			}
		}
		p++;
	}
	cout<<"Inf\n";
	go4:1==1;
	//-----------------------------------------------finishedQueen
}

int main()
{
	int t=0,n1,n2;
	char c1,c2;
	cin>>t;
	for (int i=0;i<t;i++){
		cin>>c1>>n1>>c2>>n2;
		if (c1==c2&&n1==n2)
			cout<<"0 0 0 0\n";
		else
			find(c1-'a'+1,n1,c2-'a'+1,n2);
	}
	system("pause");
}