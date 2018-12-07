#include<stdio.h>
#include<string.h>
int main()
{
    int t,i,len;
    char word[10];
    scanf("%d",&t);
    getchar();
    for(i=0;i<t;i++)
    {
        gets(word);

        len=strlen(word);
    if(len==5)
        {
            printf("3\n");
        }
        else if(len==3)
        {
            if((word[1]=='n' && word[2]=='e') ||(word[0]=='o' && word[2]=='e') || (word[0]=='o' && word[1]=='n'))
            {
                printf("1\n");
            }
            else
                printf("2\n");
        }
    }
    return 0;
}
