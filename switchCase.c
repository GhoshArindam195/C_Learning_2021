// var a.......
// if(a==1)
    // print(Debomita)
// if(a==2)
        // print(Taniya)
// if(a==3)
//     print(Sathi)
// else
//     print("Others")

#include<stdio.h>
void main()
{
    int a=1, b=2, c=3;
    switch(a)
    {
        case 1 :
            printf("Debomita");
            break;
        case 2 :
            printf("Taniya");
            break;
        case 3 :
            printf("Sathi");
            break;
        default:
            printf("Others");
    }

}