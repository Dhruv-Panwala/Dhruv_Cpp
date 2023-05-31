#include<iostream>
using namespace std;

class LinkedList
{
private:
    struct node
    {
        int item;
        node *next;
    };
    node *start;
public:
    LinkedList()
    {
        start=NULL;
    }

    node * search_ele(int old_data)
    {
        node *t;

        if(start==NULL)
        {
            return (NULL);
        }
        else{
            t=start;
        while(t!=NULL)
        {
            if(t->item==old_data)
            {
                return t;
            }
            else{
                t=t->next;
            }
        }
    }
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
    void sorted();
};


void LinkedList::insertatstart(int data)
{
    node *n= new node;
    n->item=data;
    n->next=start;
    start=n;
}

void LinkedList::insertatspecific(int old_data,int data)
{
    node *n,*t;

    t=search_ele(old_data);
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
    node *n= new node;
    node *t = new node;
    n->item=data;
    n->next=NULL;

    if(start==NULL)
    {
        cout<<"Underflow";
    }
    else
    {
        t=start;
        while(t->next!=0)
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
        cout<<"LinkedList underflow";
    }
    else{
        node *n,*t;
        t=start;

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
        t2=t1=start;
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
    int len=countNode();
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
        t=start;
        while(t!=NULL)
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

void LinkedList::sorted()
{
    node *t,*n;
    if(start==NULL)
    {
        cout<<"LinkedList Underflow";
    }
    else
    {

    }
}


main()
{
    LinkedList l1;
    l1.insertatstart(55);
//    li.insertatspecific(10,12)
    l1.insertatlast(42);
    l1.printelements();
}
