/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

void func(char str[]);

int main()
{
    // Different ways of declaring a string.
    char str[] = "Sooraj";
    printf("%s \n",str);
    printf("%lu \n", sizeof(str));          // sizeof str1 will be 7
    printf("%c \n",str[0]);
    
    char str1[] = {'s','o','o','r','a','j'};
    printf("%s \n",str1);
    printf("%lu \n", sizeof(str1));         // sizeof str1 will be 6
    printf("%c \n",str1[0]);
    
    char str2[20];
    printf("\nEnter the string:");
    scanf("%s",str2);
    printf("String is :%s \n",str2);
    printf("%lu \n", sizeof(str2));         // sizeof str2 will be 20
    printf("%c \n",str2[5]);
    
    // Passing strings to function
    
    func(str);
    
}

void func(char str[])
{
    printf("%s \n",str);
}
