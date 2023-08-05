1)Write a C program to print day of week name using switch case.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int day_n;
    printf("Enter day number: ");
    scanf("%d", &day_n);
    switch(day_n)
    {
    case 1:
        printf("Saturday");
        break;
    case 2:
        printf("Sunday");
        break;
    case 3:
        printf("Monday");
        break;
    case 4:
        printf("Tuesday");
        break;
    case 5:
        printf("Wednesday");
        break;
    case 6:
        printf("Thursday");
        break;
    case 7:
        printf("Friday");
        break;
    default:
        printf("Invalid");
    }
    return 0;
}
*********************************************************************************
7)Write a C program to find roots of a quadratic equation using switch case.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    float a, b, c, root1, root2, imaginary, discriminant;
    printf("Enter a,b,c :");
    scanf("%f%f%f", &a,&b,&c);
    discriminant = (b*b)-(4*a*c);
    if(discriminant > 0)
    {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);

        printf("Two distinct and real roots exists: %.2f and %.2f",
               root1, root2);
    }
    else
    {
        switch(discriminant < 0)
        {
        case 1:
            root1 = root2 = -b / (2 * a);
            imaginary = sqrt(-discriminant) / (2 * a);

            printf("Two distinct complex roots exists: %.2f+i%.2f and %.2f-i%.2f",
                   root1, imaginary, root2, imaginary);
            break;
        case 0:
            /* If discriminant is zero */
            root1 = root2 = -b / (2 * a);

            printf("Two equal and real roots exists: %.2f and %.2f", root1, root2);

            break;
        }
    }
    return 0;
}
****************************************************************************************
8)Write a C program to create Simple Calculator using switch case.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1,n2,result;
    char op;
    printf("Enter two operands: ");
    scanf("%f%f",&n1,&n2);
    printf("Choose the operation: ");
    scanf(" %c", &op);
    switch(op){
    case '+':
    result=n1+n2;
    break;
    case '-':
    result=n1-n2;
    break;
    case '*':
    result=n1*n2;
    break;
    case '/':
    result=n1/n2;
    break;

    default: printf("Invalid");
    }
    printf("Result= %.2f %c %.2f = %.2f", n1,op,n2,result);
    return 0;
}

