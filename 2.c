#include<string.h>
#include<stdio.h>

main(){
      
    char a[100];
    int i;
    int z[100];
    
    
    printf("Enter a string:");
    scanf("%s", a);
    
    strcpy(z,a);
    
    strrev(z);

   
    i = strcmp(z,a);
    
    if(i == 0){
    	
    	printf("%s is palindrome", a);
    	
	}
	
	else{
		
		printf("%s is not a palindrome", a);
		
	}

 
}
