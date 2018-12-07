#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,flag,j,n;
    char team[20],judge[20],judge_new[20];
    scanf("%d",&t);
    getchar();

    for(i=0;i<t;i++)
    {
        gets(team);

        gets(judge);

        if(strcmp(team,judge)==0)
            printf("Case %d: Yes\n",i+1);
        else
        {
            n=0;
            for(j=0;team[j]!='\0';j++)
            {

                if(team[j]!=' ')
                 {
                   judge_new[n]=team[j];
                   n++;

                 }

            }
            if(strcmp(judge_new,judge)==0)
             printf("Case %d: Output Format Error\n",i+1);
             else
                    printf("Case %d: Wrong Answer\n",i+1);


        }
    }
    return 0;
}
