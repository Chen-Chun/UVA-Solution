#include<stdio.h>
int main()
{
    int i,N,count,m,a,r,g,t,j,in,min,ap,rp;
    char ara[1000];
    scanf("%d",&N);
    getchar();
    for(i=0;i<N;i++)
    {
        m=0;
        a=0;
        r=0;
        g=0;
        in=0;
        t=0;

        gets(ara);
        for(j=0;ara[j]!='\0';j++)
        {
            if(ara[j]=='M')
                m++;
            else if(ara[j]=='A')
                a++;
            else if(ara[j]=='R')
                r++;
            else if(ara[j]=='G')
                g++;
            else if(ara[j]=='I')
                in++;
             else if(ara[j]=='T')
                t++;

        }
        ap=a/3;

        rp=r/2;
        min=m;

        if(ap<min)
            min=ap;
        if(rp<min)

            min=rp;
        if(g<min)
            min=g;
        if(in<min)
            min=in;
        if(t<min)
            min=t;
            printf("%d\n",min);

    }
    return 0;
}
