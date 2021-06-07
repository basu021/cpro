#include <stdio.h>
int main(){
    int user_input,loop,result=1;
    printf("Enter a number: ");
    scanf("%d", &user_input);
    printf("\n\n%d! =  ",user_input);
    for(loop=2;loop<=user_input;){
        printf("%d * ",user_input);
        result=result*user_input;
        
        user_input--;
        
    }
    printf("1 = %d",result);
}