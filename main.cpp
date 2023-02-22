#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <string.h>
#include <ctime>
#include <time.h>
#include "signup.cpp"
#include "login.cpp"
//the function below is only to delay the output 
void delay(unsigned int mseconds){
    clock_t goal = mseconds + clock();
    while (goal > clock());
}

void main_page();
//void instructions();
void chk();
void found(char search[]);
void not_found(char search[]);

//
//void delay4(unsigned int mseconds){
//    clock_t goal = mseconds + clock();
//    while (goal > clock());
//}
//
//typedef struct{
//	char login_id[50];
//	char login_pass[50];
//}signin;
//
//typedef struct{
//	char chk[100];
//}check1;
//
//check1 chck1[100];
//signin log_in[100];
//void login();
//int loading(char loadname[]);
//void account(char a[]);





int main(){
	main_page();
	chk();
}
//void instructions(){
//	printf("Type 'x or X close' to close the window\n");
//	printf("Type 'b or B or backword' to back to Main menu\n");
//	printf("Type 'l or L or login' to login the menu");
//	printf("Type 's or S or signup' to sign up/to create ID");
//	printf("Type 'Logout ' to logout from ID");
//	
//}

void main_page(){
	system("cls");
//	fflush(stdin);
	system("color FC");//FC white red and 0C black red 
	printf("  Yooggle.com   \\ +\t\t\t\t\t\t\t\t\t\t\t\t   | X\n");
	printf("----------------------------------------------------------------------------------------------------------------------\n");
	printf("<-  ->  G | http://wwwyooggle.com\t\t\t\t\t\t\t\t\t\tT *|..\n");
	printf("----------------------------------------------------------------------------------------------------------------------\n");
	printf("\n\n\n\n\n\n\n");
	printf("\t\t\t\t\t\tY O O G G L E\n\t\t\t\t\t\t\t   NPL\n");
	printf("\t\t\t       ________________________________________________\n");
	printf("\t\t\t       |Search: ");
	fflush(stdin);
	
	
	//getch();
}

void chk(){
	//for multiple conditions
	char a[30]={"www.ourmail.com"};
	char b[30]={"www.ourmail.com "};
	char c[20]={"ourmail.com"};
	char d[20]={"ourmail.com "};
	char e[20]={"OURMAIL.COM"};
	char f[20]={"OURMAIL.COM "};
	char g[20]={"Ourmail.com"};
	char h[20]={"Ourmail.com "};
	char i[20]={"ourmail"};
	char j[20]={"ourmail "};
	char k[20]={"Ourmail"};
	char l[20]={"Ourmail "};
	char m[20]={"OURMAIL"};
	char n[20]={"OURMAIL "};
	char x[100];
	
	fflush(stdin);
	gets(x);

	printf("\t\t\t       |______________________________________________|\n");
	printf("\n\n\n\n\n\n");
	delay(1200);
	if(strcmp(x,a)==0 || strcmp(x,b)==0 || strcmp(x,c)==0 || strcmp(x,d)==0 || strcmp(x,e)==0 || strcmp(x,f)==0 || strcmp(x,g)==0)
	{
		found(x);
	}
	else if(strcmp(x,h)==0 || strcmp(x,i)==0 || strcmp(x,j)==0 || strcmp(x,k)==0 || strcmp(x,l)==0 || strcmp(x,m)==0 || strcmp(x,n)==0)
	{
		found(x);
	}
	else{
			not_found(x);
		}

}

