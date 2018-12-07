#include<stdio.h>
#include<string.h>
int main()
{

    long int t=1,i=0;
    char name[10000][10];
    while(gets(name[i])!=EOF)
    {
        if(strcmp(name[i],"*")==0)
            break;
        else if(strcmp(name[i],"Hajj")==0)
        {
            printf("Case %d: Hajj-e-Akbar\n",t);
        }
        else
            printf("Case %d: Hajj-e-Asghar\n",t);
        t++;
        i++;
    }
    return 0;
}
