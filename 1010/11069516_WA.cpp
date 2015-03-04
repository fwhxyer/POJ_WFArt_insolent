#include<iostream>
#include<sstream>
#include<string>
using namespace std;

int a[1000];
int hash1[1000]={0};
int n,st=0,sn=0,mtype=0,ms=0,mv=0;
string anst,ans;

void getans(int s,int type,string ans,int maxValue)
{
	if (type>mtype) {anst=ans;mtype=type;ms=s;mv=maxValue;}
	else if (type==mtype) 
	{
		if (s<ms) {anst=ans;anst=ans;mv=maxValue;}
		else if (s==ms) {
			if (maxValue>mv){anst=ans;mv=maxValue;}
			else if (maxValue==mv) anst=" tie";
		}
	}
}

void find(int n,int s,int type,string ans,int m,int maxValue)
{
	if (n==0) {getans(s,type,ans,maxValue);sn++;
	//cout<<"test:"<<ans<<"mtype"<<type<<endl;return;
	}
	if (n<0 || s>=4) return;
	for (int i=m;i<st;i++)
	{
		if (n>=a[i]){
			string tmps;
			stringstream ss;
			ss<<a[i];
			ss>>tmps;
			int typet=type;
			if (i!=m) typet++;
			//cout<<typet<<" i="<<i<<" m="<<m<<endl<<ans+" "+tmps<<endl;
			find(n-a[i],s+1,typet,ans+" "+tmps,i,a[i]);
		}
		if (ans=="") return;
	}
}

int main()
{
	while (cin>>n){
		for (int i=0;i<25;i++) hash1[i]=0;
		st=0;
		hash1[n]++;
		a[st++]=n;
		cin>>n;
		while (n!=0){
			if (hash1[n]<4){
			hash1[n]++;
			a[st++]=n;
			}
			cin>>n;
		}
		cin>>n;
		while (n!=0){
			mtype=0;sn=0;ms=5;mv=0;
			for (int i=0;i<st;i++)
			find(n,0,1,"",i,0);
			if (sn!=0)
				cout<<n<<" ("<<mtype<<"):"<<anst<<endl;
			else cout<<n<<" ---- none"<<endl;
			cin>>n;
		}
	}
}