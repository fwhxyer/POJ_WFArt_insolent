#include <iostream>
#include <string>

using namespace std;

char mp[10][10]={0};
int main()
{
	string s;
	char c;
	int tmp,x,y,t;
	cin>>s;
	cin>>s;
	while ((tmp=(s.find(',')))!=-1)
	{
		if (tmp==3)
			t=1;
		else
			t=0;
		switch(s[t]){
		case'a':
			y=1;
			break;
		case'b':
			y=2;
			break;
		case'c':
			y=3;
			break;
		case'd':
			y=4;
			break;
		case'e':
			y=5;
			break;
		case'f':
			y=6;
			break;
		case'g':
			y=7;
			break;
		case'h':
			y=8;
		}
		x=int(s[t+1]-'0');
		if (tmp==3)
		switch(s[0]){
		case'K':
			mp[x][y]='K';
			break;
		case'Q':
			mp[x][y]='Q';
			break;
		case'R':
			mp[x][y]='R';
			break;
		case'B':
			mp[x][y]='B';
			break;
		case'N':
			mp[x][y]='N';
			break;
		}
		else
			mp[x][y]='P';
		s=s.substr(tmp+1,s.length()-tmp);
	}
		switch(s[0]){
		case'a':
			y=1;
			break;
		case'b':
			y=2;
			break;
		case'c':
			y=3;
			break;
		case'd':
			y=4;
			break;
		case'e':
			y=5;
			break;
		case'f':
			y=6;
			break;
		case'g':
			y=7;
			break;
		case'h':
			y=8;
		}
		x=int(s[1]-'0');
		mp[x][y]='P';
	cin>>s;
	cin>>s;
	while ((tmp=(s.find(',')))!=-1)
	{
		if (tmp==3)
			t=1;
		else
			t=0;
		switch(s[t]){
		case'a':
			y=1;
			break;
		case'b':
			y=2;
			break;
		case'c':
			y=3;
			break;
		case'd':
			y=4;
			break;
		case'e':
			y=5;
			break;
		case'f':
			y=6;
			break;
		case'g':
			y=7;
			break;
		case'h':
			y=8;
		}
		x=int(s[t+1]-'0');
		if (tmp==3)
		switch(s[0]){
		case'K':
			mp[x][y]='k';
			break;
		case'Q':
			mp[x][y]='q';
			break;
		case'R':
			mp[x][y]='r';
			break;
		case'B':
			mp[x][y]='b';
			break;
		case'N':
			mp[x][y]='n';
			break;
		}
		else
			mp[x][y]='p';
		s=s.substr(tmp+1,s.length()-tmp);
	}
		switch(s[0]){
		case'a':
			y=1;
			break;
		case'b':
			y=2;
			break;
		case'c':
			y=3;
			break;
		case'd':
			y=4;
			break;
		case'e':
			y=5;
			break;
		case'f':
			y=6;
			break;
		case'g':
			y=7;
			break;
		case'h':
			y=8;
		}
		x=int(s[1]-'0');
		mp[x][y]='p';
	for (int i=8;i>0;i--){
		cout<<"+---+---+---+---+---+---+---+---+\n";
		for (int j=1;j<9;j++)
		{
			cout<<"|";
			if ((i+j)%2) cout<<'.'<<(mp[i][j]?mp[i][j]:'.')<<'.';
			else cout<<':'<<(mp[i][j]?mp[i][j]:':')<<':';
		}
		cout<<"|\n";
	}
	cout<<"+---+---+---+---+---+---+---+---+\n";
	return 0;
}


