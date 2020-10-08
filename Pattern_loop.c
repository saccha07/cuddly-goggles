/*
Pattern_loop.c
Description:
Print a pattern of numbers from to

as shown below. Each of the numbers is separated by a single space.

                            4 4 4 4 4 4 4  
                            4 3 3 3 3 3 4   
                            4 3 2 2 2 3 4   
                            4 3 2 1 2 3 4   
                            4 3 2 2 2 3 4   
                            4 3 3 3 3 3 4   
                            4 4 4 4 4 4 4   

Author: Sachindra
*/
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{

    int n;
    scanf("%d", &n);
    int i,j,k,m,x;
    scanf("%d",&n);
    k=n;
    m = n+(n-1);
    for(i=0;i<m;i++)
    {
        for(j=0;j<m;j++)
        {
            if(i<=n-1)
            {        
                if(i==0)
                {
                printf("%d ",k);
                }
                if(i>=1)
                {
                    if(j<i)
                    {
                        printf("%d ",k-j);
                    }
                    else if(j>=i && j<m-i)
                    {
                        printf("%d ",k-i);
                    }
                    else 
                    {
                        printf("%d ",(j-k+1)+1);
                    }
                }
            }
            else if(i==n-1)
            {
                if(j<n)
                {
                    printf("%d ",k-j);
                }
                else
                {
                    printf("%d ",(j-k+1)+1);
                }
            }
            else if(i>=n)
            {
                x = m-i-1;
                if(i==m)
                {
                printf("%d ",k);
                }
                if(j<x)
                {
                    printf("%d ",k-j);
                }
                else if(j>=x && j<m-x)
                {
                    printf("%d ",k-x);
                }
                else 
                {
                    printf("%d ",(j-k+1)+1);
                }    
            }
        }
        printf("\n");
    }

    /*
  	// Complete the code to print the pattern.
      for(int i=0;i<(n+n-1);i++) {
          printf("%d ", n);
          for(int j=1;j<(n+n-2);j++) {
              if(i>=n)
              printf("%d ",n);
              else
              printf("%d ", n-i);
          }
          printf("%d", n);
          printf("\n");
      }*/
    return 0;
}
