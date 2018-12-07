#include<stdio.h>
int main()
{
    int H1,M1,H2,M2,T,i;
    char ch;
    scanf("%d",&T);
    for(i=0;i<T;i++)
    { getchar();
        scanf("%d",&H1);
        scanf("%c",&ch);
        scanf("%d",&M1);
    if(M1!=0)
    {
        M2=60-M1;
        if(H1!=12)
        H2=12-(H1+1);
        else
            H2=H1-1;
    }
    else if(M1==0 && H1!=0 && H1!=12)
    {
        H2=12-H1;
        M2=M1;

    }
    else
    {
        H2=H1;
        M2=M1;
    }
    if(H2==0)
        H2=12;
    if(H2<10)
    printf("0%d:",H2);
    else
        printf("%d:",H2);
    if(M2<10)
        printf("0%d\n",M2);
    else
        printf("%d\n",M2);


    }
    return 0;
}
