/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *p[3];
    int i,j,k =0;
    
    /* allocate 3 rows dynamically
    
    for(i=0; i<3;i++)
    {
        *(p+i) = (int *)malloc(4*sizeof(int));
    }
    */
    
    // populating array
    for(i=0;i<3;i++)
    {
        *(p+i) = (int *)malloc(4*sizeof(int));
        for(j=0;j<4;j++)
        {
            *(*(p+i)+j)=k;
            k++;
            
        }
    }
    
    // print
    for(i=0;i<3;i++)
    {
        for(j=0;j<4;j++)
        {
            printf("array elements arr[%d][%d] : %d \n",i,j,p[i][j]);
        }
    }
    
    

    return 0;
}
