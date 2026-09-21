//  Question 5
#include <stdio.h>
int main() {
    int a,b,r;
    printf("Enter 2 numbers\n");
    scanf("%d %d",&a,&b);
    r=a;
    a=b;
    b=r;
    printf("Reversed numbers are %d %d\n",a,b);
    return 0;
}
