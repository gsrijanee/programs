#include <stdio.h>

int main()
{
    int n,i = 0,count = 0,arr[100];
    printf("Enter the number of swans : ");
    scanf("%d",&n);
    if(n > 0)
    {
        printf("Enter the ages of the swans in weeks : ");
        for(i = 0;i < n;i ++)
        {
            scanf("%d",&arr[i]);
        }
        for(i = 0;i < n;i ++)
        {
            if(arr[i] > 0)
            {
                int temp = 0;
                if(arr[i] >= 52)
                {
                    count = count + 16;
                }
                else if(arr[i] >= 49 && arr[i] < 52)
                {
                    int value = arr[i];
                    while(value < 52)
                    {
                        value = value + 1;
                        temp = temp + 1;
                    }
                    count = count + ((4 - temp) * 4);
                }
                else if(arr[i] < 49)
                {
                    count = count + 0;
                }
            }
            else
            {
                count = -1;
                printf("\nError\n");
                break;
            }
        }
    }
    else
    {
        count = -1;
        printf("\nError\n");
    }
    if(count != -1)
    {
        printf("\nThe total number of eggs at the end of the month will be %d",count);
    }
    return 0;
}
