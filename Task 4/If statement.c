4)Write a C program to check whether a number is divisible by 5 and 11 or not.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if((num%5==0) && (num%11==0))
    {
        printf("%d is divisible by 5 and 11", num);
    }
    else
    {
        printf("%d is not divisible by 5 and 11", num);
    }

    return 0;
}
********************************************************************************************
7)Write a C program to check whether a character is alphabet or not.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);
    if((ch>='A') && (ch<='Z'))
    {
        printf("%c is a capital alphabet", ch);
    }
    else if((ch>='a') && (ch<='z'))
    {
        printf("%c is a small alphabet", ch);
    }
    else
    {
        printf("%c is not an alphabet", ch);
    }

    return 0;
}
*********************************************************************************************
8)Write a C program to input any alphabet and check whether it is vowel or consonant.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    printf("Enter an alphabet: ");
    scanf("%c", &ch);
    if((ch>='A'&&ch<='Z') || (ch>='a'&&ch<='z'))
    {
        if((ch=='a') || (ch=='e') || (ch=='i') || (ch=='o') || (ch=='u') ||
                (ch=='A') || (ch=='E') || (ch=='I') || (ch=='O') || (ch=='U'))
        {
            printf("%c is a vowel", ch);
        }
        else
        {
            printf("%c is a consonant", ch);
        }
    }
    else
    {
        printf("%c is not an alphabet",ch);
    }
    return 0;
}
*********************************************************************************************
12)Write a C program to input month number and print number of days in that month.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m_num;
    printf("Enter number of month: ");
    scanf("%d", &m_num);
    if(m_num==1 || m_num==3 || m_num==5 || m_num==7 ||
            m_num==8 || m_num==10 || m_num==12)
    {
        printf("31 days");
    }
    else if(m_num==4 || m_num==6 || m_num==9 || m_num==11)
    {
        printf("30 days");
    }
    else if(m_num==2)
    {
        printf("28 or 29 days");
    }
    else
    {
        printf("Not a month number");
    }
    return 0;
}
********************************************************************************************
14)Write a C program to input angles of a triangle and check whether triangle is valid or not.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int ang1,ang2,ang3;
    printf("Enter angles of triangle: ");
    scanf("%d%d%d",&ang1,&ang2,&ang3);
    if((ang1+ang2+ang3==180) && (ang1!=0) && (ang2!=0) && (ang3!=0))
       {
        printf("Valid");
    }
    else{
        printf("Invalid");
    }

    return 0;
}
********************************************************************************************
16)Write a C program to check whether the triangle is equilateral, isosceles or scalene triangle.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    unsigned int ang1,ang2,ang3;
    printf("Enter angles of triangle: ");
    scanf("%d%d%d",&ang1,&ang2,&ang3);
    if((ang1+ang2+ang3==180) && (ang1!=0) && (ang2!=0) && (ang3!=0))
    {
        if(ang1==60 && ang2==ang3)
        {
            printf("Equilateral");
        }
        else if(ang1==ang2 || ang2==ang3 || ang1==ang3)
        {
            printf("Isosceles");
        }
        else
        {
            printf("Scalene");
        }
    }
    else
    {
        printf("Invalid triangle");
    }


    return 0;
}
***********************************************************************************************
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
