#include <stdio.h>
#define A 10
#define B 20

int main()
{
    printf("%d %d %d", A, B, 30);

    return 0;
}

output
==============
10 20 30

    
#include <stdio.h>
#define A 10

int main()
{
    int a = A;
    printf("%d \n", a);
#define A 20
    a = A;
    printf("%d \n", a);
    return 0;
}

output
=========================
main.c:17:0: warning: "A" redefined                                                                                           
main.c:10:0: note: this is the location of the previous definition                                                            
10                                                                                                                            
20
    
    
    
#include <stdio.h>

int main()
{
    char *p = "Sooraj";
    printf("%s \n",p);
    
    printf("%c \n",*(p+1));
    printf("%c",*(p+3));
    
    *(p+2) = 'e';
    
    printf("%c",*(p+3));
}

output
======================
Sooraj                                                                                                                        
o                                                                                                                             
Segmentation fault (core dumped)
