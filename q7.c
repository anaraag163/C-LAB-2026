//  Question 7
#include <stdio.h>
int main() {
    float base,height;
    printf("Enter base and height of the triangle\n");
    scanf("%f %f",&base,&height);
    float area=base*height/2;
    printf("The area of the triangle is %f\n",area);
    return 0;
}
