#include <stdio.h>

enum deck{
    hearts = 5,
    clubs = 10,
    spades =15,
    diamonds = 20
} card;

int main(){
    card = spades;
    printf("Card Power: %d\n", card);
    return 0;
}