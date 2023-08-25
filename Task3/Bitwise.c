1)Write a C program to check Least Significant Bit (LSB) of a number is set or not.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    while(1)
    {
        printf("Enter a number: ");
        scanf("%d",&num);
        if(num&1)
        {
            printf("LSB of %d is SET\n\n",num);
        }
        else
        {
            printf("LSB of %d is NOT SET\n\n",num);
        }
    }
    return 0;
}

-OUTPUT
Enter a number: 5
LSB of 5 is SET

Enter a number: 10
LSB of 10 is NOT SET
*************************************************************************************************
2)Write a C program to check Most Significant Bit (MSB) of a number is set or not.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    while(1)
    {
        printf("Enter a number: ");
        scanf("%d",&num);
        if(num & (1<<(sizeof(num)*8 -1) ))
        {
            printf("MSB of %d is SET\n\n",num);
        }
        else
        {
            printf("MSB of %d is NOT SET\n\n",num);
        }
    }
    return 0;
}

-OUTPUT:
Enter a number: 5
MSB of 5 is NOT SET

Enter a number: -5
MSB of -5 is SET
*************************************************************************************************
3)Write a C program to get nth bit of a number.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,bit;
    while(1)
    {
        printf("Enter a number: ");
        scanf("%d",&num);
        printf("Enter which bit you want: ");
        scanf("%d",&bit);
        if(num&(1<<bit))
        {
            printf("%dth bit in %d is (1)\n\n",bit,num);
        }
        else
        {
            printf("%dth bit in %d is (0)\n\n",bit,num);
        }
    }
    return 0;
}

-OUTPUT
Enter a number: 5
Enter which bit you want: 0
0th bit in 5 is (1)

Enter a number: -1
Enter which bit you want: 31
31th bit in -1 is (1)
*************************************************************************************************
4)Write a C program to set nth bit of a number.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,bit;
    while(1)
    {
        printf("Enter a number: ");
        scanf("%d",&num);
        printf("Enter which bit you want to set: ");
        scanf("%d",&bit);
        num=num|(1<<bit);
        printf("Number after setting %dth bit = %d\n\n",bit,num);
    }
    return 0;
}

-OUTPUT
Enter a number: 128
Enter which bit you want to set: 4
Number after setting 4th bit = 144

Enter a number: 0
Enter which bit you want to set: 7
Number after setting 7th bit = 128
*************************************************************************************************
5)Write a C program to clear nth bit of a number.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,bit;
    while(1)
    {
        printf("Enter a number: ");
        scanf("%d",&num);
        printf("Enter which bit you want to clear: ");
        scanf("%d",&bit);
        num=num& (~(1<<bit));
        printf("Number after setting %dth bit = %d\n\n",bit,num);
    }
    return 0;
}

-OUTPUT
Enter a number: 1664
Enter which bit you want to clear: 10
Number after setting 10th bit = 640

Enter a number: -5
Enter which bit you want to clear: 20
Number after setting 20th bit = -1048581

Enter a number: -5
Enter which bit you want to clear: 31
Number after setting 31th bit = 2147483643
*************************************************************************************************
6)Write a C program to toggle nth bit of a number.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,bit;
    while(1)
    {
        printf("Enter a number: ");
        scanf("%d",&num);
        printf("Enter which bit you want to toggle: ");
        scanf("%d",&bit);
        num=num^ (1<<bit);
        printf("Number after toggling %dth bit = %d\n\n",bit,num);
    }
    return 0;
}

-OUTPUT
Enter a number: 0
Enter which bit you want to toggle: 4
Number after toggling 4th bit = 16

Enter a number: 10
Enter which bit you want to toggle: 1
Number after toggling 1th bit = 8

Enter a number: -5
Enter which bit you want to toggle: 2
Number after toggling 2th bit = -1
*************************************************************************************************
7)Write a C program to get highest set bit of a number.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,bit,high,flag;
    while(1)
    {
        flag=0;
        printf("Enter a number: ");
        scanf("%d",&num);
        if(num==0)
        {
            printf("There are no set bits.\n\n");
            flag=2;
        }
        for(bit=0;bit<=(sizeof(num)*8 -1) && flag!=2; bit++)
        {
            if((num>>bit) &1)
            {
                high=bit;
                flag=1;
            }
        }
        if(flag==1)
        {
            printf("Highest order set bit in %d is %d.\n\n",num,high);
        }

    }
    return 0;
}

-OUTPUT
Enter a number: 0
There are no set bits.

Enter a number: 15
Highest order set bit in 15 is 3.

Enter a number: -520
Highest order set bit in -520 is 31.
*************************************************************************************************
8)Write a C program to get lowest set bit of a number.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,bit,flag,low;
    while(1)
    {
        flag=0;
        printf("Enter a number: ");
        scanf("%d",&num);
        if(num==0)
        {
            printf("There are no set bits.\n\n");
            flag=2;
        }
        for(bit=0;bit<=(sizeof(num)*8 -1) && flag==0; bit++)
        {
            if((num>>bit) &1)
            {
                low=bit;
                flag=1;
            }
        }
        if(flag==1)
        {
            printf("Lowest order set bit in %d is %d.\n\n",num,low);
        }

    }
    return 0;
}

-OUTPUT
Enter a number: 5
Lowest order set bit in 5 is 0.

Enter a number: 128
Lowest order set bit in 128 is 7.

Enter a number: -1
Lowest order set bit in -1 is 0.
*************************************************************************************************
9)Write a C program to count trailing zeros in a binary number.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,bit,flag;
    while(1)
    {
        flag=0;
        printf("Enter a number: ");
        scanf("%d",&num);
        if(num==0)
        {
            printf("There are no set bits - no trailing zeros.\n\n");
            flag=2;
        }
        for(bit=0;bit<=(sizeof(num)*8 -1) && flag==0; bit++)
        {
            if((num>>bit) &1)
            {
                flag=1;
                printf("Number of trailing zeros in %d = %d\n\n",num,bit);
            }
        }
    }
    return 0;
}

