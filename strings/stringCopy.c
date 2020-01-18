/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void stringCopy(char *p1,char *p2);

int main()
{
    char str[20] = "TNHB";
    char str2[20]="HIG";
    int i;
    
    while(str2[i]!='\0')
    {
        str[i]=str2[i];
        i++;
    }
    str[i]='\0';
    printf("string is : %s \n",str);
    
    stringCopy(str,str2);

    return 0;
}

void stringCopy(char *str1,char *p2)
{
    char *p1=str1;
    while(*p2!='\0')
    {
       *p1=*p2;
       p1++;
       p2++;
    }
    *p1='\0';
    
    printf("string is :%s \n",str1);
}
