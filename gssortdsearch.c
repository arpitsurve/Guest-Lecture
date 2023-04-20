#include <stdio.h>

int arr[5]={1,2,3,4,5};
int i, element;

int main()
{
    printf ("\n\tenter an element to search:");
    scanf ("%d",&element);
    
    if (element > arr[5])
    {
        printf("\n\telement not found");
        return -1;
    }
    
    r (i=0; i<5; i++)
    {
        if (element== arr[i])
        {
            printf("\n\tElement found!");
        }
        if (!element== arr[i])
        {
            printf("\n\tElement not present");
        }
    }
    return 0;
}
