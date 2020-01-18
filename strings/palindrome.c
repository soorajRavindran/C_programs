/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <string.h>
int pal(char *p1,int len);

int main()
{
    int flag;
    char str[20]="SaaS";
    int len = strlen(str);
    flag=pal(str,(len-1));
    if(flag)
    {
        printf("palindrome \n");
    }
    else
    {
        printf("Not palindrome \n");
    }
}

int pal(char *p1,int len)
{
    int i=0;
    while(len)
    {
        if(p1[i]!=p1[len])
        {
            return 0;
        }
        
        i++;
        len--;
    }
    return 1;
}
