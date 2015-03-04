#include<iostream>
#include <iomanip>
using namespace std;
 
int tmp[10]={1,1,2,6,24,120,720,5040,40320,362880};

long double get(int n){
	long double ans=0;
	for (int i=0;i<=n;i++)
		ans+=1.0/tmp[i];
	return ans;
}

int main()
{
	cout<<"n e\n- -----------\n";
	for (int i=0;i<10;i++){
		if (i==3) {
			cout << fixed << setprecision(9);
		}
		cout<<i<<" "<<get(i)<<endl;
	}
	system("pause");
}