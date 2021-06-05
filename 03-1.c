#define result main
int printf(const char* , ...);
int scanf(const char* , ...);
int greatest_btn_3(int a,int b,int c);
int ex=0;
int result() {
    int a,b,c,ans;
    printf("Enter 3 Numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    ans = greatest_btn_3(a,b,c);
    switch (ans)
    {
    case 1:
        printf("%d = %d = %d , hehe all numbers were equal \n",a,b,c);
        break;
    case 2:
        printf("1st number (i.e %d) and 2nd number (i.e also %d) are equal and both are greater than 3rd one (i.e %d) \n",a,b,c);
        break;
    case 3:
        printf("%d is greater \n",c);
        break;
    case 4:
        printf("2nd number (i.e %d) and 3rd number (i.e also %d) are equal and both are greater than 1st one (i.e %d) \n",b,c,a);
        break;
    case 5:
        printf("%d is greater \n",a);
        break;
    case 6:
        printf("1st number (i.e %d) and 3rd number (i.e also %d) are equal and both are greater than 2nd one (i.e %d) \n",a,c,b);
        break;
    case 7:
        printf("%d is greater \n",b);
        break;
    default:
    printf("%d is the greatest among all\n",ans);
    return 0;
    }
}

int greatest_btn_3(int a,int b,int c) {
    if(a==b || b==c) {
    if(a==b && a==c){
        ex=1;
        return ex;
    }
    else if(a==b && a>c) {
        ex=2;
        return ex;
    }
    else if(a==b && a<c) {
        ex=3;
        return ex;
    }
    else if(b==c && b>a) {
        ex=4;
        return ex;
    }
    else if(b==c && b<a) {
        ex=5;
        return ex;
    }
      else if(c==a && c>b) {
        ex=6;
        return ex;
    }
    else if(c==a && c<b) {
        ex=7;
        return ex;
    } }
    else {
     if(a>b && a>c){
        return a;
    }
    else if (b>c && b>a){
        return b;
    }
    else if(c>a && c>b) {
        return c;
    } }  
}