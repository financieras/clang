#include <stdio.h>

enum weekDays {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};

int main(){
    enum weekDays today;
    today = Sunday;
    printf("Day: %d\n", today);
    return 0;
}