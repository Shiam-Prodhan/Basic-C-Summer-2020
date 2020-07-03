#include<stdio.h>
#include<conio.h>
int main()
{
    int height,age;
    char hsc;
    printf("Have you passed HSC : ");
    scanf("%c",&hsc);
    printf("Enter the height : ");
    scanf("%d",&height);
    printf("Enter your age : ");
    scanf("%d",&age);


    if(hsc=='p')
    {
        printf("Stage 1 successful\n");
        if(height>=162)
            {
                printf("Stage 2 successful\n");
                if(age>=18)
                {
                    printf("Stage 3 successful\n");
                    printf("Congratulations, you are selected");
                }
                else
                {
                   printf("Stage 3 unsuccessful for if 3");
                }

            }
        else
            {
                printf("Stage 2 unsuccessful for if 2");
            }

    }


    else
    {
        printf("Stage 1 unsuccessful for if 1");
    }



    return 0;
}
