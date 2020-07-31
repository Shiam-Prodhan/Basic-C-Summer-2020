//Functions
#include<stdio.h>
int sum;
int num1,num2;//Global Variable
int Addition();
void Subtraction()
{
    int sub;//Local Variable
    printf("\nSubtraction Function\n");
    printf("Enter number one : ");
    scanf("%d",&num1);
    printf("Enter number two : ");
    scanf("%d",&num2);
    printf("Subtraction of %d and %d is = %d\n",num1,num2,num1-num2);
}

int main()
{

    Subtraction(); //Function call
    Addition();
    return 0;
}
int Addition()
{
    printf("Addition Function\n");
    printf("Enter number one : ");
    scanf("%d",&num1);
    printf("Enter number two : ");
    scanf("%d",&num2);
    sum=num1+num2;
    printf("Summation is = %d\n",sum);
}


/*

Def: A function is a group of statements;
Syntax:
Return_type Function_name()
{
    statements;
}
*/
