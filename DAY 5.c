//1
#include <stdio.h>
int main()
{
    int arr[15],n,i,a,b,c,sp=0;
    printf("Enter the size of array \n");
    scanf("%d",&n);
    printf("Enter the array elements \n");
    for(i=0;i<n;i++)
       scanf("%d",&arr[i]);
    printf("Enter the Element to be placed \n");
    scanf("%d",&b);
    printf("Enter the elements between which %d is to be placed \n",b);
    scanf("%d %d",&a,&c);
    for(i=0;i<n;i++)
    {
        if(arr[i]==a)
        {
            sp=c=i+1;
            break;
        }
    }
    for(i=10;i>sp;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[c]=b;    
    printf("The new set is :\n");
    for(i=0;i<n+1;i++)
       printf("%d   ",arr[i]);
    return 0;
}

//2
#include <stdio.h>
int main()
{

    int arr[15],n,i,a,sp=0;
    printf("Enter the size of array \n");
    scanf("%d",&n);
    printf("Enter the array elements \n");
    for(i=0;i<n;i++)
       scanf("%d",&arr[i]);
    printf("Enter the Element to be deleted \n");
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
        if(arr[i]==a)
        {
           arr[i]=arr[i+1];
           sp=i+1;
        }
    }
    for(;sp<n-1;sp++)
       arr[sp]=arr[sp+1];
    printf("The new set is : \n ");
    for(i=0;i<n-1;i++)
        printf("%d  ",arr[i]);
    return 0;
}

//3
#include <stdio.h>
int main()
{
    int n,a,arr[15],i,j;
    printf("Enter the size of the group \n");
    scanf("%d",&n);
    printf("Enter the array elements \n");
    for(i=0;i<n;i++)
       scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
       {
           for(j=1;j<n;j++)
           {
               if(arr[i]==arr[j])
               {
                   printf("Not a distinct group \n");
                   return 0;
               }
            }
       }
       printf("It is a distinct group \n");
    return 0;
}

//4
#include <stdio.h>
int main()
{
    int arr[15],a[15],n,i,j,ctr;
    printf("Enter the size of the array \n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
       a[i]=-1;
    printf("Enter the elements of array \n");
    for(i=0;i<n;i++)
       scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        ctr=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                ctr++;
                a[j]=0;
            }
        }
        if(a[i]!=0)
          a[i]=ctr;
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!=0)
           printf("%d : %d \n",arr[i],a[i]);
    }
    return 0;
}
