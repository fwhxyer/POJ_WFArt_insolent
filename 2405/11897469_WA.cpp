#include <iostream>
#include <stdio.h>
using namespace std;

#define pi 3.1415926536

int main() {
	int D,V;
	double p,q;
	while (scanf("%d%d",&D,&V)!=EOF&&!(D==0&&V==0)){
		p=0;
		q=D;
		while (abs(p-q)>0.0001) {
			double d=(p+q)/2;
			double R=D/2.0,r=d/2;
			if (pi*R*R*D-V-pi*r*r*d-pi/3.0*(D-d)*(R*R+R*r+r*r)>0){
				p=d;
			}else{
				q=d;
			}
		}
		printf("%0.3lf\n",p);
	}
	return 0;
}