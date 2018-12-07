#include<stdio.h>
long N[100000];
int main()
{
    long X,min,temp,res;
    int i,j=0,l,k,d;
    while(scanf("%d",&X)!=EOF){

        N[j]=X;
        for(i=0;i<j;i++){
                min=N[i];

         for(k=i;k<=j;k++){
            if(N[k]<=N[i]){
                min=N[k];
                l=k;
            }
         }
         temp=N[i];
         N[i]=min;
         N[l]=temp;

        }


        if(j%2==0){
                d=(j/2);
            printf("%ld\n",N[d]);
        }
        else if(j%2!=0){
            d=(j/2);
            res=(N[d]+N[d+1])/2;
            printf("%ld\n",res);

        }
         j++;

    }
    return 0;
}
