/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void func(char str[]);
void func2(char *str);

int main()
{
    // Different ways of declaring a string.
    char str[] = "Sooraj";
    printf("string is :%s \n",str);
    printf("size of string is: %lu \n", sizeof(str));          // sizeof str1 will be 7
    printf("%c \n",str[0]);
    
    char str1[] = {'s','o','o','r','a','j'};
    printf("string1 is :%s \n",str1);
    printf("size of string1 is: %lu \n", sizeof(str1));         // sizeof str1 will be 6
    printf("%c \n",str1[0]);
    
    char str2[20];
    printf("\nEnter the string:");
    scanf("%s",str2);
    printf("String2 is :%s \n",str2);
    printf("size of string2 is: %lu \n", sizeof(str2));         // sizeof str2 will be 20
    printf("%c \n",str2[5]);
    
    
    char *p = "Lenovo";
    printf("string 4 is : %s \n",p);
    printf("each char : %c \n",p[1]);
    
    // Methods of Passing strings to a function
  
    func(str);
    func2(p);
    
}

void func(char str[])
{
    printf("%s \n",str);
}

void func2(char *str)
{
    int count=0;
    while((*str)!='\0')
    {
        count++;
        str++;
    }
    printf("Count is : %d \n",count);
}

