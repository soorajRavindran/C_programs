/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>

void reverse(char* str);
void reverse2(char* str);

int main()
{
    char str[]="My name is sooraj";
    reverse(str);
    reverse2(str);

    return 0;
}
void reverse(char* str)
{
    char p[20];
    int length = strlen(str);
    int i =0;
    printf("reverse : Length of string is : %d  \n", length);
    
    while(str[i]!='\0')
    {
        p[i]=str[length-1];
        i++;
        length--;
    }
    p[i]='\0';
    printf("reverse string is : %s \n", p);
    
}

void reverse2(char* str)
{
    char tmp;
    int length = strlen(str);
    int i =0,j= length-1;
    printf("reverse2 : Length of string is : %d  \n", length);
    
    while(i<=j)
    {
        tmp = str[j];
        str[j]=str[i];
        str[i]=tmp;
        i++;
        j--;
    }
    printf("reverse2 : reverse string is : %s", str);
    //reverseLetters(str);
}

void reverseLetters(char* str)
{
    int len = strlen(str);
    
    int wStart,wEnd;
    
    wStart = wEnd = 0;
    
    while(wEnd<len)
    {
        if(str[wEnd]!=' ')
        {
           continue; 
        }
        reverse(wStart,wEnd)
        wEnd++;
    }
    
}
