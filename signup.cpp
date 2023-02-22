//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#include<strings.h>
//#include<math.h>
//#include<conio.h>
//#include<time.h>

#include "password.cpp"
#include "username.cpp"
//the function below is only to delay the output 
void delay3(unsigned int mseconds){
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

typedef struct{
	char f_name[100];
	char l_name[100];
	char username[100];
	char birthday[20];
	char gender[10];
	char Location[100];
	char mobile_no[30];
}signup;

typedef struct{
	char chk[100];//structure for filing
}check;

check chck[100];
signup sign[100];
int num;
void signup_account();

//int main(){
//	signup_account();
//	
//}

void signup_account(){
	system("cls");
	fflush(stdin);
	int i;
	i=num;
	num++;
	system("color FC");//FC white red and 0C black red 
	printf(" Create your account \\ +\t\t\t\t\t\t\t\t\t\t\t   | X\n");
	printf("----------------------------------------------------------------------------------------------------------------------\n");
	printf("<-  ->  G | http://accounts.ourmail.com/SignUp?service=mail&continue\t\t\t\t\t\tT *|..\n");
	printf("----------------------------------------------------------------------------------------------------------------------\n");
	printf("\n\n\n");
	
	delay3(100);
	printf("\t\t\t\t  ___________________________________\n");
	printf("\t\t\t\t ");
	char title[200]="*|   Create your OurMail Account   |*";
	while (title[i]!='\0'){
		
		printf("%c",title[i]);
 	   	delay3(100);
		i++;
	}
	delay3(100);
	printf("\n\t\t\t\t *|_________________________________|*\n");
	printf("\t\t\t\t *************************************\n");
	printf("\t\t\t\t *************************************\n\n");
	
	
	
	//For name
	fflush(stdin);
	printf("\t\t\t\t\t________________________\n");
	printf("\t\t\t\t\t|    Enter your Name   |\n");
	printf("\t\t\t\t\t|______________________|\n");
	
	printf("\t\t\t\t    First Name: ");
	gets(sign[i].f_name);
	fflush(stdin);
	printf("\t\t\t\t    Last Name: ");
	gets(sign[i].l_name);
	fflush(stdin);
	printf("\n\t\t\t\t -------------------------------------\n\n");
	
	//For user name
	printf("\t\t\t\t\t________________________\n");
	printf("\t\t\t\t\t|  Creating a Username |\n");
	printf("\t\t\t\t\t|______________________|\n");
	printf("\t\t\t\t      Example: user or us or us11\n");
	printf("\t\t\t\t               ----    --    ----\n");

	signup_username();
	printf("\n\t\t\t\t -------------------------------------\n\n");
	
	//For paswword
	signup_password();
	printf("\n\t\t\t\t -------------------------------------\n\n");
	
	//For Birthday
	printf("\t\t\t\t\t________________________\n");
	printf("\t\t\t\t\t|  Selecting Birthday  |\n");
	printf("\t\t\t\t\t|______________________|\n");
	printf("\t\t\t\t      xx/xx/xxxx or xx-xx-xxxx\n");
	printf("\t\t\t\t    Enter your Birthday: ");
	gets(sign[i].birthday);
	while(1){
		if(strlen(sign[i].birthday)==10){
			fflush(stdin);
			printf("\n\t\t\t\t -------------------------------------\n\n");			break;
		}
		else{
			fflush(stdin);
			printf("\n\t\t\t\t\tFormat is not correct!! or \n\t\t\t\t   Somthing missing.Please enter again\n");
			printf("\t\t\t\t    Enter your Birthday: ");
			gets(sign[i].birthday);
			
		}
	}
		
	
	//For Gender
	printf("\t\t\t\t\t________________________\n");
	printf("\t\t\t\t\t|  Selecting a Gender  |\n");
	printf("\t\t\t\t\t|______________________|\n");
	printf("\t\t\t\t      Male* or Female* or other*\n");
	printf("\t\t\t\t    Enter your Gender: ");
	gets(sign[i].gender);
	while(1){
		if(strcmp(sign[i].gender,"Male")==0 || strcmp(sign[i].gender,"male")==0 || strcmp(sign[i].gender,"MALE")==0){
			fflush(stdin);
			printf("\n\t\t\t\t -------------------------------------\n\n");			break;
		}
		else if(strcmp(sign[i].gender,"Female")==0 || strcmp(sign[i].gender,"female")==0 || strcmp(sign[i].gender,"FEMALE")==0){
			fflush(stdin);
			printf("\n\t\t\t\t -------------------------------------\n\n");			break;
		}
		else if(strcmp(sign[i].gender,"Other")==0 || strcmp(sign[i].gender,"other")==0 || strcmp(sign[i].gender,"OTHER")==0){
			fflush(stdin);
			printf("\n\t\t\t\t -------------------------------------\n\n");			break;
		}
		else{
			fflush(stdin);
			printf("\n\t\t\t\t      Don't enter new option!!\n\t\t\t\t      Enter same as above mention.\n");
			printf("\t\t\t\t    Enter your Gender: ");
			gets(sign[i].gender);
			
		}
	}
	
	//For Location
	printf("\t\t\t\t\t________________________\n");
	printf("\t\t\t\t\t|   Entering Location  |\n");
	printf("\t\t\t\t\t|______________________|\n");
	printf("\t\t\t\t      City/Country or City-Country\n");
	printf("\t\t\t\t    Enter Location: ");
	gets(sign[i].Location);
	fflush(stdin);
	printf("\n\t\t\t\t -------------------------------------\n\n");
	
	//For Mobile #
	printf("\t\t\t\t\t________________________\n");
	printf("\t\t\t\t\t|Entering Mobile Number|\n");
	printf("\t\t\t\t\t|______________________|\n");
	printf("\t\t\t\t      Exmaple:\n");
	printf("\t\t\t\t\t Without country code\n");
	printf("\t\t\t\t\t   xxxx-xxxxxxx\tor\n");
	printf("\t\t\t\t\t With country code\n");
	printf("\t\t\t\t\t  +xx-xxxxxxxxxx\n");
	printf("\t\t\t\t    Enter Mobile #: ");
	gets(sign[i].mobile_no);
	while(1){
		if(strlen(sign[i].mobile_no)==12){
			fflush(stdin);
			printf("\n\t\t\t\t -------------------------------------\n\n");
			break;
		}
		else if(strlen(sign[i].mobile_no)==14){
			fflush(stdin);
			printf("\n\t\t\t\t -------------------------------------\n\n");
			break;
		}
		else{
			fflush(stdin);
			printf("\n\t\t\t\t\tFormat is not correct!! or \n\t\t\t\t   Somthing missing.Please enter again\n");
			printf("\t\t\t\t    Enter Mobile #: ");
			gets(sign[i].mobile_no);
			
		}
	}

	

	//filing
	FILE *signup;
	char *filename;
	int y;
	char cpy_username[100];
	filename=(char *)malloc(100*sizeof(char));
	strcpy(cpy_username,user.acc_username);
	
	filename=cpy_username;
	y=strlen(filename);
	filename[y]='.';
	filename[y+1]='t';
	filename[y+2]='x';
	filename[y+3]='t';
	filename[y+4]='\0';
//	printf("\nUsername: %s",filename);
	signup=fopen(filename,"w");
	
	fprintf(signup,"\t\t'USER DATA'\n");
	fprintf(signup,"Name: %s",sign[i].f_name);
	fprintf(signup," %s",sign[i].l_name);
	fprintf(signup,"\nUsername: %s",user.acc_username);
	fprintf(signup,"\nBirthday: %s",sign[i].birthday);
	fprintf(signup,"\nGender: %s",sign[i].gender);
	fprintf(signup,"\nLocation: %s",sign[i].Location);
	fprintf(signup,"\nMobile #: %s",sign[i].mobile_no);
	fprintf(signup,"\n\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n");
	fprintf(signup,"\t\t'MAIL BOX'\n");
	fclose(signup);
	
	
	//for checking username exist or not
	FILE *secret;
	secret=fopen("abc.pop","a+");
	char x='y';
	int line_no=1;
	int abc=0;
	
	while(x!=EOF){
			x=fgetc(secret);
			chck[line_no].chk[abc]=x;
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
	//printing of user name
//	
//	printf("%s",sign[i].username);
//	printf("\n%s",chck[2].chk);
//	printf("%d\n",strlen(sign[i].username));
//	printf("%d\n",strlen(chck[2].chk));
//
//	if(strcmp(sign[i].username,chck[2].chk)!=0){
//		printf("\niyjmnhfgvd cfsdxa");
//	}
//	if(strcmp("abc","abc")==0)printf("hello world");
//	else printf("days are good");

	int len=0,len2=0;
	for(k=2;k<=line_no;k+=6){
			len=strlen(user.acc_username);
			len2=strlen(chck[k].chk);
			chck[k].chk[len2-1]=NULL;
		if(strcmp(user.acc_username,chck[k].chk)!=0 ){
			flag=0;
		}
		else{
			flag=1;
			break;
		}
	}
	if(flag==0){
		fprintf(secret,"User name: \n");
		fprintf(secret,"%s\n",user.acc_username);
		fprintf(secret,"Password: \n");
		fprintf(secret,"%s",pass.acc_pass);
		fprintf(secret,"\nxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxx\n\n");
	}
	else
		printf("User already exits");

//	printf("\n%s",chck[1].chk);
//	printf("\n%s",chck[5].chk);
	
	
	fclose(secret);
	
	
}
