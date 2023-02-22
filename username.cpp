//#include <stdio.h>
//#include <conio.h>
//#include <stdlib.h>
//#include <string.h>
//#include <ctime>
//#include <time.h>

typedef struct{
	char chk[100];
}check3;

typedef struct{	
	char acc_username[50];
}username;

username user;
check3 chck3[100];


void delay5(unsigned int mseconds){
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

void signup_username();

//int main(){
//	signup_username();
//}

void signup_username(){
	
	//For user name

	printf("\t\t\t\t    Enter your username:");

	fflush(stdin);
	gets(user.acc_username);

	//if user name already taken
	char tryagain2[200]="\t\t\t\t |User name already taken. Try again?|\n\n";
	
	FILE *secret2;
	secret2=fopen("abc.pop","r");
	char x='y';
	int line_no=1;
	int abc=0;
	
	while(x!=EOF){
			x=fgetc(secret2);
			chck3[line_no].chk[abc]=x;
			abc++;
			if(x=='\n')
			{
				line_no++;
				abc=0;
			}
				
			if(x==EOF)break;
		}
		
	int flag=0;	
	int k;
	int len=0,len2=0;
	for(k=2;k<=line_no;k+=6){
			len=strlen(user.acc_username);
			len2=strlen(chck3[k].chk);
		if(strncmp(user.acc_username,chck3[k].chk,len2-13)!=0 ){
			flag=0;
		}
		else{
			flag=1;
			break;
		}
	}
	if(flag==0){
		strcat(user.acc_username,"@ourmail.com");
		printf("\t\t\t\t    Your Username is: ");
		puts(user.acc_username);
	}
	else{
		printf("%s",tryagain2);
		signup_username();
	}

}

