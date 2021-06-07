#define result() ((result*10+remainder)>0?result*10+remainder:this_is_for_fun)
#define remainder() ((number%10)>-1?number%10:this_is_for_fun)
int this_is_for_fun,result=0;
int printf(const char* , ...);
int scanf(const char* , ...);
int reverse_of(int number);

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);
    if(number < 0) {
        number=number*-1;
        reverse_of(number);
        printf("%d", -1*result);
        return 0;
    }
    reverse_of(number);
    printf("%d", result);

} 


int reverse_of(int number) {
    int remainder;
      while (number!=0)
    {
        remainder=remainder();
        result=result();
        number/=10;
    }
    return result;
}