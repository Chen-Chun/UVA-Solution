#include<stdio.h>
int main()
{
    int a,b,c,max,max2,max3;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF){
            if(a==0 &&b==0 && c==0)
            break;
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
            if(a!=max && a!=max2)
                max3=a;
        else if(b!=max && b!=max2)
                max3=b;
        else if(c!=max && c!=max2)
                max3=c;
                if((max*max)==(max2*max2)+(max3*max3)){
                    printf("right\n");
                }
                else
                    printf("wrong\n");

    }
    return 0;

}
