#include<stdio.h>
int main()
{
    int n,arr[100],count = 0,i = 0;
    printf("Enter the number of elements in the array:");
    scanf("%d",&n);
    printf("Enter the elements of the array:-\n");
    for(i = 0;i < n;i ++)
    {
        scanf("%d",&arr[i]);
    }
    printf("The required array is displayed below:-\n");
    for(i = 0;i < n;i ++)
    {
        printf("%d\t",arr[i]);
    }
    for(i = 0;i < n;i ++)
    {
        while(i <= (n - 1))
        {
            if(arr[i] > 0)
            {
                i = i + arr[i];
            }
            else
            {
                count = -1;
                break;
            }
            count = count + 1;
        }
        if(count == -1)
        {
            printf("\nCannot be found\n");
            break;
        }
    }
    if(count != -1)
    {
        printf("\nThe number of jumps required to reach the end of the array is %d\n",count);
    }
    return 0;
}
