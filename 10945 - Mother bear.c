#include<stdio.h>
#include<string.h>
int main()
{
    int c,i,len,flag,k,j;
    char ara[1000],ara_p[1000],ara_p1[1000];
    char ara1[4]={'D','O','N','E'};
    while(gets(ara)!=EOF)
    {
        flag=0;
        c=0;
        len=strlen(ara);
        if(len==4)
        {
            for(i=0;i<4;i++)
            {
                if(ara[i]==ara1[i])
                    c++;
            }

        }
        if(c==4 && len==4)
                break;
        else
        {
            k=0;
        for(i=0;i<len;i++)
        {
            if((ara[i]>='A' && ara[i]<='Z') || (ara[i]>='a' && ara[i]<='z'))
               {
                 if(ara[i]>='A' && ara[i]<='Z')
                 {
                     ara[i]=ara[i]+32;
                 }
                ara_p[k]=ara[i];
                 k++;
               }

        }
        for(i=0,j=k-1;i<k;i++,j--)
        {
            ara_p1[i]=ara_p[j];
        }
        for(i=0;i<k;i++)
        {
            if(ara_p1[i]!=ara_p[i])

            {
                flag=1;
                break;
            }

        }
        if(flag==1)
            printf("Uh oh..\n");
        else
            printf("You won't be eaten!\n");

        }

    }
    return 0;
}
