// Header Files
#include<stdio.h>
#include<string.h>

// Macro

#define space printf("\n")

// Macro functions

char strfunc(char ch[]){	
	printf("%s\n", ch);
	}


int main(){
	char test1[] = "manav";
//	printf("\n %c \n", str[3]);
	
//	strfunc(test1);	
//
	space;


	char str1[100];

	strcpy(str1, test1);	
	
	printf("\nString Copied: %s \n", str1);

	// safe function to avoid string buffer
	
	char str2[] = "Testing";
	
	char test[] = "Testing";
	space;

	printf("%d\n" , strcmp(str2, test));


	space;

	printf("Tested : %s", str2);
	

	return 0;
}

