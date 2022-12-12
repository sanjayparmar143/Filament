#include<stdio.h>
#include<string.h>

main(){
	
	char pass;
	char a[100];
	char b[100] = "redndwhite";
	int c;
	
	printf("Email\t\t :- shivamjadav12@gmail.com\ntype passoword   :- ");

	scanf("%s",&a);	
	
	c = strcmp(b,a);
	
	if (c == 0)
	{
		printf("\n\tCorrect password");
		
    }
    else
    {
       printf("\n\tWrong password");       
	}
	
   }


