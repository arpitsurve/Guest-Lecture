#include <stdio.h>

int main()
{
	int flag=0;
	int arr[]={4,7,8,40,10,2};
	int key =10;
	int i;
	int index;
	for(i=0; i<=5;i++)
	{
		if(key==arr[i])
		
		{
			flag=1;
			index=i;
		}
		
	}
	if(flag=1)
	{
		printf("element is found at %d",index+1);
	}
	else {
		printf("Element not found");
	}
	return 0;
}
