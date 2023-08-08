2)Write a C program to print all natural numbers in reverse (from n to 1). – using while loop

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Numbers from %d to 1\n", n);
    while(n>=1)
    {
        printf("%d ", n);
        n--;
    }
    return 0;
}
***********************************************************************************************
5)Write a C program to print all odd number between 1 to 100.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    printf("Odd numbers between 1 to 100\n");
    for(i=1;i<100;i=i+2){
        printf("%d ",i);
    }
    return 0;
}
***********************************************************************************************
6)Write a C program to find sum of all natural numbers between 1 to n.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
	{
        sum+=i;
    }
    printf("Sum of numbers from 1 to %d = %d", n,sum);
    return 0;
}

***********************************************************************************************
9)Write a C program to print multiplication table of any number.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=12;i++)
	{
        printf("%d x %d = %d\n",n,i,n*i);
    }
    return 0;
}
***********************************************************************************************
10)Write a C program to count number of digits in a number.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=0,n;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        n/=10;
        i++;
    }
    printf("Number of digits = %d",i);
    return 0;
}
***********************************************************************************************
15)Write a C program to calculate product of digits of a number.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,R, product=1;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        R=n%10;
        n/=10;
        product*=R;
    }
    printf("Product of digits = %d",product);
    return 0;
}
***********************************************************************************************
16) Write a C program to enter a number and print its reverse.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,R;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0)
    {
        R=(R*10)+(n%10);
        n/=10;
    }
    printf("Reverse = %d",R);
    return 0;
}
***********************************************************************************************
21)Write a C program to find power of a number using for loop.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pow, base,exp;
    while(1)
    {
        pow=1;
        printf("Enter base: ");
        scanf("%d",&base);
        printf("Enter exponent: ");
        scanf("%d",&exp);
        if(base==0&&exp==0)
        {
            printf("Invalid\n\n");
            continue;
        }
        for(int i=0; i<exp; i++)
        {
            pow*=base;
        }
        printf("%d ^ %d = %d\n\n",base,exp,pow);
    }
    return 0;
}
***********************************************************************************************
