1, 3, 5, 8, 9, 13, 15, 16, 19, 24, 27, 30, 37, 40
1)Write a C program to read and print elements of array. – using recursion.
	
#include <stdio.h>
#include <stdlib.h>
void array_scan(int*arr,int i,int size);
void array_print(int*arr,int i,int size);
int main()
{
    int size,arr[100];
    printf("Enter number of elements: ");
    scanf("%d",&size);
    printf("Enter the elements: ");
    array_scan(arr,0,size);
    array_print(arr,0,size);
    return 0;
}
void array_scan(int*arr,int i,int size)
{
    if(i>=size)
    {
        return;
    }
    scanf("%d",&arr[i]);
    array_scan(arr,i+1,size);
}
void array_print(int*arr,int i,int size)
{
    if(i>=size)
    {
        return;
    }
    printf("%d ",arr[i]);
    array_print(arr,i+1,size);
}

-OUTPUT
Enter number of elements: 5
Enter the elements: 1
3
5
7
9
1 3 5 7 9

/***************************************************************************************************/

3)Write a C program to find sum of all array elements. – using recursion.

#include <stdio.h>
#include <stdlib.h>
int array_sum(int*arr,int i,int size);
int main()
{
    int arr[]={1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int sum =array_sum(arr,0,size);
    printf("Sum of array elements = %d",sum);
    return 0;
}
int array_sum(int*arr,int i,int size)
{
    if(i>=size)
    {
        return 0;
    }
    return (arr[i]+array_sum(arr,i+1,size));
}

 -OUTPUT
Sum of array elements = 15

/***************************************************************************************************/

5)Write a C program to find second largest element in an array.

int array_secondMax(int*arr,int size);
int main()
{
    int arr[]={1,2,3,0,4,5,0,5,7,7,8,8,8,-5,-7};
    int size=sizeof(arr)/sizeof(arr[0]);
    int smax =array_secondMax(arr,size);
    printf("Second max in array = %d",smax);
    return 0;
}
int array_secondMax(int*arr,int size)
{
    int i,max=arr[0],smax=arr[0];
    for(i=0;i<size;i++)
    {
        if(arr[i]>max)
        {
            smax=max;
            max=arr[i];
        }
        else if(arr[i]>smax && arr[i]<max)
        {
            smax=arr[i];
        }
    }
    return smax;
}

method 2:  

#include <stdio.h>
#include <stdlib.h>
int array_secondMax(int*arr,int size);
void swap(int*n1,int*n2);
void array_sort(int*arr,int size);
int main()
{
    int arr[]={1,2,3,0,4,5,0,5,7,7,8,8,8,-5,-7};
    int size=sizeof(arr)/sizeof(arr[0]);
    int smax =array_secondMax(arr,size);
    printf("Second max in array = %d\n",smax);
    return 0;
}
void swap(int*n1,int*n2)
{
    int temp=*n1;
    *n1=*n2;
    *n2=temp;
}
void array_sort(int*arr,int size)
{
    int i,j;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(arr[i]<arr[j])
            {
                swap(&arr[i],&arr[j]);
            }
        }
    }
}
int array_secondMax(int*arr,int size)
{
    int i,max,smax;
    array_sort(arr,size);
    max=arr[0];
    for(i=0;max==arr[i];i++);
    smax=arr[i];
    return smax;
}

-OUTPUT
Second max in array = 7

/***************************************************************************************************/

8)Write a C program to copy all elements from an array to another array.

#include <stdio.h>
#include <stdlib.h>
void array_copy(int*arr,int size,int*arr2);
void array_print(int*arr,int size);
int main()
{
    int arr1[]={1,2,3,0,4,5,0,5,7,7,8,8,8,-5,-7};
    int arr2[100];
    int size=sizeof(arr1)/sizeof(arr1[0]);
    array_copy(arr1,size,arr2);
    printf("arr1: ");
    array_print(arr1,size);
    printf("arr2: ");
    array_print(arr2,size);
    return 0;
}
void array_copy(int*arr1,int size,int*arr2)
{
    int i;
    for(i=0;i<size;i++)
    {
        arr2[i]=arr1[i];
    }
}
void array_print(int*arr,int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

-OUTPUT
arr1: 1 2 3 0 4 5 0 5 7 7 8 8 8 -5 -7
arr2: 1 2 3 0 4 5 0 5 7 7 8 8 8 -5 -7
/***************************************************************************************************/

9)Write a C program to insert an element in an array.

