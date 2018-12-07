#include<stdio.h>
char S[1000000];
int main()
{
    int i,c,count,T;
    while(gets(S)!=EOF) {
    if(S[0]=='*')
        break;
    count=0;
    c=0;
    for(i=0;S[i]!='\0';i++){
        if(S[i]==' '){
            c++;
            if(S[i+1]==S[0] || S[i+1]==S[0]+32 || S[i+1]==S[0]-32)
                count++;
            else
            break;
        }

    }
    if(c==count)
            printf("Y\n");
            else
                printf("N\n");
    }
    return 0;
}
