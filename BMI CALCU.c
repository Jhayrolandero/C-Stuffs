#include <stdio.h>
#include <stdlib.h>

int main()
{
    float weight;
    float height;
    printf("Input your weight in kilograms! ");
    scanf("%f", &weight);
    printf("input your height in meters! ");
    scanf("%f", &height);

    printf("Your BMI is %f", weight / pow(height, 2));
}
