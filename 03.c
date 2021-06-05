#include <stdio.h>
int greatest_btn_3(int a,int b,int c);

int main() {
    int a,b,c;
    printf("Enter 3 Numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("%d is greatest",greatest_btn_3(a,b,c));
    return 0;
}

int greatest_btn_3(int a,int b,int c) {
    if(a>b && a>c){
        return a;
    }
    else if (b>c && b>a){
        return b;
    }
    else if(c>a && c>b) {
        return c;
    }
    
}