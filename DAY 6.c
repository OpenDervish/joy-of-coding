//1
#include <stdio.h>
int main()
{
    char character, str[100];

    // read & print a string using puts() & gets()
    printf("Enter a string: ");
    fgets(str, 100, stdin);//gets()is deprecated so fgets() is used
    puts(str);

    // read and print a single character using getchar() & putchar()
    printf("Enter a character: ");
    character=getchar();
    putchar(character);
    return 0;
}

//2
#include <stdio.h>
#include <string.h>
int main()
{
    char s1[30]="R N S Institute of Technology";
    char s2[10]="Bengaluru";
    char new[50];
    int i,res,ctr=0;
    for(i=0;s1[i]!='\0';i++)
        ctr++;
    res=strlen(s1);    
    printf("Length of String is %d \n",ctr);
    for(i=0; i<strlen(s2); i++)
    {
        s1[res]=s2[i];
        res++;
    }  
    printf("New String is %s \n",s1);
    char s3[30]="R N S Institute of Technology";
    i=0;
    while(s3[i]!='\0')
  	{
  		if(s3[i]>='a' && s3[i]<='z')
  			s3[i]=s3[i]-32;
        i++;
  	}
  	printf("String in Upper Case is %s \n",s3);
    return 0;
}

//3
#include <stdio.h>
#include <string.h>
int main()
{
    int i, index=0;
    char string[50], abbr[10];

    printf("Enter a string: ");
    scanf("%[^\n]%*c", string);

    abbr[index]=string[0];
    index++;

    for(i=0; i<strlen(string); i++)
    {
        if(string[i]==' ')
        {
            abbr[index]=string[i+1];
            index++;
        }
    }

    abbr[index]='\0';

    printf("Abbreviating \"%s\": %s", string, abbr);
    printf("\n");

    return 0;
}

//4
#include <stdio.h>
#include <string.h>
int main()
{
    int i, count=1;
    char string[30];

    printf("Enter a string: ");
    scanf("%[^\n]%*c", string);

    for(i=0; i<strlen(string); i++)
    {
        if(string[i]==' ')
            count++;
    }
    string[i]='\0';
    printf("%s has %d words.", string, count);
    printf("\n");

    return 0;
}

//5
#include <stdio.h>
#include <string.h>
int main()
{
    int i, lenstr, count=0;
    char string[30];

    printf("Enter a string: ");
    scanf("%[^\n]%*c", string);
    lenstr=strlen(string);

    for(i=0; i<lenstr/2; i++)
    {
    	if(string[i]==string[lenstr-i-1])
    	count++;
 	}
 	if(count==i)
 	    printf("%s is palindrome.\n", string);
    else
        printf("%s is not palindrome.\n", string);

    return 0;
}
