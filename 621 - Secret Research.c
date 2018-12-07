#include<stdio.h>
#include<string.h>
char S[10000];
int main()
{
    int t,i,len,j;
    char Sn[3],Sm[4],Sq[4];
    scanf("%d",&t);
    getchar();
    for(i=0;i<t;i++)
    {
        gets(S);
        len=strlen(S);
        Sn[0]=S[len-2];
        Sn[1]=S[len-1];
        Sn[2]='\0';
        Sm[0]=S[0];
        Sm[1]=S[len-1];
        Sm[3]='\0';
        Sq[0]=S[0];
        Sq[1]=S[1];
        Sq[2]=S[2];
        Sq[3]='\0';

        if(strcmp(S,"1")==0 || strcmp(S,"4")==0 || strcmp(S,"78")==0)
            printf("+\n");

        else if(strcmp(Sn,"35")==0)
                printf("-\n");
        else if(strcmp(Sm,"94")==0)
                printf("*\n");
        else if(strcmp(Sq,"190")==0)
                printf("?\n");
    }
    return 0;
}
