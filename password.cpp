//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <ctime>
//#include <time.h>

typedef struct{
	
	char acc_pass[50];
	char acc_pass2[50];
}password;

password pass;

void delay2(unsigned int mseconds){
    clock_t goal = mseconds + clock();
    while (goal > clock());
}
void signup_password(){
	
	//For Password
	printf("\t\t\t\t\t________________________\n");
	printf("\t\t\t\t\t|  Creating a Password |\n");
	printf("\t\t\t\t\t|______________________|\n");
	printf("\t\t\t\t    Enter your Passowrd:");
	gets(pass.acc_pass);
	fflush(stdin);
	printf("\t\t\t\t    Re-Enter your password: ");
	gets(pass.acc_pass2);
	fflush(stdin);
	
	//For password not match
	char tryagain[200]="\t\t\t\t | Passwords don't match. Try again? |\n\n";
	while(strcmp(pass.acc_pass,pass.acc_pass2)!=0){
		int k=0;
		while (tryagain[k]!='\0'){
			printf("%c",tryagain[k]);
 	   		delay2(50);
			k++;
		}
		
		printf("\t\t\t\t    Enter your Passowrd:");
		gets(pass.acc_pass);			
		fflush(stdin);
		printf("\t\t\t\t    Re-Enter your password: ");
		gets(pass.acc_pass2);
		fflush(stdin);
		
	}
}

