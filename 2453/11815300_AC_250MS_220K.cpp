#include <iostream>

using namespace std;

int pow2[31]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912,1073741824};

int get(int n){
	int ans=0;
	for (int i=0;i<=30;i++)
		if (n&pow2[i]) ans++;
	//cout<<n<<" "<<ans<<endl;
	return ans;
}
int main()
{
	int n;
	while (cin>>n&&n){
		int ans1=get(n);
		while (get(++n)!=ans1);
		cout<<n<<endl;
	}
	return 0;
}