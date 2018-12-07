#include<stdio.h>
int main()
{
    int T,x;
    long long a,b,c;

    scanf("%d",&T);
    for(x=1;x<=T;x++){
        scanf("%lld %lld %lld",&a,&b,&c);
                if(a>=b+c || b>=c+a || c>=a+b)
                    printf("Case %d: Invalid\n",x);
                else{
                    if(a>0 && b>0 && c>0){
                            if(a==b && b==c)
                        printf("Case %d: Equilateral\n",x);
                    else if(a==b || b==c || c==a)
                        printf("Case %d: Isosceles\n",x);
                    else if(a!=b && b!=c && c!=a)
                        printf("Case %d: Scalene\n",x);
                }
                else
                    printf("Case %d: Invalid\n",x);
                }
    }
    return 0;
}
