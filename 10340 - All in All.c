#include<stdio.h>
 char s[100000],t[100000];
int main()
{
    int c,flag;
    long long i,j;


    while(scanf("%s %s",&s,&t)!=EOF)
    {

        c=0;
        for(i=0;s[i]!='\0';i++)
        {
            flag=0;
            for(j=c;t[j]!='\0';j++)
            {
                if(s[i]==t[j])
                {
                    c=j+1;
                    flag=1;
                    break;

                }
            }
            if(flag==0)

               {
                   flag=2;
                   break;
               }
        }
        if(flag==2)
            printf("No\n");
        else
            printf("Yes\n");
    }

    return 0;
}
