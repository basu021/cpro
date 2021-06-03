int printf(const char* , ...);
int scanf(const char* , ...);
#define res main
#define PS_or_NEG(input) (printf(input>0?"%d is +ve":input<0?"%d is -ve":"0 is neither +ve or -ve",input))
int res()
{
    int input;
    printf("Enter an integer: ");
    scanf("%d", &input);
    PS_or_NEG(input);
    return 0;
}