#include<stdio.h>
int main()
{
    long bin1[3],bin2[3],bin3[3],bot1,bot2,bot3,bot4,bot5,bot6,bot7,bot8,bot9,Bi[3],Ci[3],Gi[3],min,sum;
    int s;
    char ch1[3];
     while(scanf("%ld %ld %ld %ld %ld %ld %ld %ld %ld",&bot1,&bot2,&bot3,&bot4,&bot5,&bot6,&bot7,&bot8,&bot9)!=EOF)
    {
        bin1[0]=bot1;
        bin1[1]=bot2;
        bin1[2]=bot3;
        bin2[0]=bot4;
        bin2[1]=bot5;
        bin2[2]=bot6;
        bin3[0]=bot7;
        bin3[1]=bot8;
        bin3[2]=bot9;
        Bi[0]=bin1[0];
            Bi[1]=bin2[0];
            Bi[2]=bin3[0];
            Gi[0]=bin1[1];
            Gi[1]=bin1[1];
            Gi[2]=bin2[1];
            Ci[0]=bin1[2];
            Ci[1]=bin1[2];
            Ci[2]=bin2[2];
            sum=Bi[1]+Bi[2]+Ci[0]+Ci[2]+Gi[0]+Gi[1];
            min=sum;
            ch1[0]='B';
            ch1[1]='C';
            ch1[2]='G';
             sum=Bi[1]+Bi[2]+Gi[0]+Gi[2]+Ci[0]+Ci[1];
             if(sum<min)
            {
                min=sum;
                ch1[0]='B';
                ch1[1]='G';
                ch1[2]='C';
            }
            sum=Gi[1]+Gi[2]+Ci[0]+Ci[2]+Bi[0]+Bi[1];
            if(sum<min)
            {
                min=sum;
                ch1[0]='G';
                ch1[1]='C';
                ch1[2]='B';
            }
            sum=Gi[1]+Gi[2]+Bi[0]+Bi[2]+Ci[0]+Ci[1];
            if(sum<min)
            {
                min=sum;
                ch1[0]='G';
                ch1[1]='B';
                ch1[2]='C';
            }
            sum=Ci[1]+Ci[2]+Bi[0]+Bi[2]+Gi[0]+Gi[1];
            if(sum<min)
            {
                min=sum;
                ch1[0]='C';
                ch1[1]='B';
                ch1[2]='G';
            }
            sum=Ci[1]+Ci[2]+Gi[0]+Gi[2]+Bi[0]+Bi[1];
            if(sum<min)
            {
                min=sum;
                ch1[0]='C';
                ch1[1]='G';
                ch1[2]='B';
            }
            for(s=0;s<3;s++)
            {
                printf("%c",ch1[s]);
            }
            printf(" %ld\n",min);





    }
    return 0;
}
