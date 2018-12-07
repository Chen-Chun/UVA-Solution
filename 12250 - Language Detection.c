#include<stdio.h>
#include<string.h>
int main()
{
    char S[2000][14];
    int t=1,i=0;
    while(gets(S[i])!=EOF){

        if(strcmp(S[i],"#")==0)
            break;
        else if(strcmp(S[i],"HELLO")==0)
            printf("Case %d: ENGLISH\n",t);
        else if(strcmp(S[i],"HOLA")==0)
            printf("Case %d: SPANISH\n",t);
        else if(strcmp(S[i],"HALLO")==0)
            printf("Case %d: GERMAN\n",t);
        else if(strcmp(S[i],"BONJOUR")==0)
            printf("Case %d: FRENCH\n",t);
        else if(strcmp(S[i],"CIAO")==0)
            printf("Case %d: ITALIAN\n",t);
        else if(strcmp(S[i],"ZDRAVSTVUJTE")==0)
            printf("Case %d: RUSSIAN\n",t);
        else
            printf("Case %d: UNKNOWN\n",t);
            i++;
            t++;
    }

    return 0;
}
