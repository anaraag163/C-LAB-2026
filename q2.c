
//  Question 2


#include <stdio.h>

int main() {
    int m1,m2,m3,m4,m5;
    printf("Enter the marks\n");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    int total=m1+m2+m3+m4+m5;
    float per=total/5.0;
    printf("The total marks is %d\n",total);
    printf("The percentage marks is %f\n",per);
    return 0;
}
