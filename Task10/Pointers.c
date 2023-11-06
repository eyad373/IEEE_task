5) Write a C program to copy one array to another using pointers.

#include <stdio.h>
#include <stdlib.h>
void array_copy(int*arr,const int size,int*arr_cpy);
void array_print(int*arr,const int size);
int main()
{
    int arr[]={0,64,10,-1,5,9,500,15,-10,-99,2,3,4,5,6};
    int size=sizeof(arr)/sizeof(arr[0]);
    int arr2[20];
    printf("arr1: ");
    array_print(arr,size);
    array_copy(arr,size,arr2);
    printf("arr2: ");
    array_print(arr2,size);
    return 0;
}
void array_copy(int*arr,const int size,int*arr_cpy)
{
    int*parr=arr;
    int*pcpy=arr_cpy;
    for(int i=0;i<size;i++)
    {
        *pcpy=*parr;
        parr++;
        pcpy++;
    }
}
void array_print(int*arr,const int size)
{
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

-OUTPUT
arr1: 0 64 10 -1 5 9 500 15 -10 -99 2 3 4 5 6
arr2: 0 64 10 -1 5 9 500 15 -10 -99 2 3 4 5 6
---------------------------------------------------------------------------------------------

6)Write a C program to swap two arrays using pointers.

#include <stdio.h>
#include <stdlib.h>
void array_print(int*arr,const int size);
void array_swap(int*arr1,int*s1,int*arr2,int*s2);
void swap(int*p1,int*p2);
int main()
{
    int arr1[]={1,2,3,4,5,6};
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int arr2[]={10,20,30,40,50,60,70,80};
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    printf("Before swapping\narr1: ");
    array_print(arr1,size1);
    printf("arr2: ");
    array_print(arr2,size2);
    array_swap(arr1,&size1,arr2,&size2);
    printf("After swapping\narr1: ");
    array_print(arr1,size1);
    printf("arr2: ");
    array_print(arr2,size2);
    return 0;
}
void array_swap(int*arr1,int*s1,int*arr2,int*s2)
{
    int*parr1=arr1;
    int*parr1end=arr1+(*s1)-1;
    int*parr2=arr2;
    int*parr2end=arr2+(*s2)-1;
    while(parr1<=parr1end || parr2<=parr2end)
    {
        swap(parr1,parr2);
        parr1++;
        parr2++;
    }
    swap(s1,s2);
}
void array_print(int*arr,const int size)
{
    int*arrend =arr+size-1;
    while(arr<=arrend)
    {
        printf("%d ",*(arr++));
    }
    printf("\n");
}
void swap(int*p1,int*p2)
{
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}

-OUTPUT
Before swapping
arr1: 1 2 3 4 5 6
arr2: 10 20 30 40 50 60 70 80
After swapping
arr1: 10 20 30 40 50 60 70 80
arr2: 1 2 3 4 5 6
---------------------------------------------------------------------------------------------

7)Write a C program to reverse an array using pointers.

#include <stdio.h>
#include <stdlib.h>
void array_print(int*arr,const int size);
void array_reverse(int*arr,const int size);
void swap(int*p1,int*p2);
int main()
{
    int arr1[]={50,-8,7,-5,0,1,2,3,4,5,6};
    int size=sizeof(arr1)/sizeof(arr1[0]);
    array_print(arr1,size);
    array_reverse(arr1,size);
    array_print(arr1,size);
    return 0;
}
void array_reverse(int*arr,const int size)
{
    int*arr_start=arr;
    int*arr_end=arr+size-1;
    while(arr_start<=arr_end)
    {
        swap(arr_start,arr_end);
        arr_start++;
        arr_end--;
    }
}
void array_print(int*arr,const int size)
{
    int*arr_end =arr+size-1;
    while(arr<=arr_end)
    {
        printf("%d ",*(arr++));
    }
    printf("\n");
}
void swap(int*p1,int*p2)
{
    int temp;
    temp=*p1;
    *p1=*p2;
    *p2=temp;
}

-OUTPUT
50 -8 7 -5 0 1 2 3 4 5 6
6 5 4 3 2 1 0 -5 7 -8 50 
---------------------------------------------------------------------------------------------

8)Write a C program to search an element in array using pointers.

#include <stdio.h>
#include <stdlib.h>
int array_search(int*arr,const int size,const int num);
int main()
{
    int num,index,arr1[]={50,-8,7,-5,0,1,2,3,4,5,6};
    int size=sizeof(arr1)/sizeof(arr1[0]);
    printf("Enter a number to search for: ");
    scanf("%d",&num);
    index =array_search(arr1,size,num);

    if(index!=-1)
    {
        printf("%d is found at index %d\n",num,index);
    }
    else
    {
        printf("Not found");
    }
    return 0;
}
int array_search(int*arr,const int size,const int num)
{
    int index =0;
    int*arr_end=arr+size-1;
    int*parr=arr;
    while(parr<=arr_end)
    {
        if(*parr==num)
        {
            return index;
        }
        index++;
        parr++;
    }
    return -1;
}

