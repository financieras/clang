#include <stdio.h>

enum weekDays {Mon=1, Tue, Wed, Thu, Fri, Sat, Sun};

int main(){
    enum weekDays today;
    today = Sun;
    printf("Day: %d\n", today);
    return 0;
}