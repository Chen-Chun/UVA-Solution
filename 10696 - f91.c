#include<stdio.h>
int main()
{

    long N,f91;
    while(scanf("%ld",&N)!=EOF){
        if(N==0)
            break;
        if(N<=100){
            f91=91;
            printf("f91(%ld) = %ld\n",N,f91);
        }
        else if(N>=101){
           f91=N-10;
           printf("f91(%ld) = %ld\n",N,f91);
        }
    }
    return 0;
}
