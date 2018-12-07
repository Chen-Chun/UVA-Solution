#include<stdio.h>
int main()
{
    int H1,M1,H2,M2,min,m,h;
    while(scanf("%d %d %d %d",&H1,&M1,&H2,&M2)!=EOF)
    {
        if(H1==0 && M1==0 && H2==0 && M2==0)
         break;
         if(M2>=M1){
                m=M2-M1;
            if(H2>=H1){
               h=H2-H1;
            }
         else
            h=(H2+24)-H1;
         }
         else if(M2<M1)
             {
                 m=(M2+60)-M1;
                 if(H2>=H1+1){
                 h=H2-(H1+1);
            }
            else
            h=(H2+24)-(H1+1);
             }
         min=(h*60)+m;
         printf("%d\n",min);
         }

    return 0;
}
