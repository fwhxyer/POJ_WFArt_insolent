//
//  main.cpp
//  3100
//
//  Created by 范 威 on 13-5-28.
//  Copyright (c) 2013年 范 威. All rights reserved.
//

#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int b;
    long long a,maxx,minn;
    while (scanf("%lld%d",&a,&b)!=EOF) {
        int ans;
        for (ans=0;ans<=1000001;ans++)
        {
            long long tmp=floor(pow((double)ans, b)+0.5);
            if (tmp>a)
            {
                maxx=tmp;
                minn=floor(pow((double)ans-1, b)+0.5);
                break;
            }
        }
        if (maxx-a<=a-minn)
            cout<<ans<<endl;
        else
            cout<<ans-1<<endl;
    }
    return 0;
}
