//Question 11
#include <stdio.h>

int main() {

    int a=31558150;
    printf("Earth takes %d seconds for a revolution\n",a);
    int days=a/86400;
    int rem1=a%86400;
    int hours=rem1/3600;
    int rem2=rem1%3600;
    int mins=rem2/60;
    printf("Earth takes %d days, %d hours, %d minutes\n",days,hours,mins);
     return 0;
}
