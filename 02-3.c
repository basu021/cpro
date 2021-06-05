#include <stdio.h>
int main(){
    int a;
    printf("Enter a number: ");
    scanf("%d", &a);
    if(a>0)
    printf("%d is +ve",a);
    while (a==0)
    {
        printf("0 is neither +ve or -ve");
    }
    for ( ;a<0;)
    {
        printf("%d is -ve",a);
        return 0;
    }
    
}