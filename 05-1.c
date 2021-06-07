#include <stdio.h>
int main(){
    int first_number=0,second_number=1,third_number,user_input;

    printf("What's the range: ");
    scanf("%d", &user_input);
    printf("<<<<Fibonacci Series>>>>\n%d\n%d\n",first_number,second_number);
    for(int flag=2; flag<=user_input;flag++){
        third_number=first_number+second_number;
        printf("%d\n",third_number);
        first_number=second_number;
        second_number=third_number;
    }
    return 0;
}