#include <stdio.h>
#include <stdlib.h>
void array_insertElement(int*arr,int*size,int element,int index);
void array_print(int*arr,int size);
int main()
{
    int arr[]={0,1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("before: ");
    array_print(arr,size);
    array_insertElement(arr,&size,10,2);
    printf("After:  ");
    array_print(arr,size);
    return 0;
}
void array_insertElement(int*arr,int*size,int element,int index)
{
    if(index>=*size)
    {
        printf("Invalid\n");
        return;
    }
    int i;
    (*size)++;
    for(i=*size-1;i>index;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[index]=element;
}
void array_print(int*arr,int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

-OUTPUT
if the position I entered >= size of array
    before: 0 1 2 3 4 5
    Invalid
    After:  0 1 2 3 4 5

else
	before: 0 1 2 3 4 5
    After:  0 1 10 2 3 4 5

/***************************************************************************************************/

13)Write a C program to count total number of duplicate elements in an array.

#include <stdio.h>
#include <stdlib.h>
int array_duplicateCount(int*arr,int size);
int main()
{
    int arr[]={1,10,20,1,25,1,10,30,25,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    int dupCount=array_duplicateCount(arr,size);
    printf("Total number of duplicates = %d",dupCount);
    return 0;
}
int array_duplicateCount(int*arr,int size)
{
    int i,j,c=0,flag;
    for(i=0;i<size;i++)
    {
        flag=1;
        for(j=i+1;j<size && flag;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
                flag=0;
            }
        }
    }
    return c;
}

-OUTPUT
Total number of duplicates = 5

/***************************************************************************************************/

15)Write a C program to merge two array to third array.

#include <stdio.h>
#include <stdlib.h>
void array_merge(int*arr1,int s1,int*arr2,int s2,int*new_arr);
void array_print(int*arr,int size);
int min(int s1,int s2);
int main()
{
    int arr1[]= {1,2,3,4,5};
    int arr2[]= {11,12,13,14,15,16,17,18};
    int arr3[100];
    int size1=sizeof(arr1)/sizeof(arr1[0]);
    int size2=sizeof(arr2)/sizeof(arr2[0]);
    array_merge(arr1,size1,arr2,size2,arr3);
    array_print(arr3,size1+size2);
    return 0;
}
int min(int s1,int s2)
{
    if(s1<s2)
    {
        return s1;
    }
    return s2;
}
void array_merge(int*arr1,int s1,int*arr2,int s2,int*new_arr)
{
    int i,j=0,size=s1+s2;
    int s=min(s1,s2);
    for(i=0; i<s*2; i++)
    {
        if(i%2==0)
        {
            new_arr[i]=arr1[j];
        }
        else
        {
            new_arr[i]=arr2[j];
            j++;
        }
    }
    if(s1>s2)
    {
        for(; i<size; i++)
        {
            new_arr[i]=arr1[j];
            j++;
        }
    }
    else if(s2>s1)
    {
        for(; i<size; i++)
        {
            new_arr[i]=arr2[j];
            j++;
        }
    }


}
void array_print(int*arr,int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
-OUTPUT
1 11 2 12 3 13 4 14 5 15 16 17 18

/***************************************************************************************************/

16)Write a C program to find reverse of an array.

#include <stdio.h>
#include <stdlib.h>
void swap(int*n1,int*n2);
void array_print(int*arr,int size);
void array_reverse(int*arr,int size);
int main()
{
    int arr[]= {1,2,3,4,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    array_print(arr,size);
    array_reverse(arr,size);
    array_print(arr,size);
    return 0;
}
void swap(int*n1,int*n2)
{
    int temp=*n1;
    *n1=*n2;
    *n2=temp;
}
void array_reverse(int*arr,int size)
{
    int i,j=size-1;
    for(i=0;i<=j;i++)
    {
        swap(&arr[i],&arr[j]);
        j--;
    }
}
void array_print(int*arr,int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}
 -OUTPUT
1 2 3 4 5
5 4 3 2 1

/***************************************************************************************************/

19)Write a C program to sort array elements in ascending or descending order.

#include <stdio.h>
#include <stdlib.h>
void swap(int*n1,int*n2);
void array_print(int*arr,int size);
void array_descending(int*arr,int size);
void array_ascending(int*arr,int size);
int main()
{
    int n,arr[]= {5,4,1,9,8,-6,0,4,7,-6,-1,1,0,4,7,8,9,-5,5,1,44,7,8,90,10};
    int size=sizeof(arr)/sizeof(arr[0]);
    array_print(arr,size);
    printf("1 for descending, 2 for ascending: ");
    scanf("%d",&n);
    switch(n)
    {
    case 1:
    {
        array_descending(arr,size);
        printf("Descending order: ");
        array_print(arr,size);
    }
    break;
    case 2:
    {
        printf("Ascending order:  ");
        array_ascending(arr,size);
        array_print(arr,size);
    }
    break;
    default:
        printf("Enter valid number\n");
    }

    return 0;
}
void swap(int*n1,int*n2)
{
    int temp=*n1;
    *n1=*n2;
    *n2=temp;
}
void array_descending(int*arr,int size)
{
    int i,j;
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[i]<arr[j])
            {
                swap(&arr[i],&arr[j]);
            }
        }
    }
}
void array_ascending(int*arr,int size)
{
    int i,j;
    for(i=0; i<size; i++)
    {
        for(j=i+1; j<size; j++)
        {
            if(arr[i]>arr[j])
            {
                swap(&arr[i],&arr[j]);
            }
        }
    }
}
void array_print(int*arr,int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

-OUTPUT
5 4 1 9 8 -6 0 4 7 -6 -1 1 0 4 7 8 9 -5 5 1 44 7 8 90 10
1 for descending, 2 for ascending: 1
Descending order: 90 44 10 9 9 8 8 8 7 7 7 5 5 4 4 4 1 1 1 0 0 -1 -5 -6 -6

1 for descending, 2 for ascending: 2
Ascending order:  -6 -6 -5 -1 0 0 1 1 1 4 4 4 5 5 7 7 7 8 8 8 9 9 10 44 90

/***************************************************************************************************/

24)Write a C program to subtract two matrices.

