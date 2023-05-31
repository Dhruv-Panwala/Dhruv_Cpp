#include<iostream>
using namespace std;

class ArrOperations{
public:
    int capacity;
    int last_index;
    int *ptr;

    ArrOperations()
    {
        capacity=0;
        last_index=0;
        ptr=NULL;
    }

    void createarray(int capacity);
    void add_element(int index,int element);
};

void ArrOperations::createarray(int capacity)
{
    this->capacity=capacity;
    last_index=-1;
}

void get(int index)
{
    if(index>last_index || index<0)
    {
        return(-1);
    }
    else
    {
        return ptr(index);
    }
}

main()
{

}