void found(char search[]){
	system("cls");
	system("color FC");//FC white red and 0C black red 
	printf("  %s   \\ +\t\t\t\t\t\t\t\t\t\t\t\t   | X\n",search);
	printf("----------------------------------------------------------------------------------------------------------------------\n");
	printf("<-  ->  G | http://%s/login/sigup/u/continue\t\t\t\t\t\t\t\tT *|..\n",search);
	printf("----------------------------------------------------------------------------------------------------------------------\n");
	printf("\n\n\n\n\n");
	delay(100);
	printf("\t\t\t\t\t\t ' Welcome  To '\n\n");
	int i=0;
	char p[200]="\t\t\t\t\t\t  O U R M A I L\n";
	while (p[i]!='\0')
	{
		printf("%c",p[i]);
 	   delay(100);
		i++;
	}
	printf("\n\n\t\t\t\t\tDon't have an account? 'Sign up?'\n");
	printf("\t\t\t\t\t\t\t\t-------\n");
	printf("\t\t\t\t\t_________________________________\n");
	printf("\t\t\t\t\t|\t\t\t\t|\n");
	printf("\t\t\t\t\t|\tEnter\t  Cancel   \t|\n");
	printf("\t\t\t\t\t|\t-----\t  ------   \t|\n");
	printf("\t\t\t\t\t|\t\t\t\t|\n");
	printf("\t\t\t\t\t|  Login ID:    \t\t|\n");
	printf("\t\t\t\t\t|  Password:    \t\t|\n");
	printf("\t\t\t\t\t|\t\t\t\t|\n");
	printf("\t\t\t\t\t|_______________________________|\n\n");
	printf("\t\t\t\t\t\t  Login  (login)\n\t\t\t\t\t\t  Signup (signup)\n");
	printf("\t\t\t\t\t      Enter your choice: ");
	char option[50];
	gets(option);
	if(strcmp(option,"login")==0){
		login();
		delay(300);
		found(search);
	}
	else if(strcmp(option,"signup")==0){
		signup_account();
		printf("\t\t\t\tYou have successfully created your account");
		printf("\n\t\t\t\tReturning back to main menu (Press any key)");
		getch();
		delay(300);
		found(search);
	}
	else{
		found(search);
	}
}

void not_found(char search[]){
	system("cls");
	system("color FC");//FC white red and 0C black red 
	printf("  %s   \\ +\t\t\t\t\t\t\t\t\t\t\t\t   | X\n",search);
	printf("----------------------------------------------------------------------------------------------------------------------\n");
	printf("<-  ->  G | http://%s\t\t\t\t\t\t\t\t\t\t\tT *|..\n",search);
	printf("----------------------------------------------------------------------------------------------------------------------\n");
	printf("\n\n\n\n\n\n\n\n\n");
	delay(250);
	printf("\t\t\t(-_-)\n\n");
	printf("\t\t\tThis site can\'t be reached.\n\n");
	printf("\t\t\t%s\'s server DNS address could not be found.\n",search);
	printf("\t\t\tERR_NAME_NOT_RESOLVED");
	
	printf("\n\n\n\n\n\n");
	printf("\t\t\t\t\t\t\t\t\t\t\tTo go back to previos: (Press b)\n");
	printf("\t\t\t\t\t\t\t\t\t\t\tTo close the Window: (Press x)\n");
	printf("\t\t\t\t\t\t\t\t\t\t\tEnter your option: ");
	
	char option2;
	scanf("%c", &option2);
	switch(option2){
		case 'x':
		case 'X':
			exit(1);
			break;
			
			case 'b':
			case 'B':
				main();
				break;
				
				default:		
				not_found(search);	
				break;
		
	}
}





