#include<stdio.h>
int main()
{
    int t,i;
    long a,b,c,d;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%ld %ld %ld %ld",&a,&b,&c,&d);
        if(a==b && b==c && c==d)
            printf("square\n");
        else if((a==b && c==d)|| (a==c && b==d) || (a==d && b==c))
            printf("rectangle\n");
        else if(((a+b+c)<=d) || ((a+b+d)<=c) || ((b+c+d)<=a) || ((a+c+d)<=b))
                printf("banana\n");
                else
                    printf("quadrangle\n");
    }
    return 0;
}
