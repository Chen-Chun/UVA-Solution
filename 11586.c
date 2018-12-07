#include<stdio.h>
int main()
{
    int m,f,t,i,j,flag;
    char ara[1000];
    scanf("%d",&t);
    getchar();
    for(i=0;i<t;i++)
    {
        flag=0;
        gets(ara);

        m=0;
        f=0;
        for(j=0;ara[j]!='\0';j++)
        {
            if(ara[j]=='M')
            {
                 m++;
            }

            else if(ara[j]=='F')
                {
                     f++;
                }


        }
        if(m==1 && f==1)
        {
                printf("NO LOOP\n");
        }
        else if(m==f)
            printf("LOOP\n");
        else
            printf("NO LOOP\n");
    }
}
