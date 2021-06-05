#include <stdio.h>
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a<0) {
        printf("%d is -ve",a);
    }
    else if(a==0) {
        printf("0 is neither +ve or -ve");
    }
    else {
        printf("%d is +ve", a);
    }

}