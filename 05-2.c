#include <stdio.h>
int main(){
    int range[1001];
    int i,user_input;
    printf("How many numbers you want: ");
    scanf("%d", &user_input);

    range[0]=0;
    range[1]=1;
    printf("1 : %d\n",range[0]);
    for(i=2;i<=user_input;i++)
        range[i]=range[i-1]+range[i-2];

    for(i=1;i<user_input;i++)
        printf("%d : %d \n",i+1,range[i]);

    return 0;

}