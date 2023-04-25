#include <stdio.h>

enum year{Jan=1, Feb, Mar, Apr, May=10, Jun, Jul,
    Aug=0, Sep, Oct, Nov, Dec};

int main(){
    printf("%d %d %d %d %d %d %d %d %d %d %d %d\n", 
    Jan, Feb, Mar, Apr, May, Jun, Jul, Aug, Sep, Oct, Nov, Dec);
    return 0;
}