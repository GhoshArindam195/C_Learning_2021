#include<stdio.h>
void main()
{
    int n1, n2;
    printf("Please Enter the value of n1 & n2\n");
    scanf("%d%d", &n1, &n2);

    //If-else-if Ladder...........
    // if(n1>n2)
    //     printf("N1 is greater\n");
    // else if(n2>n1)
    //     printf("N2 is greater\n");
    // else
    //     printf("Both the numbers are equals\n");

    //Nested-if-else...........
    if(n1>=n2)
    {
        if(n1>n2)
        {
            printf("N1 is greater\n");
        }
        else
        {
            printf("Both the numbers are equals\n");
        }
    }
    else
    {
        printf("N2 is greater\n");
    }

}