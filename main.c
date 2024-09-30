#include <stdio.h>

int main(void)
{
    int lato1, lato2, lato3;
    printf("Inserisci il valore del primo lato: ");
    scanf("%d", &lato1);
    printf("Inserisci il valore del secondo lato: ");
    scanf("%d", &lato2);
    printf("Inserisci il valore del terzo lato: ");
    scanf("%d", &lato3);
    if (lato1 == lato2 && lato1 == lato3){
        printf("Il triangolo è equilatero.");}
    else if (lato1 == lato2){
        printf("Il triangolo è isoscele.");}
    else if (lato1 == lato3){
        printf("Il triangolo è isoscele.");}
    else{
        printf("Il triangolo è scaleno.");}
    return 0;
}
