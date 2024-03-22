1) Write a C program to find cube of any number using function.

#include <stdio.h>
#include <stdlib.h>
int cube(int n);

int main ()
{
    int num;
    while(1)
    {
        printf("Enter a number: ");
        scanf("%d",&num);
        printf("Cube of %d = %d\n\n",num,cube(num));
    }
    return 0;
}
int cube(int n)
{
    return n*n*n;
}

-OUTPUT
Enter a number: 3
Cube of 3 = 27

Enter a number: -3
Cube of -3 = -27

/***********************************************************************************************/
2)Write a C program to find diameter, circumference and area of circle using functions.

#include <stdio.h>
#include <stdlib.h>
double diameter(double r);
double circumference(double r);
double area(double r);

int main ()
{
    double radius,dia,cir,ar;
    while(1)
    {
        printf("Enter the radius: ");
        scanf("%lf",&radius);
        dia=diameter(radius);
        cir=circumference(radius);
        ar=area(radius);
        printf("Diameter = %.2lf\n",dia);
        printf("Circumference = %.2lf\n",cir);
        printf("Area = %.2lf\n\n",ar);
    }
    return 0;
}
double diameter(double r)
{
    return 2*r;
}
double circumference(double r)
{
    return 2*3.14*r;
}
double area(double r)
{
    return 3.14*r*r;
}

-OUTPUT
Enter the radius: 20
Diameter = 40.00
Circumference = 125.60
Area = 1256.00

/***********************************************************************************************/
3)Write a C program to find maximum and minimum between two numbers using functions.

#include <stdio.h>
#include <stdlib.h>

void max_min(int n1,int n2);
int main ()
{
    int n1,n2;
    while(1)
    {
        printf("Enter two numbers: ");
        scanf("%d%d",&n1,&n2);
        max_min(n1,n2);
    }
    return 0;
}
void max_min(int n1,int n2)
{
    if(n1>n2)
    {
        printf("Max = %d  Min = %d\n\n",n1,n2);
    }
    else if(n2>n1)
    {
        printf("Max = %d  Min = %d\n\n",n2,n1);
    }
    else
    {
        printf("Numbers are equal\n\n");
    }
}

-OUTPUT
Enter two numbers: -5
5
Max = 5  Min = -5

Enter two numbers: 5
5
Numbers are equal

/***********************************************************************************************/
6)Write a C program to find all prime numbers between given interval using functions.

#include <stdio.h>
#include <stdlib.h>
int IsPrime(int n);
void PrimeBetween2Numbers(int n1,int n2);
int main()
{
    int num1,num2;
    while(1)
    {
        printf("Enter two numbers: ");
        scanf("%d%d",&num1,&num2);
        PrimeBetween2Numbers(num1,num2);
    }
    return 0;
}
int IsPrime(int n)
{
    int i,flag=1;
    if(n<0)
    {
        flag=2;
    }
    if(n==0)
    {
        flag=3;
    }
    if(n==1)
    {
        flag=0;
    }
    for(i=2; i*i<=n && flag==1; i++)
    {
        if(n%i==0)
        {
            flag=0;
        }
    }
    return flag;
}

void PrimeBetween2Numbers(int n1,int n2)
{
    int i;
    if(n1>n2)
    {
        n1^=n2;
        n2^=n1;
        n1^=n2;
    }
    for(i=n1;i<=n2;i++)
    {
        if(IsPrime(i)==1)
        {
            printf("%d ",i);
        }
    }
    printf("\n\n");
}

 -OUTPUT
 Enter two numbers: 0
