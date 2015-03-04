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
    long long a,b,maxx,minn;
    while (scanf("%d%d",&a,&b)!=EOF) {
        long long ans;
        for (ans=0;ans<1000000;ans++)
        {
            long long tmp=pow((double)ans, b);
            if (tmp>a)
            {
                maxx=tmp;
                minn=pow((double)ans-1,b);
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
