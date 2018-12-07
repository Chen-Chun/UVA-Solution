#include<stdio.h>
char S[100000],T[1000];
int main()
{
    int k,i,j,n,q,flag,len,count,l;
    long m,c;
    scanf("%d",&k);
    getchar();
    for(i=1;i<=k;i++){
          gets(S);
        scanf("%d",&q);
        getchar();
        for(j=1;j<=q;j++){
                gets(T);
                len=0;
                flag=0;
        for(l=0;T[l]!='\0';l++){
            len++;
        }
        for(m=0;S[m]!='\0';m++){
                count=0;
            if(S[m]==T[0]){
                    c=m+1;
                for(n=1;n<len;n++){

                    if(S[c]==T[n]){
                        count++;
                        c++;
                    }
                }
                if(len==count+1){
                        flag=1;
                    printf("y\n");
                    break;
                }
            }
        }
        if(flag==0)
            printf("n\n");

    }
    }
    return 0;
}
