//Question 9
#include <stdio.h>
int main() {

    int hours,min,sec,total;
    printf("Enter hours\n");
    scanf("%d",&hours);
    printf("Enter min\n");
    scanf("%d",&min);
    printf("Enter seconds\n");
    scanf("%d",&sec);
    total=hours*3600+min*60+sec;
    printf("The time in seconds is %d",total);
     return 0;
}
