#include<stdio.h>

#define SIZE 7
void linearSearch(int arr[],int ele);
main()
{
    int arr[SIZE],i;

    for(i=0;i<SIZE;i++)
    {
        printf("Enter value of arr[%d]",i);
        scanf("%d",&arr[i]);
    }

    for(i=0;i<SIZE;i++)
    {
        printf("%d\t",arr[i]);
    }
    linearSearch(arr,5);
}

void linearSearch(int arr[],int ele)
{
    int flag=0;
    int i;
    for(i=0;i<SIZE;i++)
    {
        if(arr[i]==ele)
        {
            flag=1;
            break;
        }
        else
        {
            flag=0;
        }
    }
    if(flag==1)
    {
        printf("\nMatch found");
    }
    else{
        printf("\nNot Found");
    }
}
