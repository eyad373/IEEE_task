#include <stdio.h>
#include <stdlib.h>
void data_print(char name[][20],int scores[][6],int num);
void data_input(char name[][20],int scores[][6],int num);
void sort_data(char name[][20],int scores[][6],int num);
void Rankings(char name[][20],int scores[][6],int num);
int main()
{
    char name[20][20];     //array to store the names
    int scores[20][6];     //array to store the test scores
    int num;
    printf("Enter the number of students......NOTE->Maximum number == 20 students :");
    scanf("%d",&num);
    data_input(name,scores,num);
	Rankings(name,scores,num);
    return 0;
}
void data_input(char name[][20],int scores[][6],int num)
{
    int i,j,sum;
    for(i=0; i<num; i++)
    {
        fflush(stdin);
        sum=0;
        printf("Enter a student name: ");
        gets(name[i]);      //to enter a student name
        printf("Enter his test scores: ");
        for(j=0; j<5; j++)  //to enter 5 test scores and the sixth element is the average
        {
            scanf("%d",&scores[i][j]);
            if(scores[i][j]>100)
            {
                printf("Invalid..Maximum score==100..Enter a valid one: ");
                scanf("%d",&scores[i][j]);
            }
            sum+=scores[i][j];
        }
        scores[i][5]=sum/5;      //Average

    }
}

void sort_data(char name[][20],int scores[][6],int num)
{
    int i,j,max,first=0,temp;          //I kind of used selsection sort to sort the students according to the average score
    for(j=0; j<num; j++)
    {
        max=num-1;
        for(i=num-2; i>=first; i--)
        {
            if(scores[i][5]>scores[max][5])
            {
                max=i;
            }
        }
        for(i=0; i<6; i++)
        {
            temp=scores[max][i];
            scores[max][i]=scores[first][i];
            scores[first][i]=temp;
        }
        for(i=0; i<20; i++)
        {
            temp=name[max][i];
            name[max][i]=name[first][i];
            name[first][i]=temp;
        }
        first++;
    }
}
void Rankings(char name[][20],int scores[][6],int num)
{           //this function is used to print the top student with the highest score and the students who failed
    sort_data(name,scores,num);
    data_print(name,scores,num);
    printf("\nOur top student->%s with the highest score %d%%\n",name[0],scores[0][5]);
    printf("Thank you for your dedication. Keep up the good work!\n");
    int i,j,flag=1;
    printf("\nWarning!! Students below have failed this semester.\nPlease work harder and good luck in the next semester.\n");
    for(i=0; i<num; i++)
    {
        for(j=0; j<6; j++)
        {
            if(scores[i][j]<50)
            {
                printf("-%s\n",name[i]);
                flag=0;
            }
        }
    }
    if(flag)
    {
        printf("NONE\n");
    }
}
void data_print(char name[][20],int scores[][6],int num)
{         //this function is used to print all the data I entered 
    printf("Name \t\t\t scores\t\n");
    int i,j;
    for(i=0; i<num; i++)
    {
        printf("%s  \t",name[i]);
        for(j=0; j<5; j++)
        {
            printf("%3d  ",scores[i][j]);
        }
        printf("Average=%d\n",scores[i][j]);
    }
}







-OUTPUT

Enter the number of students......NOTE->Maximum number == 20 students :6
Enter a student name: Fathy Anas
Enter his test scores: 90 80 85 79 92
Enter a student name: Amir Tamer
Enter his test scores: 80 75 79 82 89
Enter a student name: Eyad Essam
Enter his test scores: 90 80 86 84 189
Invalid..Maximum score==100..Enter a valid one: 89
Enter a student name: Amr Yasir
Enter his test scores: 90 85 74 89 92
Enter a student name: Eslam Nasr
Enter his test scores: 84 45 76 60 59
Enter a student name: Eyad Wael
Enter his test scores: 92 74 82 85 79
Name                     scores
Amr Yasir        90   85   74   89   92  Average=86
Fathy Anas       90   80   85   79   92  Average=85
Eyad Essam       90   80   86   84   89  Average=85
Eyad Wael        92   74   82   85   79  Average=82
Amir Tamer       80   75   79   82   89  Average=81
Eslam Nasr       84   45   76   60   59  Average=64

Our top student->Amr Yasir with the highest score 86%
Thank you for your dedication. Keep up the good work!

Warning!! Students below have failed this semester.
Please work harder and good luck in the next semester.
-Eslam Nasr