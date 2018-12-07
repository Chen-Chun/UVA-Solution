#include<stdio.h>
int main()
{
    long n,g,sum,rem,res;
    while(scanf("%ld",&n)!=EOF){
        if(n==0)
            break;

            g=n;
        while(g/10>0){
                sum=0;

            while(n>0){
                res=n/10;
                rem=n%10;
                n=res;
                sum=sum+rem;
            }
            g=sum;
            n=sum;
        }
        printf("%ld\n",g);
    }
    return 0;
}
