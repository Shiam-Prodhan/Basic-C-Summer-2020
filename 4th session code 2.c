#include<stdio.h>
int main()
{
    int age,height;
    char hsc;
    printf("Have you passed HSC : ");
    scanf("%c",&hsc);
    printf("Enter the height : ");
    scanf("%d",&height);
    printf("Enter your age : ");
    scanf("%d",&age);
    if(hsc=='p')
    {
        printf("Yaaay,You are an ULABIAN!");
    }
    else if(height>=162)
    {
        printf("Yaaay,You are an ULABIAN!");
    }
    else if(age>=18)
    {
        printf("Yaaay,You are an ULABIAN!");
    }
    else
    {
        printf("Tomare diya kiccu hobe na!");
    }

    return 0;
}
