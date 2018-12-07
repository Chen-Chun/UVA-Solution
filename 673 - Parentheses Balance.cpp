#include<bits/stdc++.h>

using namespace std;

struct node
{
    char data;
    struct node *link;
};
void push(node *header,char ch)

{
     node *ptr,*newnode;
    ptr=header;
    newnode=(node*)malloc(sizeof(node));
    while(ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    newnode->data=ch;

    newnode->link=ptr->link;
    ptr->link=newnode;

}

char pop(node *header)

{
    node *ptr,*ptr1;
   ptr=header;
   ptr1=ptr->link;
   while(ptr1->link!=NULL)
   {
       ptr=ptr->link;
       ptr1=ptr1->link;
   }
   char ch;
   ch=ptr1->data;
   ptr->link=ptr1->link;
   free(ptr1);
   return ch;

}
void printlist(node *header)

{
    node *ptr;
    ptr=header;
    while(ptr->link!=NULL)
    {
        ptr=ptr->link;
        cout<<ptr->data<<" ";

    }
    cout<<endl;
}

int main()

{
    node *header;
    header=(node*)malloc(sizeof(node));
    header->data='6';
    header->link=NULL;
    string line;
    int flag=0;
    cin>>line;
    for(int i=0;i<line.length();i++)
    {
        if(line[i]=='[' || line[i]=='(')
        push(header,line[i]);
        else if(line[i]==']')
        {
            char chr=pop(header);
            if(chr!='[')
            {
                cout<<"NO"<<endl;
                flag=1;
                break;
            }
        }
        else if(line[i]==')')
        {
            char chr=pop(header);
            if(chr!='(')
            {
                cout<<"NO"<<endl;
                flag=1;
                break;
            }
        }
    }
    if(flag==0) cout<<"YES"<<endl;


}
