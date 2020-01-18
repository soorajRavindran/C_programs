/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int stringCompare(char *str1, char *str2);

int main()
{
    char str1[] = "TNHB";
    char str2[]= "TNHBE";
    int cmp,i=0;
    
    while(str1[i]!='\0')
    {
        if(str1[i]!=str2[i])
        {
            printf("Strings are not equal \n");
            break;
        }
        i++;
    }
    
    if(str2[i]!='\0')
    {
        printf("Strings are not equal \n");
    }
    
    cmp = stringCompare(str1,str2);
    
    if(cmp)
    {
        if(cmp>0)
        {
            printf("string are not equal and str1 is higher \n");
        }
        else
        {
            printf("string are not equal and str1 is lesser \n");
        }
        
    }
    else
    {
        printf("Strings are equal \n");
    }
    
}

int stringCompare(char *str1, char *str2)
{
    while(*str1!='\0')
    {
        if(*str1!=*str2)
        {
            return str1-str2;
        }
        str1++;
        str2++;
    }
    
    if(*str2!='\0')
    {
        return str1-str2;
    }
    
    return 0;
    
}
