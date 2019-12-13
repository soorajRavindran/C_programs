/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char str1[] = "TNHB";
    char str2[]= "TNH";
    int i=0;
    
    while(str1[i]!='\0')
    {
        if(str1[i]!=str2[i])
        {
            printf("Strings are not equal");
            break;
        }
        i++;
    }
    
}
