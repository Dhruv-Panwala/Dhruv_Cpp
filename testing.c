
#include<stdio.h>
#define Size 7

void binarySearch(int arr[],int a)
{

     int min=0,mid;
     int i=-1;
     int max;
     max=Size-1;
     while(min<=max)
     {
	mid=(min+max)/2;

	if(a==arr[mid])
	{
		i=mid;
		break;
	}
	else
	{
		if(a>arr[mid])
		{
			min=mid+1;
		}
		else{
			max=mid-1;
		 }
	}
     }
     if(i!=-1)
     {
	printf("\nElement found");
     }
     else
     {
	printf("\nElement not found");
     }
}//end of func

main()
{
	int i,arr[Size],key;

	printf("Enter the elements:");
	for(i=0;i<Size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<Size;i++)
	{
		printf("%d\t",arr[i]);
	}

	printf("\nEnter the key:");
	scanf("%d",&key);
	binarySearch(arr,key);


}//end of main
