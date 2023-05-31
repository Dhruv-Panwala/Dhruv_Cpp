#include<iostream>
using namespace std;

class ArrayADT
{
public:
    int capacity;
    int last_index;
    int *ptr;

    ArrayADT()
    {
        capacity=0;
        last_index=-1;
        ptr=NULL;
    }

    void createarray(int capacity);
    void add_element(int index,int element);
    int get(int index);
};

void ArrayADT::createarray(int capacity)
{
    this->capacity=capacity;
    last_index=-1;
    ptr =new int[capacity];
}

int ArrayADT::get(int index)
{
    if(index>last_index|| index<0)
    {
        return(-1);
    }
    else
    {
        return ptr[index];
    }
}

void ArrayADT::add_element(int index,int element)
{
    int i;
    if(capacity-1 == last_index)
    {
        cout<<"\nOverflow\n";
    }
    else if(index <0|| index>=capacity)
    {
       ptr[index]=element;
       last_index++;
    }
}

main()
{
        ArrayADT A1;
        A1.createarray(12);
        A1.add_element(0,500);
        A1.add_element(1,800);
        A1.add_element(2,400);
        A1.add_element(3,200);
        A1.add_element(4,100);
        cout<<A1.get(0)<<endl;
}
