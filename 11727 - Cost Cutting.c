#include<stdio.h>
int main()
{
    int T,i,a,b,c,max,max2;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d %d %d",&a,&b,&c);
        if(a>b)
            max=a;
        else
            max=b;
        if(max<c)
            max=c;

        if(max==a)
            if(b>c)
            max2=b;
        else
            max2=c;
        if(max==b)
            if(a>c)
            max2=a;
        else
            max2=c;
        if(max==c)
            if(a>b)
            max2=a;
        else
            max2=b;

                printf("Case %d: %d\n",i,max2);
    }
    return 0;
}
