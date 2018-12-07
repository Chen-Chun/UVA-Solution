#include<stdio.h>
int main()
{
    char key[]={'1','2','3','4','5','6','7','8','9','0','-','=','Q','W','E','R','T','Y','U','I','O','P','[',']','A','S','D','F','G','H','J','K','L',';','Z','X','C','V','B','N','M',',','.','/','\0'};
     char input[1000];
     int i,j;
     while(gets(input)!=EOF){
    for(j=0;input[j]!='\0';j++)
    {
     for(i=0;key[i]!='\0';i++)
     {
         if(input[j]==key[i] && input[j]!='Q' && input[j]!='A' && input[j]!='Z')
         {
             input[j]=key[i-1];
             break;
         }
     }
    }
    puts(input);
     }

    return 0;
}
