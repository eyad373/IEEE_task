1)Write a C program to find length of a string.

#include <stdio.h>
#include <stdlib.h>
int string_length(char*str);
int main()
{
    char str[]="Eyad Essam";
    printf("%d",string_length(str));
    return 0;
}
int string_length(char*str)
{
    int i;
    for(i=0;str[i];i++);
    return i;
}
 -OUTPUT
 10
 ---------------------------------------------------------------------------------------
 
 2)Write a C program to copy one string to another.
 
 #include <stdio.h>
#include <stdlib.h>
void string_copy(char*str,char*strcopy);
int main()
{
    char str[]="Eyad Essam";
    char str2[50];
    string_copy(str,str2);
    printf("%s\n",str2);
    return 0;
}

void string_copy(char*str,char*strcopy)
{
    int i;
    for(i=0;str[i];i++)
    {
        strcopy[i]=str[i];
    }
    strcopy[i]=0;
}

-OUTPUT
Eyad Essam
------------------------------------------------------------------------------------------

3)Write a C program to concatenate two strings.

#include <stdio.h>
#include <stdlib.h>
int string_length(char*str);
void string_cat(char*str1,char*str2);
int main()
{
    char str1[100]="I love";
    char str2[]="codeforwin";
    string_cat(str1,str2);
    printf("%s\n",str1);
    return 0;
}
int string_length(char*str)
{
    int i;
    for(i=0;str[i];i++);
    return i;
}
void string_cat(char*str1,char*str2)
{
    int i,j=string_length(str1),k=0;
    str1[j]=' ';
    for(i=j+1;str2[k];i++)
    {
        str1[i]=str2[k];
        k++;
    }
    str1[i]=0;
}
 -OUTPUT
 I love codeforwin
 ------------------------------------------------------------------------------------------
 
 4)Write a C program to compare two strings.
 
#include <stdio.h>
#include <stdlib.h>
int string_compare(char*str1,char*str2);
int main()
{
    char str1[]="Eyad essam";
    char str2[]="Eyad Essam";
    int state= string_compare(str1,str2);
    if(state==0)
    {
        printf("Strings are equal\n");
    }
    else if(state==-1)
    {
        printf("First string is lexicographically smaller than the second\n");
    }
    else if(state==1)
    {
        printf("First string is lexicographically greater than the second\n");
    }
    return 0;
}
int string_compare(char*str1,char*str2)
{
    int i,flag=0;
    for(i=0;str1[i];i++)
    {
        if(str1[i]<str2[i])
        {
            flag=-1;
        }
        else if(str1[i]>str2[i])
        {
            flag=1;
        }
    }
    return flag;
}

-OUTPUT
First string is lexicographically greater than the second
------------------------------------------------------------------------------------------

6)Write a C program to convert uppercase string to lowercase.

#include <stdio.h>
#include <stdlib.h>
void string_Utol(char*str);
int main()
{
    char str1[]="EyaD eSSaM";
    printf("string before: %s\n",str1);
    string_Utol(str1);
    printf("string after: %s\n",str1);
    return 0;
}
void string_Utol(char*str)
{
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]-'A'+'a';
        }
    }
}

-OUTPUT
string before: EyaD eSSaM
string after: eyad essam
------------------------------------------------------------------------------------------

7)Write a C program to toggle case of each character of a string.

#include <stdio.h>
#include <stdlib.h>
void string_toggleCase(char*str);
int main()
{
    char str1[]="EyaD eSSaM";
    printf("string before: %s\n",str1);
    string_toggleCase(str1);
    printf("string after: %s\n",str1);
    return 0;
}
void string_toggleCase(char*str)
{
    int i;
    for(i=0;str[i];i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i]=str[i]-'A'+'a';
        }
        else if(str[i]>='a' && str[i]<='z')
        {
            str[i]=str[i]-'a'+'A';
        }
    }
}

-OUTPUT
string before: EyaD eSSaM
string after: eYAd EssAm
------------------------------------------------------------------------------------------

8)Write a C program to find total number of alphabets, digits or special character in a string.

