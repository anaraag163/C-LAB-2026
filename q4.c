//  Question 4
#include <stdio.h>
int main() {
    float celvin,fehr;
    printf("Enter temperature in fahrenheit \n");
    scanf("%f",&fehr);
    celvin=fehr-273;
    printf("The temperature in celvin is %f\n",celvin);
    return 0;
}
