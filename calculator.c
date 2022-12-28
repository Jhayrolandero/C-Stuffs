#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* declaring variable for storing number*/
    double num1;
    double num2;
    int oper;

    /*printf and scanf for getting input*/
    printf("Input your number: ");
    scanf("%lf", &num1);
    printf("1 for addition, 2 for substraction, 3 for multiplication, 4 for division: \n");
    scanf(" %d", &oper);
    printf("Input another number: ");
    scanf("%lf", &num2);

    if(oper == 1){
        printf("%lf + %lf is = to %lf", num1, num2, num1+num2);
    }
    else if(oper == 2){
        printf("%lf - %lf is = to %lf", num1, num2, num1-num2);
    }
    else if(oper == 3){
        printf("%lf * %lf is = to %lf", num1, num2, num1*num2);
    }
    else if(oper == 4){
        printf("%lf / %lf is = to %lf", num1, num2, num1/num2);
    }
    else{
        printf("invalid input");
    }







    return 0;
}
