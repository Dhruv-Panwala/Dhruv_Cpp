#include<stdio.h>

int main()
{
    int a=2;
    int b=0;
    if(b||a++)
    {
        printf("%d",a);
    }
    else{
        printf("%d",b);
    }
    return 0;
}