#include <stdio.h>
#include <stdlib.h>
void array2D_print(int arr[][3],int row,int col);
void array2D_subtract(int arr1[][3],int arr2[][3],int sub[][3],int row,int col);
int main()
{
    int arr1[3][3]={{1,2,3},
                   {4,5,6},
                   {7,8,9}};
    int arr2[3][3]={{3,9,1},
                    {6,0,20},
                    {2,7,10}};
    int sub[3][3];
    array2D_subtract(arr1,arr2,sub,3,3);
    array2D_print(sub,3,3);
    return 0;
}
void array2D_subtract(int arr1[][3],int arr2[][3],int sub[][3],int row,int col)
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            sub[i][j]=arr1[i][j]-arr2[i][j];
        }
    }
}
void array2D_print(int arr[][3],int row,int col)
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%3d ",arr[i][j]);
        }
        printf("\n");
    }
}

 -OUTPUT
 -2  -7   2
 -2   5 -14
  5   1  -1
  
/***************************************************************************************************/
 
27)Write a C program to check whether two matrices are equal or not.
 
#include <stdio.h>
#include <stdlib.h>
int array2D_compare(int arr1[][3],int arr2[][3],int row,int col);
int main()
{
    int arr1[3][3]={{1,2,3},
                    {4,5,6},
                    {7,8,9}};
    int arr2[3][3]={{1,2,3},
                    {4,0,6},
                    {7,8,9}};
    if(array2D_compare(arr1,arr2,3,3))
    {
        printf("Matrices are equal\n");
    }
    else
    {
        printf("Matrices are not equal\n");
    }
    return 0;
}
int array2D_compare(int arr1[][3],int arr2[][3],int row,int col)
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(arr1[i][j]!=arr2[i][j])
            {
                return 0;
            }
        }
    }
    return 1;
}

