#include<iostream>
#include<string>
using namespace std;

string backT[100];
string forwardT[100];
string current;

int main(){
	string command;
	int b=0,f=0;
	current="http://www.acm.org/";
	cin>>command;
	while (command!="QUIT"){
		if (command=="FORWARD"){
			if (f>0){
				backT[b++]=current;
				current=forwardT[--f];
				cout<<current<<endl;
			}else
				cout<<"Ignored\n";
		}else if (command=="BACK"){
			if (b>0){
				forwardT[f++]=current;
				current=backT[--b];
				cout<<current<<endl;
			}else
				cout<<"Ignored\n";
		}else if (command=="VISIT"){
			backT[b++]=current;
			f=0;
			cin>>current;
			cout<<current<<endl;
		}
		cin>>command;
	}
}