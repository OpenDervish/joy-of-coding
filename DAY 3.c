//1
#include <stdio.h>
int main()
{
    int n,num,ctr,rem,rev;
    ctr=rev=rem=0;
    printf("Enter the number \n");
    scanf("%d",&n);
    num=n;
    while(n!=0)
    {
        ctr++;
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("Number of digits =%d \n",ctr);
    printf("Reverse Number of %d = %d \n",num,rev);
    return 0;
}

//2
#include <stdio.h>
int main()
{
    int sum,total,num,rem;
    sum=total=0;
    printf("Enter the number \n");
    scanf("%d",&num);
    while(num!=0)
    {
        rem=num%10;
        sum+=rem;
        num=num/10;
    }
    printf("Sum of digits = %d \n",sum);
     while(sum!=0)
     {
        rem=sum%10;
        total+=rem;
        sum=sum/10;
     }
     printf("Single digit sum = %d \n",total);
     return 0;
}

//3
#include <stdio.h>
int main()
{
    int ctr,sum,num,rem;
    ctr=sum=rem=0;
    printf("Enter the number \n");
    scanf("%d",&num);
    while(num!=0)
    {
        ctr++;
        rem=num%10;
        sum+=rem;
        num=num/10;
    }
    sum+=(ctr*1);
    if(num==0)
       sum=1;
    printf("Increased sum =%d",sum);
    return 0;
}

//4
#include <stdio.h>
int main()
{
    int num,rem,ctr,a[10];
    rem=ctr=0;
    printf("Enter the number \n");
    scanf("%d",&num);
    printf("Digits are:");
    while(num!=0)
    {
        rem=num%10;
        if(rem==0)
        {
           num=num/10;
           continue;
        }
        ctr++;
        a[ctr]=rem;
        num=num/10;
    }
    for(;ctr>0;ctr--)
    {
        printf("%d  ",a[ctr]);
    }
    printf("\n");   
    return 0;
}

//5
#include <stdio.h>
int main()
{
    int num=0, num1=1000, quo, i, inc=0;

    printf("Enter an integer: ");
    scanf("%d", &num);

    for(i=0; i<4; i++)
    {
        quo=(num/num1);
        inc=((quo+1)%10);
        printf("%d", inc);
        num-=quo*num1;
        num1/=10;
    }

    return 0;
}

/*
int main()
{
    int num,rem,n,ctr;
    rem=n=0;
    printf("Input the number \n");
    scanf("%d",&num);
    printf("Output is :");
    for(ctr=3;ctr>0;ctr--)
    {
       n=num;
       rem=n/(10*ctr);
       num=num%(10*ctr);
       if(rem==9)
       {
          rem=0;
       }
       else
       {
         rem++;
       }
       printf("%d",rem);
    }
    return 0;
}  
*/
