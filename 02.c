#include <stdio.h>
int main(){
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    printf(number<0?"%d is negative":number==0?"0 is neither negative or positive":"%d is positive",number);
}