-OUTPUT
Enter a number to search for: 0
0 is found at index 4
---------------------------------------------------------------------------------------------

11)Write a C program to multiply two matrix using pointers.

#include <stdio.h>
#include <stdlib.h>
#define ROW 2
#define COL 2
void array2D_print(int arr[][COL]);
void matrix_mul(int arr1[][COL],int arr2[][COL],int arr_mul[][COL]);
int main()
{
    int arr1[][COL]={{1,2},
                    {3,4}};
    int arr2[][COL]={{10,20},
                    {30,40}};
    int arr3[ROW][COL];
    matrix_mul(arr1,arr2,arr3);
    array2D_print(arr3);
    return 0;
}
void matrix_mul(int arr1[][COL],int arr2[][COL],int arr_mul[][COL])
{
    int i,j,k,sum;
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            sum=0;
            for(k=0;k<COL;k++)
            {
                sum+= *(*(arr1+i)+k) * *(*(arr2+k)+j);
            }
            *(*(arr_mul+i)+j)=sum;
        }

    }
}
void array2D_print(int arr[][COL])
{
    int i,j;
    for(i=0;i<ROW;i++)
    {
        for(j=0;j<COL;j++)
        {
            printf("%3d ",*(*(arr+i)+j));
        }
        printf("\n");
    }
}

-OUTPUT
 70 100
150 220
---------------------------------------------------------------------------------------------

12)Write a C program to find length of string using pointers.

#include <stdio.h>
#include <stdlib.h>
int string_len(char*str);
int main()
{
    char*str="Eyad Essam";
    printf("size of string = %d",string_len(str));
    return 0;
}
int string_len(char*str)
{
    int size=0;
    while(*str!=0)
    {
        size++;
        str++;
    }
    return size;
}
 -OUTPUT
 size of string = 10
 ---------------------------------------------------------------------------------------------

14)Write a C program to concatenate two strings using pointers.

#include <stdio.h>
#include <stdlib.h>
int string_len(char*str);
void string_cat(char*str1,char*str2);
int main()
{
    char str1[100]="I love";
    char str2[]="codeforwin";
    string_cat(str1,str2);
    printf("%s\n",str1);
    return 0;
}
void string_cat(char*str1,char*str2)
{
    int j=string_len(str1),i=j+1;
    *(str1+j)=' ';
    while(*str2 != 0)
    {
        *(str1+i)=*(str2++);
        i++;
    }
    *(str1+i)=0;
}
int string_len(char*str)
{
    int size=0;
    while(*str!=0)
    {
        size++;
        str++;
    }
    return size;
}

-OUTPUT
I love codeforwin
---------------------------------------------------------------------------------------------

16)Write a C program to find reverse of a string using pointers.

#include <stdio.h>
#include <stdlib.h>
int string_len(char*str);
void string_reverse(char*str, char*reverse);
int main()
{
    char str1[]="Ey!ad E3ssam";
    char str_reverse[20];
    string_reverse(str1,str_reverse);
    printf("String: %s\nReversed: %s",str1,str_reverse);
    return 0;
}
void string_reverse(char*str, char*reverse)
{
    char*str_end=str+string_len(str);
    while(str!=str_end)
    {
        *(reverse++)=*(--str_end);
    }
    *reverse=0;
}
int string_len(char*str)
{
    int size=0;
    while(*str!=0)
    {
        size++;
        str++;
    }
    return size;
}

 -OUTPUT
 String: Ey!ad E3ssam
Reversed: mass3E da!yE
---------------------------------------------------------------------------------------------

17)Write a C program to sort array using pointers.


---------------------------------------------------------------------------------------------

18)Write a C program to return multiple value from function using pointers.

#include <stdio.h>
#include <stdlib.h>
void array_max_min(int*arr,const int size,int*max,int*min);
int main()
{
    int arr[]={15,5,6,5,8,2,-10,5,7,4};
	int size=sizeof(arr)/sizeof(arr[0]);
    int max,min;
    array_max_min(arr,size,&max,&min);
    printf("Max element = %d , Min element = %d\n",max,min);

    return 0;
}

void array_max_min(int*arr,const int size,int*max,int*min)
{
    int i;
    *max=arr[0];
    *min=arr[0];
    for(i=0;i<size;i++)
    {
        if(*max<=arr[i])
        {
            *max=arr[i];
        }
        if(*min>=arr[i])
        {
            *min=arr[i];
        }
    }
}

-OUTPUT
Max element = 15 , Min element = -10