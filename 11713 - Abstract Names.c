#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,flag,j;
    char name[20],test[20];
    scanf("%d",&n);
    getchar();
    for(i=0;i<n;i++)
        {
            flag=0;
            gets(name);
            gets(test);
            if(strlen(name)==strlen(test))
            {
                for(j=0;name[j]!='\0';j++)
                {
                    if(name[j]!=test[j])
                    {
                        if(name[j]=='a' || name[j]=='e' || name[j]=='i' || name[j]=='o' || name[j]=='u')
                            continue;
                        else
                        {
                            flag=1;
                            break;
                        }
                    }
                }
                if(flag==0)
                    printf("Yes\n");
                else
                    printf("No\n");
            }
            else
                printf("No\n");
        }

    return 0;
}
