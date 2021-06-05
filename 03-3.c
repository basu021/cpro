#include <stdio.h>
int main() {
    int a,b,c,ans;
    printf("Enter 3 Numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    printf((a==b && b==c)?"All numbers are equal \n":(a==b && a>c)?"a and b are equal and greater than c \n":(a==b && a<c||c>a && c>b)?"c is greater\n":(b==c && c>a)?"both b and c are equal and greater than a\n":(b==c && b<a||a>b && a>c)?"a is greater\n":(c==a && c>b)?"Both a and c are equal and greater than b\n":(c==a && c<b||a>b && b>a)?"b is greater\n":"");
}