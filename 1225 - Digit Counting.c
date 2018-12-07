#include<stdio.h>

int main()
{
   int t,i,N,k,j,res,rem,l;
   int ara[10];
   scanf("%d",&t);

   for(i=1;i<=t;i++){
    scanf("%d",&N);
    for(j=0;j<10;j++){
        ara[j]=0;
    }
    for(j=1;j<=N;j++){
        k=j;
        while(k>0){
            res=k/10;
            rem=k%10;
            k=res;

        if(rem==0)
            ara[0]++;
        else if(rem==1)
            ara[1]++;
         else if(rem==2)
                ara[2]++;
         else if(rem==3)
            ara[3]++;
         else if(rem==4)
            ara[4]++;
         else if(rem==5)
            ara[5]++;
         else if(rem==6)
                ara[6]++;
         else if(rem==7)
            ara[7]++;
         else if(rem==8)
            ara[8]++;
            else if(rem==9)
                ara[9]++;

    }
    }
    for(l=0;l<10;l++){
        printf("%d",ara[l]);
        if(l!=9)
            printf(" ");
    }
    printf("\n");

   }

    return 0;
}
