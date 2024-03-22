3)Write a C program to enter two numbers and perform all arithmetic operations.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n1,n2;
    printf("Enter two numbers: ");
    scanf("%d%d",&n1,&n2);
    printf("Sum =%d+%d=%d\n",n1,n2,n1+n2);
    printf("Difference =%d-%d=%d\n",n1,n2,n1-n2);
    printf("Product =%d*%d=%d\n",n1,n2,n1*n2);
    printf("Quotient =%d/%d=%d\n",n1,n2,n1/n2);
    printf("Modulus =%d",n1%n2);

    return 0;
}
*************************************************************************************
4)Write a C program to enter length and breadth of a rectangle and find its perimeter.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int len,wid;
    printf("Enter length: ");
    scanf("%d",&len);
    printf("Enter width: ");
    scanf("%d",&wid);
    int perimeter= (len+wid)*2;
    printf("Perimeter = %d units", perimeter);


    return 0;
}
*************************************************************************************
5)Write a C program to enter length and breadth of a rectangle and find its area.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int len,wid;
    printf("Enter length: ");
    scanf("%d",&len);
    printf("Enter width: ");
    scanf("%d",&wid);
    int area= len*wid;
    printf("Area = %d", area);


    return 0;
}
**************************************************************************************
6)Write a C program to enter radius of a circle and find its diameter, circumference and area.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float r;
    printf("Enter radius: ");
    scanf("%f",&r);
    float diameter=2*r;
    float circumference=2*3.14*r;
    float area=3.14*r*r;
    printf("Diameter= %.2f\n", diameter);
    printf("Circumference= %.2f\n", circumference);
    printf("Area= %.2f",area);
    return 0;
}
***************************************************************************************
7)Write a C program to enter length in centimeter and convert it into meter and kilometer.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float l_cm, l_m, l_km;
    printf("Enter length in cm: ");
    scanf("%f", &l_cm);
    l_m = l_cm/100.0;
    l_km = l_cm/100000.0;
    printf("Length in meters = %.3f\n", l_m);
    printf("Length in kilometers = %.3f", l_km);
    return 0;
}
***************************************************************************************
8)Write a C program to enter temperature in Celsius and convert it into Fahrenheit.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float C,F;
    printf("Enter temperature in Celsius: ");
    scanf("%f", &C);
    F = (C * 9/5) + 32;
    printf("Temperature in Fahrenheit = %.2f", F);
    return 0;
}
***************************************************************************************
10)Write a C program to convert days into years, weeks and days.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int days,years,weeks, f_days;
    printf("Enter days: ");
    scanf("%d", &days);
    years= days/365;
    weeks= (days%365)/7;
    f_days= (days%365)%7;
    printf("%d days = %d year/s, %d week/s, %d day/s", days,years,weeks,f_days);
	return 0;
}
***************************************************************************************
11)Write a C program to find power of any number x ^ y.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base, exponent, result=1;
    printf("Enter base: ");
    scanf("%d",&base);
    printf("Enter exponent: ");
    scanf("%d",&exponent);
    for(int i=1; i<=exponent; i++)
    {
        result=base*result;
    }
    printf("%d ^ %d = %d",base, exponent, result);
	return 0;
}
***************************************************************************************
12)Write a C program to enter any number and calculate its square root.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float n1, root;
    printf("Enter a number: ");
    scanf("%f", &n1);
    root= sqrt(n1);
    printf("Square root of %.2f = %.2f", n1,root);
    return 0;
}
***************************************************************************************
16)Write a C program to enter marks of five subjects and calculate total, average and percentage.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float s1,s2,s3,s4,s5,total,avg;
    printf("Enter your five grades: ");
    scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
    total=s1+s2+s3+s4+s5;
    avg=(s1+s2+s3+s4+s5)/5;
    printf("Total= %.2f\n",total);
    printf("Average= %.2f\n", avg);
    printf("Percentage= %.2f%%", avg);

    return 0;
}
***************************************************************************************
19)Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. 
Calculate percentage and grade

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float s1,s2,s3,s4,s5,total,per;
    printf("Enter your five grades: ");
    scanf("%f%f%f%f%f",&s1,&s2,&s3,&s4,&s5);
    total=s1+s2+s3+s4+s5;
    per=(total/500)*100;
    printf("Percentage= %.2f%%\n", per);
    if(per >= 90)
    {
        printf("Grade A");
    }
    else if(per >= 80)
    {
        printf("Grade B");
    }
    else if(per >= 70)
    {
        printf("Grade C");
    }
    else if(per >= 60)
    {
        printf("Grade D");
    }
    else if(per >= 40)
    {
        printf("Grade E");
    }
    else
    {
        printf("Grade F");
    }
    return 0;
}
*******************************************************************************************
20)Write a C program to input basic salary of an employee and calculate gross salary

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float basic,hra,da,gross;
    printf("Enter the basic salary: ");
    scanf("%f", &basic);
    if(basic<=10000){
        da=basic*0.8;
        hra=basic*0.2;
    }
    else if(basic>20000){
        da=basic*0.95;
        hra=basic*0.3;
    }
    else {
        da=basic*0.9;
        hra=basic*0.25;
    }
    gross=basic+da+hra;
    printf("Gross salary = %.2f", gross);
    return 0;
}
********************************************************************************************
