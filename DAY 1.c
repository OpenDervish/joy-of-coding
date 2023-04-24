//1
#include <stdio.h>
int main()
{
    int a=10,b=100;
    float c=10.5,d=100.5;
    printf("++a=%d \n",++a);
    printf("--b=%d \n",--b);
    printf("++c=%f \n",++c);
    printf("--d=%f \n",--d);
    return 0;
}

//2
#include <stdio.h>

int main()
{
    int a=5,b=5,c=10;
    printf("%d ==%d is %d \n",a,b,a==b);
    printf("%d ==%d is %d \n",a,c,a==c);
    printf("%d > %d is %d \n",a,b,a>b);
    printf("%d > %d is %d \n",a,c,a>c);
    printf("%d < %d is %d \n",a,b,a<b);
    printf("%d < %d is %d \n",a,c,a<b);
    printf("%d !=%d is %d \n",a,b,a!=b);
    printf("%d !=%d is %d \n",a,c,a!=c);
    printf("%d >=%d is %d \n",a,b,a>=b);
    printf("%d >=%d is %d \n",a,c,a>=c);
    printf("%d <=%d is %d \n",a,b,a<=b);
    printf("%d <=%d is %d \n",a,c,a<=b);
    return 0;
}

//3
#include <stdio.h>

int main()
{
    int a = 5, b = 5, c = 10, res;
    res=(a == b) && (c > b);
    printf("(a == b) && (c > b) is %d \n", res);
    res=(a == b) && (c < b);
    printf("(a == b) && (c < b) is %d \n", res);
    res=(a == b) || (c < b);
    printf("(a == b) || (c < b) is %d \n", res);
    res=(a != b) || (c < b);
    printf("(a != b) || (c < b) is %d \n", res);
    res=!(a != b);
    printf("!(a != b) is %d \n", res);
    res=!(a == b);
    printf("!(a == b) is %d \n", res);
    return 0;
}

//4
#include <stdio.h>

int main()
{
    printf("Size of char= %d \n",sizeof(char));
    printf("Size of int= %d \n",sizeof(int));
    printf("Size of float= %d \n",sizeof(float));
    printf("Size of double = %d \n",sizeof(double));
    return 0;
}

//5
#include <stdio.h>

int main()
{
    int num =22;
    int res;
    res=num<<1;
    printf("Left shift by 1= %d \n",res);
    res=num<<2;
    printf("Left shift by 2= %d \n",res);
    res=num>>1;
    printf("Right shift by 1= %d \n",res);
    res=num>>2;
    printf("Right shift by 1= %d \n",res);
    return 0;
}

//6
#include <stdio.h>

int main()
{
    int a,b,c,large;
    printf("Enter three numbers \n");
    scanf("%d %d %d",&a,&b,&c);
    large=(a>b ?(a>c ? a:c):(b>c ? b:c));
    printf("The Largest Number is: %d",large);
} 


/*
int main()
{
   int a,b;
   printf("Enter two numbers \n");
   scanf("%d %d",&a,&b);
   a>b ? printf("%d is greater than %d",a,b) : printf("%d is greater than %d",b,a);
}
*/