#include <stdio.h>
#include <stdlib.h>
void string_count(char*str);
int main()
{
    char str1[]="Eyad 33! Essam"; 
    string_count(str1);
    return 0;
}
void string_count(char*str)
{
    int i,alpha=0,digit=0,special=0;
    for(i=0;str[i];i++)
    {
        if((str[i]>='A' && str[i]<='Z')||(str[i]>='a' && str[i]<='z'))
        {
            alpha++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digit++;
        }
        else
        {
            special++;
        }
    }
    printf("No of alphabets= %d\nNo of digits= %d\nNo of special char= %d\n",alpha,digit,special);
}
 
 -OUTPUT
No of alphabets= 9
No of digits= 2
No of special char= 3
------------------------------------------------------------------------------------------

11)Write a C program to find reverse of a string.

#include <stdio.h>
#include <stdlib.h>
int string_length(char*str);
void string_reverse(char*str,char*reverse);
int main()
{
    char str1[]="Ey!ad E3ssam";
    char str_reverse[20];
    string_reverse(str1,str_reverse);
    printf("String: %s\nReversed: %s",str1,str_reverse);
    return 0;
}
int string_length(char*str)
{
    int i;
    for(i=0;str[i];i++);
    return i;
}
void string_reverse(char*str, char*reverse)
{
    int i,j=string_length(str)-1;
    for(i=0;str[i];i++)
    {
        reverse[i]=str[j];
        j--;
    }
    reverse[i]=0;
}

-OUTPUT
String: Ey!ad E3ssam
Reversed: mass3E da!yE
------------------------------------------------------------------------------------------

12)Write a C program to check whether a string is palindrome or not.

#include <stdio.h>
#include <stdlib.h>
int string_len(char*str);
int string_palindrome(char*str);
int main()
{
    char str[]="salas";
    if(string_palindrome(str))
    {
        printf("Palindrome String\n");
    }
    else
    {
        printf("Not a palindrome string");
    }
    return 0;
}
int string_len(char*str)
{
    int i;
    for(i=0; str[i]; i++);
    return i;
}
int string_palindrome(char*str)
{
    int flag=1,i,j=string_len(str)-1;
    for(i=0; i<=j; i++)
    {
        if(str[i]!=str[j])
        {
            flag=0;
        }
        j--;
    }
    return flag;
}

 -OUTPUT
 Palindrome String
 ------------------------------------------------------------------------------------------
 
 14)Write a C program to find first occurrence of a character in a given string.
 
 #include <stdio.h>
#include <stdlib.h>
int string_fstoccur(char*str,char ch);
int main()
{
    char str[]="Eyad Essam";
    char ch;
    printf("Enter the character you searching for: ");
    scanf("%c",&ch);
    int index = string_fstoccur(str,ch);
    if(index != -1)
        printf("Character %c is first found at index %d",ch,index);
    else
        printf("NOT FOUND");
    return 0;
}
int string_fstoccur(char*str,char ch)
{
    int i;
    for(i=0; str[i]; i++)
    {
        if(str[i]==ch)
        {
            return i;
        }
    }
    return -1;
}

-OUTPUT
Enter the character you searching for: a
Character a is first found at index 2
------------------------------------------------------------------------------------------

15)Write a C program to find last occurrence of a character in a given string.

#include <stdio.h>
#include <stdlib.h>
int string_len(char*str);
int string_lastoccur(char*str,char ch);
int main()
{
    char str[]="Eyad Essam";
    char ch;
    printf("Enter the character you searching for: ");
    scanf("%c",&ch);
    int index = string_lastoccur(str,ch);
    if(index != -1)
        printf("Character %c is last found at index %d",ch,index);
    else
        printf("NOT FOUND");
    return 0;
}
int string_len(char*str)
{
    int i;
    for(i=0; str[i]; i++);
    return i;
}
int string_lastoccur(char*str,char ch)
{
    int i,j=string_len(str)-1;
    for(i=j; i>=0; i--)
    {
        if(str[i]==ch)
        {
            return i;
        }
    }
    return -1;
}
 -OUTPUT
Enter the character you searching for: a
Character a is last found at index 8
------------------------------------------------------------------------------------------

16)Write a C program to search all occurrences of a character in given string.

