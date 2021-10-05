#include<stdio.h>
void main()
{
    int i,num,count=0;
    printf("Enter an integer :: ");
    scanf("%d",&num);
    if(num>0)
    {
        for(i=1;i<=num;i++)
        {
            if(num%i==0)
            {
                count++;
            }
        }
    }
    else if(num==0||num==1)
    {
        printf("The given integer is neither prime nor composite\n");
        return;
    }
    else if(num<0)
    {
        for(i=-1;i>=num;i--)
        {
            if(num%i==0)
            {
                count++;
            }
        }
    }
    if(count==2)
    {
        printf("The given integer is prime\n");
    }
    else
    {
        printf("The given integer is composite\n");
    }
}
