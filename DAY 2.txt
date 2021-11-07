//1
#include <stdio.h>
/*
int main()
{
    int age;
    printf("Enter the age \n");
    scanf("%d",&age);
    age>=18 ? printf("Eligible for voting \n") : printf("Not eligible for voting \n");
    return 0;
}
*/

int main()
{
    int age;
    printf("Enter the age \n");
    scanf("%d",&age);
    if(age>=18)
    printf("Eligible for voting \n");
    else
    printf("Not eligible for voting \n");
    return 0;
}

/2
#include <stdio.h>
int main()
{
    int a,b,c;
    printf("Enter three numbers \n");
    scanf("%d %d %d",&a,&b,&c);
    if(a>0 && b>0 && c>0)
    {
        if(a>=b)
        {
            if(a>c)
             printf("The largest is %d",a);
            else if(c>a)
             printf("The largest is %d",c);
            else
             printf("All are equal");
        }
        else
        {
            if(b>c)
             printf("The largest is %d",b);
            else if(c>b)
             printf("The largest is %d",c);
            else
             printf("All are equal");
        }
    }
    else
     printf("Invalid number in input");
    return 0;
    }
/*
int main()
{
    int a,b;
    printf("Enter two numbers \n");
    scanf("%d %d",&a,&b);
    if(a>0 && b>0)
    {
        if(a>b)
         printf("The largest number is %d",a);
        else if(b>a)
         printf("The largest number is %d",b);
        else
         printf("Both are equal");
    }
    else
     printf("Invalid number in input");
    return 0;
}
*/

//3
#include <stdio.h>
#include <stdlib.h>
int main()
{
	float a,b,ans;
	char ch;
	printf("Enter 2 Numbers and operator \n");
	scanf("%f %f %c",&a,&b,&ch);
	switch(ch)
	{
		case '+':
	         	 ans=a+b;
		         break;
		
		case '-':
		        ans=a-b;
		        break;
		
		case '*':
	 	        ans=a*b;
		        break;
		
		case '/':
		        ans=a/b;
		        if(b==0)
		        {
		           printf("Invalid operand");
		           exit(0);
		        }
		   break;
		
		case '%':
		        ans=(int)a%(int)b;
		        break;
		
	    default:printf("Wrong Operator");
	}
	printf("Result = %f",ans);
	return 0;
}

//4
#include <stdio.h>

int main()
{
    long int rank;
    printf("Enter the KCET rank \n");
    scanf("%ld",&rank);
    if(rank<=3250)
    {
        printf("Branch:CSE \n");
        printf("Branch:ISE \n");
        printf("Branch:E&C \n");
        printf("Branch:MEC \n");
    }
    else if(rank>=3250 &&rank<=6505)
    {
        printf("Branch:ISE \n");
        printf("Branch:E&C \n");
        printf("Branch:MEC \n");
    }
    else if(rank>=6505 && rank<=12012)
    {
        printf("Branch:E&C \n");
        printf("Branch:MEC \n");
    }
    else if(rank<=22340)
        printf("Branch:MEC \n");
    else
        printf("Admission not possible \n");
    return 0;
}

//5
#include <stdio.h>

int main()
{
    int num=0,total=0;
    float amt,dis=0;
    printf("Enter the number of books \n");
    scanf("%d",&num);
    if(num<=10000)
    {
        printf("No discount!!! \n");
        amt=num*10;
    }
    else if(num>10000 && num<=15000)
    {
        printf("Hey !!you got 10 percent discount!!! \n");
        total=(num*10);
        dis=0.1*total;
        amt=total-dis;
    }
    else if(num>15000 && num<=20000)
    {
        printf("Hey !!you got 20 percent discount!!! \n");
        total=(num*10);
        dis=0.2*total;
        amt=total-dis;
    }
    printf("The total cost = %f \n",amt);
    printf("The total dis = %f",dis);
    return 0;
}
