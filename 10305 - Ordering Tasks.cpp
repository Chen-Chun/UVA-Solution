#include<bits/stdc++.h>
using namespace std;
#define white 0
#define gray 1
#define black 2
#define maxsize 100
int grid[maxsize][maxsize],parent[maxsize],starting_time[maxsize],finishingTime[maxsize];
int node,edge,n1,n2,t=0,color[maxsize],arr[maxsize],no=0;

void dfs_visit(int s)

{
    int u=s;
    starting_time[u]=++t;
    color[u]=gray;
    for(int i=1;i<=node;i++)
    {
        if(grid[u][i]==1)
        {
            if(color[i]==white)
            {
                dfs_visit(i);
                parent[i]=u;
            }
        }
    }
    color[u]=black;
    finishingTime[u]=++t;
    //cout<<u;
    arr[no++]=u;

}

void dfs()

{

    for(int i=1;i<=node;i++)
    {
        parent[i]=-1;
        color[i]=white;
    }
    t=0;
    for(int i=1;i<=node;i++)
    {
        if(color[i]==white)
        {
            dfs_visit(i);
        }
    }

}

int main()

{
   // freopen("ordering.txt","r",stdin);
    cin>>node>>edge;

    for(int i=1;i<=node;i++)
    {
        for(int j=1;j<=node;j++)
        {
            grid[i][j]=0;
        }
    }
    /*for(int i=0;i<edge;i++)
    {
        cin>>n1>>n2;
        grid[n1][n2]=1;

    }
    */
    while(1)
            {
        cin>>n1>>n2;
        if(n1==0 && n2==0) break;
        else grid[n1][n2]=1;

    }

    dfs();
     for(int i=no-1;i>=0;i--)
     {
         cout<<arr[i];
         if(i!=0) cout<<" ";
     }
     cout<<endl;
}
