#include <stdio.h>

struct date
{
	int years;
	int months;
	int days;
};

int days_in_month[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 }; 

int conversion_to_days(struct date s)    
{
	int sum = 0;                      
	for (int i = 1; i < s.years; i++)      
	{
		if (s.years % 4 == 0 && s.years % 100 != 0 || s.years % 400 == 0) 
		{ 
			sum = sum + 366;
		}
		else
		{ 
		    	sum = sum + 365;
		}
	}

	for (int k = 1; k < s.months; k++) 
	{ 
		sum = sum + days_in_month[k];
	}
	return sum + s.days;     
}

int diff(struct date s1, struct date s2)
{
	return conversion_to_days(s1) - conversion_to_days(s2);
}

int main()
{
	struct date s1, s2;
	int i = 2,j = 2,prime = 0,comp = 0,isPrime = 1;
	printf("Enter the current date (yyyy-mm-dd):\n");
	scanf("%d-%d-%d", &s1.years, &s1.months, &s1.days);
	printf("Enter the birth date of the man (yyyy-mm-dd):\n");
	scanf("%d-%d-%d", &s2.years, &s2.months, &s2.days);
	int number_of_days = diff(s1,s2);
	printf("The number of days between the two dates is %d\n", number_of_days);
	int weeks = number_of_days / 7;
    for(i = 2;i < weeks;i ++)
    {
        if(weeks % i == 0)
        {
            for(j = 2;j <= i / 2;j ++)
            {
                if(i % j == 0)
                {
                    isPrime = 0;
                    comp = comp + i;
                    break;
                }
            }
            if(isPrime == 1)
            {   
                prime = prime + i;
            }
        }
    }
    if(prime > comp)
    {
        printf("The man will get Grant\n");
    }
    else
    {
        printf("The man will not get Grant\n");
    }
	return 0;
}
