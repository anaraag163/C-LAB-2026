//  Question 10
#include <stdio.h>

int main() {
    int CM,M,P,C,E;
    printf("Enter marks of maths,physics,chemistry and entrace exam respectively\n");
    scanf("%d %d %d %d",&M,&P,&C,&E);
    CM=M/2+P/2+C/2+E;
    printf("The cutoff marks is %d\n",CM);
     return 0;
}
