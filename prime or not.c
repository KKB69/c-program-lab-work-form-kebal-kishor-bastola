#include<stdio.h>
#include<conio.h>
int main()
{
    int i,n,count=0;
    printf("Enter any number:\n");
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            count++;
        }
    }

    if(count==2)
    {
        printf("the number is prime");
    }

    else
    {
        printf("the number is not prime");
    }
}
