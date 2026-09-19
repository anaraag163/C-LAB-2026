
//  Question 1

#include <stdio.h>

int main() {


    float p,t,r,si;
    printf("Enter principal amount,time period and rate of interest\n");
    scanf("%f %f %f",&p,&t,&r);
    si=p*t*r/100;
    printf("The simple interest is %f\n",si);

    return 0;
}
