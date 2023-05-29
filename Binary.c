#include<stdio.h>
#define SIZE 7
void quickSort(int [],int,int);
void binarySearch(int arr[],int);
main()
{
    int arr[SIZE],i,x;
    for(i=0;i<SIZE;i++)
    {
        printf("Enter value of arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    quickSort(arr,0,SIZE);
    for(i=0;i<SIZE;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("\nEnter number to find:");scanf("%d",&x);
    binarySearch(arr,x);
}
void quickSort(int arr[],int low,int high)
{
    int i=low;
    int j=high;
    int z=arr[(low+high)/2];
    int temp;
    do{
        while(arr[i]<z)
        {
            i++;
        }
        while(arr[j]>z)
        {
            j--;
        }
        if(i<=j)
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
    }while(i<=j);
    if(j>low)
    {
        quickSort(arr,low,j);
    }
    if(i<high)
    {
        quickSort(arr,i,high);
    }
}
void binarySearch(int arr[],int ele)
{
    int min=0;
    int mid;
    int max=SIZE-1;
    int flag=0;
    while(min<=max)
    {
        mid=(min+max)/2;
        if(arr[mid]==ele)
        {
            flag=1;
            break;
        }
        else
        {
            if(arr[mid]>ele)
            {
                max=mid-1;
            }
            else if(arr[mid]<ele)
            {
                min=mid+1;
            }
        }
    }
    if(flag==1)
    {
        printf("\nMatch Found");
    }
    else{
        printf("\nNot found");
    }
}
