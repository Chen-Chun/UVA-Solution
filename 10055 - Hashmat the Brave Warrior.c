#include<stdio.h>
int main()
{
    long a,b,sub,temp;
    while(scanf("%ld %ld",&a,&b)!=EOF){
        if(b<a)
            {
        temp=a;
        a=b;
        b=temp;
            }
        sub=b-a;
        printf("%ld\n",sub);
    }
    return 0;
}