-OUTPUT
Matrices are not equal

/***************************************************************************************************/

30)Write a C program to find sum of each row and column of a matrix.

#include <stdio.h>
#include <stdlib.h>
void matrix_rowSum(int arr[][3],int row,int col);
void matrix_columnSum(int arr[][3],int row,int col);
int main()
{
    int arr[3][3]={{1,2,3},
                   {4,5,6},
                   {7,8,9}};
    matrix_rowSum(arr,3,3);
    matrix_columnSum(arr,3,3);

    return 0;
}

void matrix_rowSum(int arr[][3],int row,int col)
{
    int i,j,sum;
    printf("Sum of each row: ");
    for(i=0;i<row;i++)
    {
        sum=0;
        for(j=0;j<col;j++)
        {
            sum+=arr[i][j];
        }
        printf("%d ",sum);
    }
    printf("\n");
}
void matrix_columnSum(int arr[][3],int row,int col)
{
    int i,j,sum;
    printf("Sum of each column: ");
    for(i=0;i<row;i++)
    {
        sum=0;
        for(j=0;j<col;j++)
        {
            sum+=arr[j][i];
        }
        printf("%d ",sum);
    }
    printf("\n");
}

-OUTPUT
Sum of each row: 6 15 24
Sum of each column: 12 15 18

/***************************************************************************************************/

37)Write a C program to find determinant of a matrix.

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int row,col,det;
    printf("Enter row size: ");
    scanf("%d",&row);
    printf("Enter column size: ");
    scanf("%d",&col);
    int arr[row][col];
    printf("Enter elements of matrix: ");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    if(row==col)
    {
        if(row==2)
        {
            det=(arr[0][0]*arr[1][1])-(arr[0][1]*arr[1][0]);
        }
        else if(row==3)
        {
            det=(arr[0][0]*(arr[1][1]*arr[2][2]-arr[1][2]*arr[2][1]))-
                (arr[0][1]*(arr[1][0]*arr[2][2]-arr[1][2]*arr[2][0]))+
                (arr[0][2]*(arr[1][0]*arr[2][1]-arr[1][1]*arr[2][0]));
        }
    }
    else
    {
        printf("Invalid....Not a square matrix");
    }
    printf("Determinant = %d",det);
    return 0;
}

-OUTPUT
Enter row size: 3
Enter column size: 3
Enter elements of matrix: 6
1
1
4
-2
5
2
8
7
Determinant = -306

/***************************************************************************************************/

40)C program to check symmetric matrix

#include <stdio.h>
#include <stdlib.h>
int matrixIsSymmetric(int arr[][3],int row);
int main()
{
    int arr[3][3]={{1,2,3},
                   {2,5,9},
                   {3,9,8}};
    if(matrixIsSymmetric(arr,3))
    {
        printf("Matrix is symmetric");
    }
    else
    {
        printf("Matrix is not symmetric");
    }

    return 0;
}
int matrixIsSymmetric(int arr[][3],int row)
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;i!=j;j++)
        {
            if(arr[i][j]!=arr[j][i])
            {
                return 0;
            }
        }
    }
    return 1;
}

-OUTPUT
Matrix is symmetric

method2 -------------------------------------


#include <stdio.h>
#include <stdlib.h>

void matrix_transpose(int arr[][3],int arrT[][3],int row,int col);
int array2D_compare(int arr1[][3],int arr2[][3],int row,int col);

int main()
{
    int arr[3][3]={{1,2,3},
                   {2,4,5},
                   {3,5,8}};
    int arrT[3][3];
    matrix_transpose(arr,arrT,3,3);
    if(array2D_compare(arr,arrT,3,3))
    {
        printf("Matrix is symmetric");
    }
    else
    {
        printf("Matrix is not symmetric");
    }
    return 0;
}
void matrix_transpose(int arr[][3],int arrT[][3],int row,int col)
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            arrT[i][j]=arr[j][i];
        }
    }
}
int array2D_compare(int arr1[][3],int arr2[][3],int row,int col)
{
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(arr1[i][j]!=arr2[i][j])
            {
                return 0;
            }
        }
    }
    return 1;
}