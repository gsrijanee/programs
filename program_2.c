#include<stdio.h>
#include<string.h>
int main()
{
    float x,y,z,t,w,daily,monthly;
    int curr_year,curr_month;
    scanf("%f%f%f%f%f%d%d",&x,&y,&z,&t,&w,&curr_month,&curr_year);
    if(x > 0 && y > 0 && z > 0 && t > 0 && w > 0)
    {
        if(y > x && y > z && y > t && y > w && curr_month > 0 && curr_month <= 12 && curr_year > 0)
        {
            daily = x + y + z + t + w;
            {
                if(curr_month == 1 || curr_month == 3 || curr_month == 5 || curr_month == 7 || curr_month == 8 || curr_month == 10 || curr_month == 12)
                {
                    monthly = 31 * daily;
                }
                else if(curr_month == 2)
                {
                    if(((curr_year % 4 == 0) && (curr_year % 100 != 0)) || (curr_year % 400 == 0))
                    {
                        monthly = 29 * daily;
                    }
                    else
                    {
                        monthly = 28 * daily;
                    }
                }
                else
                {
                    monthly = 30 * daily;
                }
        
            }
            printf("%f\t%f",daily,monthly);
        }
        else
        {
            printf("Error");
        }
    }
    else
    {
        printf("Error");
    }
    return 0;
}
