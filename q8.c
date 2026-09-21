//  Question 8
#include <stdio.h>
int main() {

    printf("Enter time in seconds\n");
    int a;
    scanf("%d",&a);
    int days=a/86400;
    int rem1=a%86400;
    int hours=rem1/3600;
    int rem2=rem1%3600;
    int mins=rem2/60;
    int rem3=rem2%60;
    printf("The given time is %d days, %d hours, %d minutes and %d seconds\n",days,hours,mins,rem3);
    return 0;
}