100
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47 53 59 61 67 71 73 79 83 89 97
/***********************************************************************************************/
8)Write a C program to print all Armstrong numbers between given interval using functions.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int IsArmstrong(int n);
void ArmstrongBetween2Numbers(int n1,int n2);
int main()
{
    int num1,num2;
    while(1)
    {
        printf("Enter two numbers: ");
        scanf("%d%d",&num1,&num2);
        ArmstrongBetween2Numbers(num1,num2);
    }
    return 0;
}
int IsArmstrong(int n)
{
    int num1,num2,rem,sum=0,c=0;
    num1=n;
    num2=n;
    while(num1>0)  //to count the number of digits
    {
        num1/=10;
        c++;
    }
    while(num2>0)
    {
        rem=num2%10;
        sum=sum+pow(rem,c);
        num2/=10;
    }
    if(sum==n)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void ArmstrongBetween2Numbers(int n1,int n2)
{
    int i;
    if(n1>n2)
    {
        int temp=n1;
        n1=n2;
        n2=temp;
    }
    for(i=n1;i<=n2;i++)
    {
        if(IsArmstrong(i)==1)
        {
            printf("%d ",i);
        }
    }
    printf("\n\n");
}

-OUTPUT
Enter two numbers: -200
10000
0 1 2 3 4 5 6 7 8 9 153 370 371 407 1634 8208 9474

/***********************************************************************************************/
12)Write a C program to print all even or odd numbers in given range using recursion.

#include <stdio.h>
#include <stdlib.h>
void even_odd(int n1,int n2);
int main()
{
    int n1,n2;
    printf("Enter two numbers: ");
    scanf("%d%d",&n1,&n2);
    if(n1&1)
    {
        printf("Odd numbers from %d to %d\n",n1,n2);
    }
    else
    {
        printf("Even numbers from %d to %d\n",n1,n2);
    }
    even_odd(n1,n2);
    return 0;
}
void even_odd(int n1,int n2)
{
    if(n1>n2)
    {
       return;
    }
    printf("%d ",n1);
    even_odd(n1+2,n2);
}

-OUTPUT
Enter two numbers: -6
19
Even numbers from -6 to 19
-6 -4 -2 0 2 4 6 8 10 12 14 16 18

/***********************************************************************************************/
16)Write a C program to check whether a number is palindrome or not using recursion.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int num_reverse(int num);
void IsPalindrome(int num);
int main()
{
    int n;
    while(1)
    {
        printf("Enter a number: ");
        scanf("%d",&n);
        IsPalindrome(n);
    }
    return 0;
}

int num_reverse(int num)
{
    int n=num,c=0;
    while(n)
    {
        c++;
        n/=10;
    }
    if(num==0)
    {
        return 0;
    }
    return pow(10,c-1)*(num%10)+num_reverse(num/10);
}
void IsPalindrome(int num)
{
    if(num_reverse(num)==num)
    {
        printf("%d is palindrome\n\n",num);
    }
    else
    {
        printf("%d is not palindrome\n\n",num);
    }
}

-OUTPUT
Enter a number: 1457
1457 is not palindrome

Enter a number: 14541
14541 is palindrome

/***********************************************************************************************/
17)C program to find sum of digits using recursion

#include <stdio.h>
#include <stdlib.h>
int sumOfDigits(int num);
int main()
{
    int n;
	while(1)
	{
        printf("Enter a number: ");
        scanf("%d",&n);
        printf("Sum of digits in %d = %d",n,sumOfDigits(n));
	}
    return 0;
}
int sumOfDigits(int num)
{
    if(num<0)
    {
        num=-num;
    }
    if(num==0)
    {
        return 0;
    }
    return (num%10)+sumOfDigits(num/10);
}

-OUTPUT
Enter a number: 1234
Sum of digits in 1234 = 10

Enter a number: -1234
Sum of digits in -1234 = 10

/***********************************************************************************************/
18)Write a C program to find factorial of any number using recursion.

#include <stdio.h>
#include <stdlib.h>
int num_reverse(int num);
void IsPalindrome(int num);
int factorial(int n);
int main()
{
    int n;
    while(1)
    {
        printf("Enter a number: ");
        scanf("%d",&n);
        int fact=factorial(n);
        if(fact)
        {
            printf("Factorial of %d = %d\n\n",n,fact);
        }
        else
        {
            printf("Invalid\n\n");
        }
    }
    return 0;
}
int factorial(int n)
{
    if(n<0)
    {
        return 0;
    }
    if(n==0)
    {
        return 1;
    }
    return n*factorial(n-1);
}

-OUTPUT
Enter a number: 0
Factorial of 0 = 1

Enter a number: 5
Factorial of 5 = 120