//
//void login(){
//	system("cls");
//	fflush(stdin);
//
//	system("color FC");//FC white red and 0C black red 
//	printf(" (^0m^) Login-Ourmail \\ +\t\t\t\t\t\t\t\t\t\t\t   | X\n");
//	printf("----------------------------------------------------------------------------------------------------------------------\n");
//	printf("<-  ->  G | http://accounts.ourmail.com/ServiceLogin?continue\t\t\t\t\t\t\tT *|..\n");
//	printf("----------------------------------------------------------------------------------------------------------------------\n");
//	printf("\n\n\n");
//	
//	//delay(100);
//	int i=0;
//	char p[200]="\t\t\t\t\t               \"O U R M A I L\"          \n\n\n";
//	while (p[i]!='\0')
//	{
//		printf("%c",p[i]);
//		i++;
//	}
//	
//	printf("\t\t\t\t\t       'Sign in to continue to Gmail'     \n");
//	printf("\t\t\t\t\t____________________________________________\n");
//	printf("\t\t\t\t\t|                                          |\n");
//	printf("\t\t\t\t\t|              Enter   Cancel              |\n");
//	printf("\t\t\t\t\t|              -----   ------              |\n");
//	printf("\t\t\t\t\t|                                          |\n");
//	printf("\t\t\t\t\t|   Login ID: ");
//	fflush(stdin);
//	gets(log_in[i].login_id);
//	
//	//for checking username exists or not 
//	FILE *secret;
//	secret=fopen("abc.pop","r");
//	char x='y';
//	int line_no=1;
//	int abc=0;
//	
//	while(x!=EOF){
//			x=fgetc(secret);
//			chck1[line_no].chk[abc]=x;
//			abc++;
//			if(x=='\n')
//			{
//				line_no++;
//				abc=0;
//			}
//				
//			if(x==EOF)break;
//		}
//		
//	int flag=0;	
//	int k;
//	
//	int len1=0,len2=0;
//	//printf("%s",cpy_id);
//	//printf("\n%s",lencnt);
//	for(k=2;k<=line_no;k+=6){
//			len1=strlen(log_in[i].login_id);
//			len2=strlen(chck1[k].chk);
//			chck1[k].chk[len2-1]=NULL;
//		if(strcmp(log_in[i].login_id,chck1[k].chk)!=0){
//			flag=0;
//		}
//		else{
//			flag=1;
//			break;
//		}
//	}
//	if(flag==0){
//		char opt5[3];
//		
//		printf("\t\t\t\t\t|                                          |\n");
//		printf("\t\t\t\t\t|          Sorry, ourmail doesn't          |\n");
//		printf("\t\t\t\t\t|           recognize that email.          |\n");
//		printf("\t\t\t\t\t|__________________________________________|\n");
//		printf("\t\t\t\t\t\t     Try Again?(y/n): ");
//		gets(opt5);
//		if(strcmp(opt5,"y")==0 || strcmp(opt5,"Y")==0){
//			login();
//		}
//		else if(strcmp(opt5,"n")==0 || strcmp(opt5,"N")==0){
//			exit(1);
//		}
//		else{
//			printf("\t\t\t\t\t\t  Returning to main menu\t\n\t\t\t\t\t\t     (Press any key)");
//			getch();
//			return;
//		}
//		
//		
//	}//for password check
//	else{
//		
//		//for checking password matched or not
//		char password[50], ch;
//		//strcpy(password,log[i].login_pass);
//   		int x;
//		
//		printf("\t\t\t\t\t|                User exits                |\n");
//		printf("\t\t\t\t\t|   Password: ");
//   		while (1){
//      		if (x < 0){
//         		x = 0;
//      		}
//      	
//      		ch = getch();
// 
//	      	if (ch == 13)
//    	     	break;
//      		else if (ch == 8 ){ /*ASCII value of BACKSPACE */
//         		putch('\b');
//         		putch(NULL);
//         		putch('\b');
//         		x--;
//         		continue;
//      			}
// 
//      		log_in[i].login_pass[x++] = ch;
//      		ch = '*';
//      		putch(ch);
//   		}
//   		log_in[i].login_pass[x] = '\0';
//		
//		char str3[50];
//		int len1,len=0,len2=0;
//		flag=0;	
//		k=k+2;
////		printf("\n%s",chck1[k].chk);
////		printf("\n%s",log_in[i].login_pass);
//		len1=strlen(log_in[i].login_pass);
//		len2=strlen(chck1[k].chk);
//		//strncpy(str3,chck1[k].chk,len-1);
////		char cpy_loginpass[50];
////		char *login_pass;
////		login_pass=(char *)malloc(50*sizeof(char));
////		strcpy(cpy_loginpass,log_in[i].login_pass);
////		
////		login_pass=cpy_loginpass;
////		len1=strlen(login_pass);
////		login_pass[len1]='\0';
//		
////		for(k=4;k<=line_no;k+=6){
////			len=strlen(log_in[i].login_pass);
////			len2=strlen(chck1[k].chk);
//
//			chck1[k].chk[len2-1]=NULL;
//			if(strcmp(log_in[i].login_pass,chck1[k].chk)!=0 ){
//				flag=0;
//			}
//			else{
//				flag=1;
////				break;
//		
//			}
////		}
////			printf("\nlen enter %d",len1);
////			printf("\nlen file %d",len2);
////				printf("\n%s\n",cpy_loginpass);
////				printf("%s",chck1[4].chk);
////				
////				getch();
//
//		if(flag==0){ //incorrect password;
//			char opt6[3];
//		
//			printf("\n\t\t\t\t\t|                                          |\n");
//			printf("\t\t\t\t\t|            Password InCorrect            |\n");
//			printf("\t\t\t\t\t|__________________________________________|\n");
//			printf("\t\t\t\t\t\t     Try Again?(y/n): ");
//			gets(opt6);
//			if(strcmp(opt6,"y")==0 || strcmp(opt6,"Y")==0){
// 				login();
//			}
//			else if(strcmp(opt6,"n")==0 || strcmp(opt6,"N")==0){
//				exit(1);
//			}
//			else{
//				printf("\t\t\t\t\t\t  Returning to main menu\t\n\t\t\t\t\t\t     (Press any key)\n");
//				getch();
//				return;
//			}
//				
//		}
//		else{
//			printf("\n\t\t\t\t\t|             Password Correct             |\n");	
//			printf("\t\t\t\t\t|                                          |\n");
//			printf("\t\t\t\t\t|__________________________________________|");
//			delay4(800);
//			
//			loading(log_in[i].login_id);
//			//getch();
//			account(log_in[i].login_id);
//		}
//
////	printf("\n%s",chck[1].chk);
////	printf("\n%s",chck[5].chk);
//
//	fclose(secret);
//	}
//
//
//}
//
//loading(char loadname[]){
//	system("cls");
//	fflush(stdin);
//	char load[100]="*************************************************|";
//	system("color FC");//FC white red and 0C black red 
//	printf("  O U R M A I L  \\ +\t\t\t\t\t\t\t\t\t\t\t\t   | X\n");
//	printf("----------------------------------------------------------------------------------------------------------------------\n");
//	printf("<-  ->  G | http://mail.ourmail.com   \t\t\t\t\t\t\t\t\t\tT *|..\n");
//	printf("----------------------------------------------------------------------------------------------------------------------\n");
//	int i=0;
//	
//	printf("\n\n");
//	printf("\t\t\t\t\t     Loading  %s....",loadname);
//	printf("\n\t\t\t\t   ___________________________________________________");
//	printf("\n\t\t\t\t   |");
//	while (load[i]!='\0')
//	{
//		printf("%c",load[i]);
//		delay4(50);
//		i++;
//	}
//	
//	delay4(700);
//
//}
//void account(char a[]){
//	//printf("AcCOunt");
//	int opt;
//	char choice1[100];
//	system("cls");
//	//scanf("%d",&opt);
//	//to count mail 
//	int mail_count=0;
//	char mail_counter[100]={"--------------------------------------------------------------"};
//	
//	system("color FC");//FC white red and 0C black red 
//	printf("   Inbox  ( %d )  \\ +\t\t\t\t\t\t\t\t\t\t\t\t   | X\n",mail_count);
//	printf("----------------------------------------------------------------------------------------------------------------------\n");
//	printf("<-  ->  G | http://mail.ourmail.com/mail/u/service=mail#inbox   \t\t\t\t\t\tT *|..\n");
//	printf("----------------------------------------------------------------------------------------------------------------------\n");
//	printf("\t\t\t\tHi!, Welcome to Ourmail mails\n\n");
//	printf("\n   Mail +\t|\t\t\t\t\t\t\t\t\tTotal mails: 1 - %d\t   | *",mail_count);
//	printf("\n            \t|\t");
//	printf("\n            \t|\t");
//	printf("\n            \t|\t   What you want to Do,Sir?");
//	printf("\n            \t|\t");
//	printf("\n            \t|\t  __________________");
//	printf("\n            \t|\t  |Compose Mails  v|   To send mails to friends.   (write compose)");
//	printf("\n            \t|\t  ------------------");
//	printf("\n            \t|\t  ___________________");
//	printf("\n            \t|\t  |Received Mails  v|  To check recevied mails.    (write mails)");
//	printf("\n            \t|\t  -------------------");
//	printf("\n            \t|\t  ____________");
//	printf("\n            \t|\t  |*Logout  v|         To logout from the account. (write logout)");
//	printf("\n            \t|\t  ------------");
//	printf("\n            \t|");
//	printf("\n            \t|\t  Enter Your choice: ");
//	gets(choice1);
//	
//	//to compose mail
//	if(strcmp(choice1,"compose")==0){
//		system("cls");
//		system("color FC");//FC white red and 0C black red 
//		printf("   Inbox  ( %d )  \\ +\t\t\t\t\t\t\t\t\t\t\t\t   | X\n",mail_count);
//		printf("----------------------------------------------------------------------------------------------------------------------\n");
//		printf("<-  ->  G | http://mail.ourmail.com/mail/u/service=mail&continue\t\t\t\t\t\tT *|..\n");
//		printf("----------------------------------------------------------------------------------------------------------------------\n");
//		printf("\t\t\t\t\tHi!, Welcome to Ourmail mails\n");
//		printf("\n   Mail + |\t\t\t\t\t\t\t\t\t\tTotal mails: 1 - %d\t   | * ",mail_count);
//		printf("\n            \t|");
//		printf("\n            \t|\t\t\t\t\t\t\tAccount: %s",a);
//		printf("\n            \t|");
//		printf("\n            \t|\t  __________________");
//		printf("\n            \t|\t  |Compose Mails  >|");
//		printf("\n            \t|\t  ------------------");
//		printf("\n            \t|");
//		printf("\n            \t|");
//		
//		//printf("\n\n\nhello");
//	
//		FILE *secret;
//		secret=fopen("abc.pop","r");
//		char x='y';
//		int line_no=1;
//		int abc=0;
//	
//		while(x!=EOF){
//			x=fgetc(secret);
//			chck1[line_no].chk[abc]=x;
//			abc++;
//			if(x=='\n')
//			{
//				line_no++;
//				abc=0;
//			}
//				
//			if(x==EOF)break;
//		}
//		
//		int flag=0;	
//		int k;
//
//		char mail[20];
//		//sending mailsss
//		char text[1000];
//		printf("\n            \t|\tTo: ");
//		fflush(stdin);
//		gets(mail);
//		int acc;
//    	acc=strlen(mail);
//
//		//printf("%s",mail);
//	
//		//printf("%s",chck[2].chk);
//		int len=0,len2=0;
//		for(k=2;k<=line_no;k+=6){
//			len=strlen(mail);
//			len2=strlen(chck1[k].chk);
//			if(strncmp(mail,chck1[k].chk,len2-1)!=0 ){
//				flag=0;
//			}
//			else{
//				flag=1;
//				break;
//			}
//		}
//		if(flag==0){
//			printf("\t\t\t\tSorry, ourmail doesn't recognize that email.\n");
//			delay4(300);
//			printf("\t\t\t\tRetruning back to Your account main page :)\n");
//			printf("\t\t\t\t(Press any key to continue");
//			getch();
//			account(a);
//		}	
//	
//		else{
//			mail[acc+0]='.';
//    		mail[acc+1]='t';
//    		mail[acc+2]='x';
//    		mail[acc+3]='t';
//    		mail[acc+4]='\0';
//		
//	
//	
//			FILE *pointer;
//			pointer=fopen(mail,"a");
//			if(pointer!=NULL){
//				printf("            \t|\tUser name exits");
//				printf("\n            \t|\n");
//				printf("            \t|\tYour text: ");
//				gets(text);
//		
//				fprintf(pointer,"From: %s\n",a);
//				fprintf(pointer,"%s\n",text);
//				fprintf(pointer,"--------------------------------------------------------------\n");
//				
//				fclose(pointer);
//				system("cls");
//				system("color FC");//FC white red and 0C black red 
//				printf("   Inbox  ( %d )  \\ +\t\t\t\t\t\t\t\t\t\t\t\t   | X\n",mail_count);
//				printf("----------------------------------------------------------------------------------------------------------------------\n");
//				printf("<-  ->  G | http://mail.ourmail.com/mail/u/service=mail&continue\t\t\t\t\t\tT *|..\n");
//				printf("----------------------------------------------------------------------------------------------------------------------\n");
//				
//				delay4(400);
//				printf("\n\t\t\t\t\t   Mail has been Sent.");
//				printf("\n\t\t\t\t\tPress any key to continue");
//				getch();
//				account(a);
//				
//			}
//			else{
//				printf("User name not exits\n");
//			}
//		}
//	}
//	
//	//2 choice for recived mails
//	else if(strcmp(choice1,"mails")==0){
//		system("cls");	
//		system("color FC");//FC white red and 0C black red 
//		printf("   Inbox  ( %d )  \\ +\t\t\t\t\t\t\t\t\t\t\t\t    | X\n",mail_count);
//		printf("----------------------------------------------------------------------------------------------------------------------\n");
//		printf("<-  ->  G | http://mail.ourmail.com/mail/u/service=mail&continue\t\t\t\t\t\tT * |..\n");
//		printf("----------------------------------------------------------------------------------------------------------------------\n");
//		printf("\t\t\t\t\tHi!, Welcome to Ourmail mails\n");
//		printf("\n   Mail +       |\t\t\t\t\t\t\t\t\t\tTotal mails: 1 - %d  | *",mail_count);
//		printf("\n      M     \t|");
//		printf("\n      A     \t|\t\t\t    Your Account: %s",a);
//		printf("\n      I     \t|");
//		printf("\n      L     \t|");
//		printf("\n      S      \t|");
//		printf("\n________________|");
//		printf("\n\t  ___________________");
//		printf("\n\t  |Received Mails  >|");
//		printf("\n\t  -------------------\n");
//	
//		FILE *usraccnt2;
//		int lenght=0;
//		lenght=strlen(a);
//		a[lenght+0]='.';
//		a[lenght+1]='t';
//		a[lenght+2]='x';
//		a[lenght+3]='t';
//		a[lenght+4]='\0';
//	
//		usraccnt2=fopen(a,"r");
//		int k=0;
//		char xyz;
//		int count;
//		int line=1;
//		if(usraccnt2!=NULL){
//			//printf("\nhello");
//		
//			while(1){
//				xyz=fgetc(usraccnt2);
//				if(xyz==EOF){
//					break;
//				}
//				else{
//					if(xyz=='\n'){
//						line++;
//						//printf("\n            \t|");
//					}
//					if(line>=11){
//						printf("%c",xyz);
//					}
//				}
//			}
//		printf("\n\n\nPress any key to return back to mail menu");
//		getch();
//		account(a);
//		}
//		
//		else{
//			printf("\nend");
//			getch();
//		}
//		
//		//fclose(usraccnt2);
//	}
//	else if(strcmp(choice1,"logout")==0){
//		system("cls");
//		system("color FC");//FC white red and 0C black red 
//		printf(" (^0m^) Login-Ourmail \\ +\t\t\t\t\t\t\t\t\t\t\t   | X\n");
//		printf("----------------------------------------------------------------------------------------------------------------------\n");
//		printf("<-  ->  G | http://id.logout.ourmail.com/u/service=logout&continue\t\t\t\t\t\tT *|..\n");
//		printf("----------------------------------------------------------------------------------------------------------------------\n");
//		printf("\n\n\t\t\t\t\tSaving your mails......\n\t\t\t\t\tWait for a while :)\n");
//		delay4(400);
//		printf("\t\t\t\t     (Press any key to continue)");
//		getch();
//		return ;
//		login();
//	}
//	
//	else{
//		account(a);
//	}
//}
