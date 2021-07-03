#include<stdio.h>

int main()
{
    int n,count = 0;
    printf("Enter the count of numbers : ");
    scanf("%d",&n);
    while(n > count)
    {
        int num,i = 0,P = 1,Q = 1;
        int length = 0;
        printf("Enter a number : ");
        scanf("%d",&num);
        int num_1 = num;
        while(num_1 != 0)
        {
            num_1 = num_1 / 10;
            length = length + 1;
        }
        int number[length];
        for(i = length;i > 0;i --)
        {
            number[i-1] = num % 10;
            num = num / 10;
        }
        if(length > 0 && length <= 10)
        {
            for(i = 0;i < length;i ++)
            {
                if((i+1) % 2 == 0)
                {
                    if(number[i] > 0)
                    {
                        P = P * number[i];
                    }
                    else
                    {   
                        printf("Status:Error\n");
                        P = -1;
                        break;
                    }
                }
                else
                {
                    if(number[i] > 0)
                    {                    
                        Q = Q * number[i];
                    }
                    else
                    {
                        printf("Status:Error\n");
                        Q = -1;
                        break;
                    }
                }
            }
            if(P == 1)
            {
                P = 0;
            }
            else if(Q == 1)
            {
                Q = 0;
            }
            if(P >= Q && P != -1 && Q != -1)
            {   
                printf("Status:Dominant\n");
            }
            else if(Q > P && P != -1 && Q != -1)
            {
                printf("Status:Magical\n");
            }
        }
        else
        {
            printf("Status:Error\n");
        }
    count = count + 1;
    }
    return 0;
}
