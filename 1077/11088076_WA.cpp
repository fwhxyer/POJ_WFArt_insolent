#include<iostream>
#include<string>
using namespace std;

string queue[20000];
int path[370000]={0};
char way[370000]={0};
string s,tmp;
int p=0,q=0;
bool h[370000]={0};

void print(int q)
{
	if (q==0) return;
	print(path[q]);
	cout<<way[q];
}

int cantor(string a)
{
	int ans=0;
	for (int i=0;i<8;i++){
		int tmp=0;
		for (int j=i+1;j<9;j++)
			if (a[i]>a[j]) tmp++;
		ans=(ans+tmp)*(8-i);
	}
	return ans;
}

int main()
{
	//cout<<cantor("12345678x")<<endl;
	//cout<<cantor("1234567x8")<<endl;
	//cout<<cantor("12345687x")<<endl;
	//cout<<cantor("1234568x7")<<endl;
	char c;
	void swap(int,int,char);
	for (int i=0;i<9;i++){
		cin>>c;
		s+=c;
	}
	queue[0]=s;
	h[cantor(s)]=true;
	//cout<<cantor(s)<<"dasfasfasdf\n";
	if (s=="12345678x") {return 0;}
	while (p<=q){
		int i;
		for (i=0;i<9;i++)
			if (queue[p%20000][i]=='x') break;
		if (i/3>0) swap(i-3,i,'u');
		if (i/3<2) swap(i+3,i,'d');
		if (i%3>0) swap(i-1,i,'l');
		if (i%3<2) swap(i+1,i,'r');
		p++;
	}
	cout<<"unsolvable"<<endl;
	system("pause");
}

void swap(int a,int b,char c){
	tmp=queue[p%20000];
	tmp[b]=queue[p%20000][a];
	tmp[a]=queue[p%20000][b];
	if (tmp=="12345678x") {print(p);cout<<c<<endl;system("pause");exit(0);}
	int tmpn=cantor(tmp);
	//cout<<tmpn<<"dasfasfasdf\n";
	if (h[tmpn]==0){
		q++;
		h[tmpn]=1;
		path[q]=p;
		way[q]=c;
		queue[q%20000]=tmp;
		//cout<<q<<" "<<queue[q]<<"  "<<path[q]<<endl;
		//system("pause");
	}
}
