//1
#include <stdio.h>
int main()
{
    int a[6],i;
    float b[6];
    char c[10];
    printf("Enter the daily wages of Mr.Int \n");
    for(i=0;i<6;i++)
       scanf("%d",&a[i]);
    printf("Enter the daily wages of Mr.Float \n");
    for(i=0;i<6;i++)
       scanf("%f",&b[i]);
    printf("Enter the weekdays- Mr.Char \n");
    for(i=0;i<7;i++)
       scanf("%c",&c[i]);
       
       
    printf("Daily wages of Mr.Int \n"); 
    for(i=0;i<6;i++)
        printf("%d \n",a[i]);
    printf("Daily wages of Mr.Float \n"); 
    for(i=0;i<6;i++)
        printf("%f \n",b[i]);
    printf("Weekdays- Mr.Char \n"); 
    for(i=0;i<7;i++)
        printf("%c \n",c[i]);
        
        
    printf("In reverse order :\n");
    printf("Daily wages of Mr.Int \n"); 
    for(i=5;i>=0;i--)
        printf("%d \n",a[i]);
    printf("Daily wages of Mr.Float \n"); 
    for(i=5;i>=0;i--)
        printf("%f \n",b[i]);
    printf("Weekdays- Mr.Char \n"); 
    for(i=6;i>=0;i--)
        printf("%c \n",c[i]);
    return 0;   
}

//2
#include <stdio.h>
int main()
{
   int a[6],i,sum;
    float b[6],total,avgi,avgf;
    sum=total=avgi=avgf=0;
    printf("Enter the daily wages of Mr.Int \n");
    for(i=0;i<6;i++)
       scanf("%d",&a[i]);
    printf("Enter the daily wages of Mr.Float \n");
    for(i=0;i<6;i++)
       scanf("%f",&b[i]);
    for(i=0;i<6;i++)
    {
        sum+=a[i];
        total+=b[i];
        avgi=sum/6;
        avgf=total/6;
    }
    printf("Weekly wages of Mr.Int = %d \n",sum);
    printf("Weekly wages of Mr.Float = %f \n",total);
    printf("Average wages of Mr.Int = %f \n",avgi);
    printf("Average wages of Mr.Float = %f \n",avgf);
    return 0;
}

//3
#include <stdio.h>
int main()
{
   int a[6],i;
   float b[6];
   printf("Enter the daily wages of Mr.Int \n");
   for(i=0;i<6;i++)
      scanf("%d",&a[i]);
   printf("Enter the daily wages of Mr.Float \n");
   for(i=0;i<6;i++)
      scanf("%f",&b[i]);
   int maxi,maxf,d1,d2;
   maxi=a[0];
   maxf=b[0];
   d1=d2=0;
   for(i=1;i<6;i++)
   {
       if(maxi<a[1])
       {
           maxi=a[i];
           d1=i;
       }
       if(maxf<b[1])
       {
           maxf=b[i];
           d2=i;
       }
   }
   switch(d1)
   {
       case 0:printf("Mr.Int can party on Monday \n"); 
              break;
       case 1:printf("Mr.Int can party on Tuesday \n"); 
              break;      
       case 2:printf("Mr.Int can party on Wednesday \n"); 
              break;      
       case 3:printf("Mr.Int can party on Thursday \n"); 
              break;          
       case 4:printf("Mr.Int can party on Friday \n"); 
              break;         
       case 5:printf("Mr.Int can party on Saturday \n"); 
              break;
   }
   
   
   switch(d2)
   {
       case 0:printf("Mr.Float can party on Monday \n"); 
              break;
       case 1:printf("Mr.Float can party on Tuesday \n"); 
              break;      
       case 2:printf("Mr.Float can party on Wednesday \n"); 
              break;      
       case 3:printf("Mr.Float can party on Thursday \n"); 
              break;          
       case 4:printf("Mr.Float can party on Friday \n"); 
              break;         
       case 5:printf("Mr.Float can party on Saturday \n"); 
              break;
   }
   return 0;
}

//4
#include <stdio.h>
int info();
int main()
{
    int i, n=9,num=1,attempts=0,pick;
    int chits[10]={4, 2, 9, 1, 5, 8, 10, 3, 7, 6};
    printf("Enter a number between 1-10: ");
    scanf("%d", &pick);
    info();
    if(num<11)
    {
        if(pick==chits[num])
        {
            printf("Number found! You used %d attempts.\n", attempts);
        }
        else
        {
            printf("Wrong Chit. Try again!\n");
        }
    }
    else
    {
        printf("Invalid chit. Try again!\n");
    } 
}

int info()
{
    int num,attempts=0;
    printf("Choose a chit (enter an integer): ");
    scanf("%d", &num);
    ++attempts;
}
