#include<iostream>
using namespace std;

class LinkedList
{
private:
    struct node
    {
        int item;
        int *next;
    };
    node *start;
public:
    LinkedList()
    {
        start=NULL;
    }

    void insertatstart(int data);
    void insertatspecific(int old_data,int data);
    void insertatlast(int data);
    int deleteatfirst();
    void deleteatspecific();
    int deleteatlast();
    int countNode();
    int elementAt(int);
    void printelements();
    void edit_ele(int old_data,int new_data);
};

void LinkedList::insertatstart(int data)
{
    node *n ;
    n->item=data;
    start=n;
    //n->next=start;


}

void insertatspecific(int old_data,int data)
{
    node *n,*t=new node;
    t=Search_ele(old_data);
    if(t==NULL)
    {
        cout<<"Na thay"<<endl;
    }
    else{
        n->item = data;
        n->next = t->next;
        t->next=n;
    }
}

void LinkedList::insertatlast(int data)
{
    node *n,*t= new node;
    n->item=data;
    n->next=NULL;
    if(start==NULL)
    {
        cout<<"Underflow";
    }
    else
    {
        t->next=start;
        while(t->next!=NULL)
        {
            t = t->next;
        }
        t->next=n;
    }

}

int LinkedList::deleteatfirst()
{
    if(start==NULL)
    {
        cout<<"\nLinkedList underflow";
        return 0;
    }
    else
    {
        node *t = start;
        start = start->next;
        delete(t);
        return 1;
    }
}

void LinkedList::deleteatspecific()
{
    if(start==NULL)
    {
        cout<<"LinkedList is underflow";
    }
    else{

    }
}

int LinkedList::deleteatlast()
{
    if(start == NULL)
    {
        cout<<"\nLinked List Underflow";
        return 0;
    }
    else
    {
        node *t1,*t2 = new node;
        *t2=*t1=start;
        while(t1->next != NULL)
        {
            t2->next=t1;
            t1=t1->next;
        }
        delete(t1);
        t2->next=NULL;
        return 1;
    }
}

int LinkedList::countNode()
{
    int node_count;
    node *t;
    if(start==NULL)
    {
        node_count=0;
    }
    else
    {
        t->next=start;
        node_count=1;
        while(t ->next!=NULL)
        {
            t=t->next;
            node_count++;
        }
    }
    return node_count;
}

int LinkedList::elementAt(int index)
{
    len=countNode();
    if(index>len)
    {
        return NULL;
    }
    else
    {
        node *t;
        t->next=start;
        for(;index>0;index--)
        {
            t=t->next;
        }
        return t->item;
    }
}

void LinkedList::printelements()
{
    if(start==NULL)
    {
        cout<<"Linked List is empty.";
    }
    else
    {
        node *t;
        t->next=start;
        while(t->next!=NULL)
        {
            cout<<t->item<<"\t";
            t=t->next;
        }
    }
}

void LinkedList::edit_ele(int old_data,int new_data)
{
    if(start==NULL)
    {
        cout<<"LinkedList underflow";
    }
    else{
        node *t;
        t= start;

        while(t!=NULL)
        {
            if(t->item ==old_data)
            {
                t->item=new_data;
            }
            t=t->next;
        }
    }
}

main()
{
    LinkedList l1;
    l1.insertatstart(55);
    l1.printelements();
}
