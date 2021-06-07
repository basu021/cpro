#include <stdio.h>
int result=0;

int reverse(int input);
int main() {
    int input;

    printf("Enter a number: ");
    scanf("%d", &input);

    reverse(input);
    printf("%d",result);
}

int reverse(int input) {
    int remainder;
    while (input!=0)
    {
        remainder=input%10;
        result=result*10+remainder;
        input/=10;
    }
    return result;
}