# C-LINKED-LIST-
#include <iostream>

using namespace std;

class sll
{
    struct node
    {
         int data;
         node *link;
    };

node *temp,*r,*p;

public:
    sll()
    {
        p=NULL;
    }
    
    void create(int num)
    {
        if(p==NULL)
        {
            temp=new node;
            temp->data=num;
            temp->link=NULL;
            p=temp;
        }
        else
        {
            r=new node;
            r->data=num;
            r->link=NULL;
            while(temp->link!=NULL)
            {
                temp=temp->link;
            }
            temp->link=r;
            temp=temp->link;
        }
        
        
    }
    
    void disp()
        {
            temp=p;
            while(temp!=NULL)
            {
                cout<<temp->data<<endl;
                temp=temp->link;
            }
        }
};

int main()
{
    sll o;
    o.create(1);
    o.create(2);
    o.create(3);
    o.disp();

    return 0;
}