#include <stdio.h>
#include <stdlib.h>
int* string_alloccur(char*str,char ch,int*size);
void array_print(int*arr,const int size);
int main()
{
    char str[]="Eyad Essam";
    char ch;
    int arr_size;
    printf("Enter the character you searching for: ");
    scanf("%c",&ch);
    int*arr=string_alloccur(str,ch,&arr_size);
    if(arr_size)
    {
        printf("Character %c found at index ",ch);
        array_print(arr,arr_size);
    }
    else
    {
        printf("NOT FOUND");
    }
    return 0;
}
int* string_alloccur(char*str,char ch,int*size)
{
    static int arr[50];
    int i;
    *size=0;
    for(i=0; str[i]; i++)
    {
        if(str[i]==ch)
        {
            arr[*size]=i;
            (*size)++;
        }
    }
    return arr;
}
void array_print(int*arr,const int size)
{
    int i;
    printf("[");
    for(i=0;i<size;i++)
    {
        printf("%d",arr[i]);
        if(i!=(size-1))
        {
            printf(",");
        }
    }

    printf("]\n");
}

-OUTPUT
Enter the character you searching for: a
Character a found at index [2,8]
------------------------------------------------------------------------------------------

20)Write a C program to count frequency of each character in a string.

#include <stdio.h>
#include <stdlib.h>
void string_frequency(char*str,int*freq);
void freqArray_print(int*freq);
int main()
{
    char str[]="Eyad Essam";
    int freq[26]= {0};
    string_frequency(str,freq);
    freqArray_print(freq);
    return 0;
}
void string_frequency(char*str,int*freq)
{
    int i;
    for(i=0; str[i]; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            freq[str[i]-'a']++;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            freq[str[i]-'A']++;
        }
    }
}
void freqArray_print(int*freq)
{
    int i;
    for(i=0;i<26;i++)
    {
        if(freq[i])
        {
            printf("%c or %c  = %d\n",i+'a',i+'A',freq[i]);
        }
    }
}

-OUTPUT
a or A  = 2
d or D  = 1
e or E  = 2
m or M  = 1
s or S  = 2
y or Y  = 1
------------------------------------------------------------------------------------------

23)Write a C program to remove all occurrences of a character from string.

#include <stdio.h>
#include <stdlib.h>
void string_removeChar(char*str,char ch);
int main()
{
    char str[]="Eyad Essam";
    string_removeChar(str,'a');
    printf("%s",str);
    return 0;
}
void string_removeChar(char*str,char ch)
{
    int i,j;
    for(i=0; str[i]; i++)
    {
        if(str[i]==ch)
        {
            for(j=i; str[j]; j++)
            {
                str[j]=str[j+1];
            }
            i--;
        }
    }
}

-OUTPUT
Eyd Essm
------------------------------------------------------------------------------------------

28)Write a C program to find first occurrence of a word in a given string.

#include <stdio.h>
#include <stdlib.h>
int string_wordSearch(char*str,char*word);
int string_len(char*str);
int main()
{
    char str[]="I love codeforwin";
    char*word="love";
    int index = string_wordSearch(str,word);
    if(index != -1)
        printf("The word %s is first located at index %d",word,index);
    else
        printf("NOT FOUND");
    return 0;
}
int string_len(char*str)
{
    int i;
    for(i=0; str[i]; i++);
    return i;
}
int string_wordSearch(char*str,char*word)
{
    int i,j=0,index,k=string_len(str);
    for(i=0; word[j]; i++)
    {
        if(str[i]==word[j])
        {
            j++;
            index=i;
        }
        else
        {
            j=0;
        }
        if(i>=k)
        {
            return -1;
        }
    }
    return (index-string_len(word)+1);
}

-OUTPUT
The word love is first located at index 2
------------------------------------------------------------------------------------------

35)Write a C program to trim leading white space characters from given string.

#include <stdio.h>
#include <stdlib.h>
void trim_leadSpace(char*str);
int main()
{
    char str[]="     Eyad Essam";
    trim_leadSpace(str);
    printf("%s",str);
    return 0;
}
void trim_leadSpace(char*str)
{
    int c,i=0;
    for(c=0; str[c]==' '; c++);
    if(c!=0)
    {
        while(str[i+c])
        {
            str[i]=str[i+c];
            i++;
        }
        str[i]=0;
    }
}

-OUTPUT
Eyad Essam
