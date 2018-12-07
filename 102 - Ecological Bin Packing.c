#include<stdio.h>
int main()
{
    long bin1[3],bin2[3],bin3[3],s,bot1,bot2,bot3,B[3],C[3],G[3],min,n1=0,n2=0,n3=0,i=0,sum;
    char ch1[3];

    while(scanf("%ld %ld %ld",&bot1,&bot2,&bot3)!=EOF)
    {
        bin1[n1]=bot1;
        n1++;
        bin2[n2]=bot2;
        n2++;
        bin3[n3]=bot3;
        n3++;
        if(n1>2)
        {
            n1=0;
            n2=0;
            n3=0;
        }
        i++;
        if(i==9)
        {
            B[0]=bin1[0];
            B[1]=bin2[0];
            B[2]=bin3[0];
            G[0]=bin1[1];
            G[1]=bin1[1];
            G[2]=bin2[1];
            C[0]=bin1[2];
            C[1]=bin1[2];
            C[2]=bin2[2];

            sum=B[1]+B[2]+C[0]+C[2]+G[0]+G[1];
            min=sum;
            ch1[0]='B';
            ch1[1]='C';
            ch1[2]='G';
            sum=B[1]+B[2]+G[0]+G[2]+C[0]+C[1];

            if(sum<min)
            {
                min=sum;
                ch1[0]='B';
                ch1[1]='G';
                ch1[2]='C';
            }
            sum=G[1]+G[2]+C[0]+C[2]+B[0]+B[1];
            if(sum<min)
            {
                min=sum;
                ch1[0]='G';
                ch1[1]='C';
                ch1[2]='B';
            }
            sum=G[1]+G[2]+B[0]+B[2]+C[0]+C[1];

            if(sum<min)
            {
                min=sum;
                ch1[0]='G';
                ch1[1]='B';
                ch1[2]='C';
            }
            sum=C[1]+C[2]+B[0]+B[2]+G[0]+G[1];
            if(sum<min)
            {
                min=sum;
                ch1[0]='C';
                ch1[1]='B';
                ch1[2]='G';
            }
            sum=C[1]+C[2]+G[0]+G[2]+B[0]+B[1];

            if(sum<min)
            {
                min=sum;
                ch1[0]='C';
                ch1[1]='G';
                ch1[2]='B';
            }
            for(s=0;s<3;s++)
            {
                printf("%c",&ch1[s]);
            }
            printf(" %ld\n",min);
            i=0;


        }
    }

    return 0;
}
