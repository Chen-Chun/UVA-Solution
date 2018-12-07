#include<bits/stdc++.h>
using namespace std;

void row_check(int mat[100][100],int n,int e_line_c,int e_cnt_c)
{
    int r,c,sum,e_line_r,e_cnt_r=0,e_flag=0;
    for(r=0;r<n;r++)
    {
        sum=0;
        for(c=0;c<n;c++)
        {
            sum=sum+mat[r][c];
        }
        if(sum%2 != 0)
        {
            e_cnt_r++;
            e_line_r=r;
        }
        if(e_cnt_r>1)
        {
         cout<<"Corrupt"<<endl;
         e_flag=1;
         break;
        }

    }
    if(e_flag!=1 && e_cnt_r==0 && e_cnt_c==0)
    {
         cout<<"OK"<<endl;
    }
    else if(e_flag!=1 && e_cnt_r==1 && e_cnt_c==1)
    {
        cout<<"Change bit ("<<e_line_r+1<<","<<e_line_c+1<<")"<<endl;
    }
}


void col_check(int mat[100][100],int n)
{
    int r,c,sum,e_line,e_cnt=0;
    for(c=0;c<n;c++)
    {
        sum=0;
        for(r=0;r<n;r++)
        {
            sum=sum+mat[r][c];
        }
        if(sum%2 != 0)
        {
            e_cnt++;
            e_line=c;
        }
        if(e_cnt>1)
        {
         cout<<"Corrupt"<<endl;
         break;
        }

    }
    if(e_cnt==0 || e_cnt ==1) row_check(mat,n,e_line,e_cnt);
}


int main()
{
    int n,r,c,mat[100][100];
    cin>>n;
    while(n!=0)
    {
        for(r=0;r<n;r++)
        {
            for(c=0;c<n;c++)
            {
                cin>>mat[r][c];
            }
        }
        col_check(mat,n);
        //row_check(mat);
        cin>>n;
    }
    return 0;
}