-OUTPUT
Enter a number: 128
Number of trailing zeros in 128 = 7

Enter a number: 0
There are no set bits - no trailing zeros.

Enter a number: -1
Number of trailing zeros in -1 = 0
*************************************************************************************************
10)Write a C program to count leading zeros in a binary number.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,bit,flag,high,leading_zero;
    while(1)
    {
        flag=0;
        printf("Enter a number: ");
        scanf("%d",&num);
        if(num==0)
        {
            printf("There are no set bits - no leading zeros.\n\n");
            flag=2;
        }
        for(bit=0; bit<=(sizeof(num)*8 -1) && flag!=2; bit++)
        {
            if((num>>bit) &1)
            {
                flag=1;
                high=bit;
            }
        }
        leading_zero=sizeof(num)*8 -1 -high;
        if(flag==1)
        {
            printf("Number of leading zeros in %d = %d\n\n",num,leading_zero);
        }
    }
    return 0;
}

 -OUTPUT
Enter a number: 0
There are no set bits - no leading zeros.

Enter a number: 128
Number of leading zeros in 128 = 24

Enter a number: -1
Number of leading zeros in -1 = 0
*************************************************************************************************
11)Write a C program to flip bits of a binary number using bitwise operator.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,flipped;
    while(1)
    {
        printf("Enter a number: ");
        scanf("%d",&num);
        flipped = ~num;
        printf("%d after flipping = %d\n\n",num,flipped);
    }
    return 0;
}

Another method:
flipped = num^(~0);

-OUTPUT
Enter a number: 0
0 after flipping = -1

Enter a number: -1
-1 after flipping = 0

Enter a number: 136
136 after flipping = -137
*************************************************************************************************
12)Write a C program to count total zeros and ones in a binary number.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,ones,zeros,i;
    while(1)
    {
        ones=0; zeros=0;
        printf("Enter a number: ");
        scanf("%d",&num);
        for(i=0;i<=(sizeof(num)*8 -1);i++)
        {
            if((num>>i)&1)
            {
                ones++;
            }
            else
            {
                zeros++;
            }
        }
        printf("Number of ones = %d\n",ones);
        printf("Number of zeros = %d\n\n",zeros);

    }
    return 0;
}

-OUTPUT
Enter a number: 0
Number of ones = 0
Number of zeros = 32

Enter a number: -1
Number of ones = 32
Number of zeros = 0

Enter a number: 255
Number of ones = 8
Number of zeros = 24
*************************************************************************************************
13)Write a C program to rotate bits of a given number.

#include <stdio.h>
#include <stdlib.h>
int rotate_left(int num,int rot);
int rotate_right(int num,int rot);
int main()
{
    int num,rot,left_num,right_num;
    printf("Enter a number: ");
    scanf("%d",&num);
    printf("Enter number of rotations: ");
    scanf("%d",&rot);
    left_num=rotate_left(num,rot);
    printf("number left rotated %d times = %d\n",rot,left_num);
    right_num=rotate_right(num,rot);
    printf("number right rotated %d times= %d\n\n",rot,right_num);
    return 0;
}
int rotate_left(int num,int rot)
{
    while(rot)
    {
        num= (num<<1) | (num>>(sizeof(num)*8 -1) &1);
        rot--;
    }
    return num;
}
int rotate_right(int num,int rot)
{
    while(rot)
    {
        num= ((num >>1)&(~(1<<(sizeof(num)*8 -1))))| ((num & 1)<< (sizeof(num)*8 -1));
        rot--;
    }
    return num;
}

-OUTPUT
Enter a number: -15
Enter number of rotations: 2
number left rotated 2 times = -57
number right rotated 2 times= 2147483644
*************************************************************************************************
14)Write a C program to convert decimal to binary number system using bitwise operator.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num,i,flag;
    while(1)
    {
        flag=0;
        printf("Enter a number: ");
        scanf("%d",&num);
        if(num==0)
        {
            printf("0");
        }
        for(i=(sizeof(num)*8 -1); num && i>=0; i--)
        {
            if((num>>i)&1)
            {
                printf("1");
                flag=1;
            }
            else
            {
                if(flag)
                {
                    printf("0");
                }
            }
        }
        printf("\n\n");
    }
    return 0;
}

-OUTPUT
Enter a number: 0
0

Enter a number: -1
11111111111111111111111111111111

Enter a number: 250
11111010
*************************************************************************************************
15)Write a C program to swap two numbers using bitwise operator.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2;
    while(1)
    {
        printf("Enter two numbers: \n");
        printf("num1 = ");
        scanf("%d",&num1);
        printf("num2 = ");
        scanf("%d",&num2);
        num1^=num2;
        num2^=num1;
        num1^=num2;
        printf("After swapping: num1= %d  num2= %d\n\n",num1,num2);
    }
    return 0;
}

-OUTPUT
Enter two numbers:
num1 = 0
num2 = 94
After swapping: num1= 94  num2= 0

Enter two numbers:
num1 = -5
num2 = 64
After swapping: num1= 64  num2= -5
*************************************************************************************************
16)Write a C program to check whether a number is even or odd using bitwise operator.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    while(1)
    {
        printf("Enter a number: \n");
        scanf("%d",&num);
        if(num&1)
        {
            printf("%d is odd\n\n",num);
        }
        else
        {
            printf("%d is even\n\n",num);
        }
    }
    return 0;
}

-OUTPUT
Enter a number:
20
20 is even

Enter a number:
-5
-5 is odd

























































