/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    char str[] = "TNHB";
    char str2[]="HIG";
    
    char str3[30];
    int i = 0;
    int k = 0;
    
    while(str[i]!='\0')
    {
        str3[i]=str[i];
        i++;
    }
    
    while(str2[k]!='\0')
    {
        str3[i] = str2[k];
        k++;
        i++;
    }
    str3[i] = '\0';
    printf("string is : %s",str3);

    return 0;
}
