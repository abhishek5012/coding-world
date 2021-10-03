#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
struct Bank{
	char name[30],fname[20],mname[20];
	int DOB_dd,DOB_mm,DOB_yyyy;
	char mobile_no[13],aadhar_no[12],pan_no[14];
	char street[20],post[20],police_station[20],district[30],state[30],pin[10];
char account_no[13],costumer_id[10],transfer_id[10];
long avail_bal;
}bank;
int acc,dep,amo,total;
char col[18],hind[22],idle[20],life[30],feel[30];
int count=0;
char bankacc[13],id[13],tran[10];
int totaldep=0,totalwith=0,totaltran=0;
void login();
void mainmenu();
void accountopen();
void acc_details();
void update();
void deposit();
void withdraw();
void bank_detail();
void transfer();
void main(){int m;
	char pass[10];
	char password[10]="abhi";
	system("cls");
	printf("\n\n\t\t@@##$$%%&&**WELCOME TO THE BANK MANAGEMENT SYSTEM**&&&%%%$$$##@@ ");
	printf("\n\n\t\tENTER the password\t");
	scanf("%s",&pass);
	
	if(strcmp(pass,password)==0){
		printf("\n\t\tPASSWORD MATCHED");
	
	system("cls");
	login();
	}
	else{system("cls");
		printf("\n\t\t WRONGPASSWORD");
		printf("\n\tTRY AGAIN ");
	
	printf("\n\tENTER 1 to continue and 0 to exit\t");
	scanf("%d",&m);
	if(m==1){
		system("cls");
		 main();
	}else if(m==0) {
	system("cls");
	close();
	}else{system("cls");		
	printf("\n\n\n\tYOU enterred the invalid choice");
	getch();
	close();
		}}
		
	}
		void login(){char ni[4];
		char user[13];
		char pasw[10];		
system("cls");
printf("\n\n\n\n\t\tENTER USER NAME :");
scanf("%s",&user);
printf("\n\n\t\tENTER THE PASSWORD :");
scanf("%s",&pasw);
if(strcmp(user,"bank123")==0){
	if(strcmp(pasw,"anki@26")==0){
	system("cls");
		printf("\n\n\n\n\t\t\t\t!!!!!!&&&&&&*****LOGIN Successfully*****&&&&&&!!!!!");
		printf("\n\t\tPRESS THE BANK SPECIAL CHARACTER TO CONTINUE :");
	scanf("%s",&ni);
	if(strcmp(ni,"$@")==0){
		system("cls");

	mainmenu();
		
	}else{system("cls");
	login();
	}}

	else{
		printf("\n\n\t\tINVALID PASSWORD ");
		printf("\n\n\tPRESS ANY KEY ");
		getch();
		login();}
		
	}
	else{
		printf("\n\n\t\tINVALID USER NAME");
		printf("\n\n\t PRESS ANY KEY");
		getch();
	login() ;
	}	}
	
	void mainmenu(){int b;int v;
		system("cls");
		printf("\n\n\t\t******!!!WELCOME TO THE INTERNATIONAL BANK !!!*****");
	printf("\n\n\n\t\t\xB2\xB2 main menu\xB2\xB2");
	printf("\n\n\t\t1.ACCOUNT OPENING");
	printf("\n\n\t\t2.ACCOUNT DETAILS");
	printf("\n\n\t\t3.UPDATE ACCOUNT");
	printf("\n\n\t\t4.DEPOSITE MONEY");
	printf("\n\n\t\t5.WITHDRAW MONEY");
	printf("\n\n\t\t6.TRANSFER MONEY");
	printf("\n\n\t\t7.BANK DETAILS");
	printf("\n\n\t\t8.EXIT");
	printf("\n\n\t\tSELECT ANY CHOICE YOU WANT TO DO : ");
	scanf("%d",&b);
	printf("YOUR`S SELECTED choice is :%d",b);
	getch();
	switch(b)
	{
	case 1:system("cls"); 
	printf("\n\n\t\tYOUR choice is ");
	printf("\n\n\t\t\t\tACCOUNT OPENING");
	printf("\n\n\t\tTO CHANGE the choice press 0  and to continue with this choice press 1");
    scanf("%d",&v);
    if(v==1){system("cls");
    	printf("\n\n\n\t\tWELCOME to the bank to account opening section");
    printf("\n\n\t\t\tpress any key to continue !!**");
    getch();
	accountopen();
    mainmenu();
	}
	else if(v==0){
		system("cls");
		mainmenu();
	}
	else {printf("\n\tYOU have enterred the wrong key!");
	close();
	}
	break ;
	case 2: system("cls");
	printf("\n\n\t\tYOUR choice is ");
	printf("\n\n\t\t\t\t\tACCOUNT DETAILS");
	printf("\n\n\n\t\tTO CHANGE the choice press 0  and to continue with this choice press 1");
    scanf("%d",&v);
    if(v==1){system("cls");
    	printf("\n\n\n\t\tWELCOME to the bank to account details checking section");
	acc_details();
mainmenu();	}
	else if(v==0){
		system("cls");
		mainmenu();
	}
	else {printf("\n\t\tYOU HAVE enterred the wrong key!");
	close();
	}
	break ;
	case 3:system("cls");
	printf("\n\n\t\tYOUR choice is ");
	printf("\n\n\t\tACCOUNT UPDATING");
	printf("\n\n\t\tTO CHANGE the choice press 0  and to continue with this choice press 1");
    scanf("%d",&v);
    if(v==1){system("cls");
    	printf("\n\n\n\t\tWELCOME to the bank to account details update section");
	update();
	mainmenu();}
	else if(v==0){
		system("cls");
		mainmenu();
	}
	else {printf("\n\t\t YOU have enterred the wrong key!");
	close();
	}
	break ;
	case 4:system("cls");
	printf("\n\n\t\tYOUR choice is ");
	printf("\n\n\t\t\t\tDEPOSIT CASH ");
	printf("\n\n\t\tTO CHANGE the choice press 0  and to continue with this choice press 1");
    scanf("%d",&v);
    if(v==1){system("cls");
    	printf("\n\n\n\t\tWELCOME to the bank to account cash deposit section");
	deposit();
	totaldep+=dep;
	mainmenu();}
	else if(v==0){
		system("cls");
		mainmenu();
	}
	else {printf("\n\tYOU have enterred the wrong key!");
	close();
	}
	break ;
	case 5:
	system("cls");
	printf("\n\n\t\tYOUR choice is ");
	printf("\n\n\t\t\t\t WITHDRAW cash");
	printf("\n\n\t\tTO CHANGE the choice press 0  and to continue with this choice press 1");
    scanf("%d",&v);
    if(v==1){system("cls");
    	printf("\n\n\n\t\t\tWELCOME to the bank to account cash withdraw section");
	withdraw();
	if(amo<=total)
	totalwith+=amo; 
	mainmenu();}
	else if(v==0){
		system("cls");
		mainmenu();
	}
	else {printf("\n\t\tYOU HAVE ENTERRED THE WRONG KEY !");
	close();
	}
	break ;
	case 6:
	system("cls");
	printf("\n\n\t\tYOUR choice is ");
	printf("\n\n\t\t\t\tTRANSFER cash");
	printf("\n\n\t\tTO CHANGE the choice press 0  and to continue with this choice press 1");
    scanf("%d",&v);
    if(v==1){system("cls");
    	printf("\n\n\n\t\t\tWELCOME to the bank to account cash transfer section");
	 transfer();
	if(v<=total)
	totaltran+=v; 
	mainmenu();
}
	else if(v==0){
		system("cls");
		mainmenu();
	}
	else {printf("\n\t\tYOU HAVE ENTERRED THE WRONG KEY !");
	close();
	}
	break ;
	case 7:system("cls");
	printf("\n\n\t\tYOUR choice is ");
	printf("\n\n\t\tBANK DETAILS");
	printf("\n\n\t\tTO CHANGE the choice press 0  and to continue with this choice press 1");
    scanf("%d",&v);
    if(v==1){system("cls");
    	printf("\n\n\n\t\tWELCOME to the bank to account details  section");
	bank_detail();
	mainmenu();}
	else if(v==0){
		system("cls");
		mainmenu();
	}
	else {printf("\n\t\t YOU have enterred the wrong key!");
	close();
	}
	break ;
		
	case 8:system("cls");
	printf("\n\n\t\t YOUR choice is %d",b);
	printf("\n\n\t\t YOUR choice is to get exit");
	printf("\n\n\t\t TO CHANGE the choice press 0  and to continue with this choice press 1");
	scanf("%d",&v);
    if(v==1){system("cls");
    	printf("\n\n\n\t\t\t\xB2\xB2THANKS TO VISIT OUR BANK\xB2\xB2 ");
    	close();
	}
	else if(v==0){
		system("cls");
		mainmenu();
	}
	else {printf("\n\t\tYOU enterred the wrong key!");
	close();
	}
	break ;
	default:system("cls");
	printf("\n\n\n\n\t\tINVALID choice you have enterred !!");
	printf("\n\n\n\t\tCHOOSE a valid choice");
	printf("\n\n\n\t\tPRESSany key to continue and choose the valid choice");
    getch();
	mainmenu();
	}}
	
	
	void accountopen(){system("cls");

	
		printf("\n\n\n\t\tHIII this is bank management system");
		printf("\n\n\n\t\tWELCOME you in account opening section");
		printf(" \n\n\n\t\tPLEASE ENTER THE DETAILS TO OPEN ACCOUNT");
		printf("\n\n\n\n\t\t@@@$$$FORM NO : 1 $$$@@@");
		printf("\n\n\t\t\tENTER YOUR PERSONAL INFORMATION ");
	printf("\n\t\tENTER THE NAME :");
	fflush(stdin);
	gets(bank.name);
	printf("\n\t\tENTER THE FATHER`S NAME :");fflush(stdin);
	gets(bank.fname);
	printf("\n\t\tENTER THE MOTHER`S NAME :");fflush(stdin);
	gets(bank.mname);
	printf("\n\t\tENTER THE DATE OF BIRTH :");
	printf("\n\t\tENTER IN DD MM YYYY FORMAT :");
	printf("\n\tENTER THE DATE :");fflush(stdin);
	scanf("%d",&bank.DOB_dd);
	printf("\n\t\tENTER THE MONTH :");fflush(stdin);
	scanf("%d",&bank.DOB_mm);
	printf("\n\t\tENTER THE YEAR :");fflush(stdin);
	scanf("%d",&bank.DOB_yyyy);
	printf("\n\n\t\tTO SAVE INFORMATION PRESS THE KEY");
	getch();
	system("cls");
	printf("\n\n\n\t\t\t@@@###FORM NO : 2 ###@@@");
	printf("\n\n\t\tENTER YOUR SENSITIVE INFORMATION"); 
	
	printf("\n\t\tENTER THE MOBILE NUMBER :");fflush(stdin);
	gets(bank.mobile_no);
	printf("\n\t\tENTER YOUR AADHAR NUMBER :");fflush(stdin);
	gets(bank.aadhar_no);
	printf("\n\t\tENTER YOUR PAN NUMBER :");fflush(stdin);
	gets(bank.pan_no);
	printf("\n\n\t\tTO SAVE INFORMATION PRESS THE KEY");
	getch();
	system("cls");
	printf("\n\n\n\n\t\t\t@@@@$$$ FORM NO :3 $$$@@@");
	printf("\n\n\tENTER YOUR RESIDENCE INFORMATION");
	printf("\n\t\tENTER YOUR ADDRESS :");
	printf("\n\t\tENTER THE STREET NUMBER :");fflush(stdin);
	gets(bank.street);
		printf("\n\t\tENTER THE POST OFFICE  :");fflush(stdin);
		gets(bank.post);	
			printf("\n\t\tENTER THE POLICE STATION :");fflush(stdin);
		gets(bank.police_station);		
				printf("\n\t\tENTER THE DISTRICT :");fflush(stdin);
		gets(bank.district);
	printf("\n\t\tENTER THE STATE :");fflush(stdin);
	gets(bank.state);
	printf("\n\t\tENTER THE PIN CODE :");fflush(stdin); 
	gets(bank.pin);
	printf("\n\t\tTO SAVE INFORMATION ENTER THE KEY");
	getch();
	system("cls");
	printf("\n\n\n\n\n\t\t@@@## FORM NO :4 ##@@@@");
	printf("\n\n\t\tENTER YOUR BANK INFORMATION YOU WISH");
	printf("\n\t\tCREATE THE ACCOUNT NUMBER :");fflush(stdin);
	gets(bank.account_no);
	printf("\n\t\tCREATE YOUR CUSTOMER UNIQUE ID :");fflush(stdin);
	gets(bank.costumer_id);
	printf("\n\n\t\tCREATE YOUR BANK TRANSACTION ID : ");
	gets(bank.transfer_id);
	printf("\n\n\t\tTO SAVE THE ABOVE INFORMATION PRESS THE KEY ");
	getch();
	
	system("cls");
	printf("\n\n\t\t\t\tCONFIRM YOUR ACCOUNT NUMBER :");
	 scanf("%s",bankacc);
	 
	printf("\n\n\t\tCONFIRM YOUR CUSTOMER UNIQUE ID :");
	scanf("%s",id);
	printf("\n\n\n\t\tCONFIRM YOUR BANK TRANSATION ID : ");
	scanf("%s",tran);
	getch();
	system("cls");fflush(stdin);
	printf("\n\n\n\n\n\t\t\t\t");
	printf("\n\t*******&&&&!!!!!!$$$$$CONGRATULATIONS$$$$$!!!!!&&&&******");
	printf("\n\t\t*****YOUR ACCOUNT IS CREATED !!!!*****");
	int l;
	getch();
	system("cls");
	printf("\n\n\t\tENTER ANSWER TO THE TECHNICAL QUESTION TO SECURE YOUR BANK ACCOUNT");
	printf("\n\n\n\t\tYOUR MOST FAVOURITE COLOR :");
    scanf("%s",col);
   
printf("\n\n\n\t\tYOUR FAVOURITE HINDI SERIAL :");
scanf("%s",hind);

printf("\n\n\n\t\tYOUR LIFE IDLE :");

scanf("%s",idle);
printf("\n\n\n\t\tYOUR UNFORGETABLE LIFE MOMENT WHICH IS NOT KNOWN : ");
scanf("%s",life);


printf("\n\n\n\t\tYOUR PERSONAL THING OR FEELING :");	
	scanf("%s",feel);
	system("cls");
	printf("\n\n\n\n\n\n\n\n\t\t\t\tYOUR ALL FORMALITIES FOR CREATING THE ACCOUNT IS COMPLETED");
	count=1;
	getch();
	printf("\n\n\t\tTO ENTER THE AMOUNT PRESS 1 AND TO EXIT PRESS 0 :");
	scanf("%d",&l);
	if(l==1){
		 deposit();
		getch();
	}else{  mainmenu();
	}
		}
	
	
	
	
	void acc_details(){char x[13];
	
		printf("\n\n\n\tHIII this is bank management system");
		printf("\n\t\t WELCOME you in account details section");
		printf("\n\t\t PLEASE enter the follwing details ");
	printf("\n\n\n\t\tENTER THE ACCOUNT NUMBER :");
	scanf("%s",x);
	if(strcmp(x,bankacc)==0){
		printf("\n\n\tTHE NAME OF THE ACCOUNT HOLDER :");
		puts(bank.name);
		printf("\n\n\n\t\tTOTAL AMOUNT IN YOUR BANK ACCOUNT :");
		printf("\n\n\t\tTOTAL DEPOSIT AMOUNT %d : ",totaldep);
		printf("\n\n\t\tTOTAL WITHDRAW AMOUNT %d :",totalwith);
		printf("\n\n\t\tTOTAL TRANSFER AMOUNT %d :",totaltran);
		getch();
		system("cls");int d;
		
		printf("\n\n\n\t\tTO GET PERSONAL INFORMATION OF THE ACCOUNT HOLDER :");
		printf("\n\t\tENTER 1 TO CONTINUE AND 0 TO EXIT :");
		scanf("%d",&d);
		if(d==1){system("cls");char amk[13];
		printf("\n\n\t\tENTER THE PERSONAL BANK CUSTOMER ID :");
		scanf("%s",amk);
		if(strcmp(amk,id)==0){
			system("cls");
			printf("\n\n\t\tACCOUNT HOLDER FATHER`S NAME :");
			puts(bank.fname);
			printf("\n\t\tACCOUNT HOLDER MOTHER`S NAME :");
			puts(bank.mname);
			printf("\n\t\tACCOUNT HOLDER ADDRESS :");
			printf("\n\t\tSTREET NAME AND NUMBER :");
			puts(bank.street);
			printf("\n\t\tPOST OFFICE :");
			puts(bank.post);
			printf("\n\t\tPOLICE STATION :");
			puts(bank.police_station);
			printf("\n\t\tDISTRICT :");
			puts(bank.district);
			printf("\n\t\tSTATE :");
			puts(bank.state);
			printf("\n\t\tPIN CODE :");
			puts(bank.pin);
			printf("\n\t\tAADHAR NUMBER :");
			puts(bank.aadhar_no);
			printf("\n\t\tPAN NUMBER :");
			puts(bank.pan_no);
			getch();
		}	
		else{printf("\n\n\t\tCUSTOMER ID IS NOT CORRECT ");
		getch();
		}	
		}if(d==0){
			
			close();
		}else 
		close();
		}
		else{
		printf("\n\n\t\tTHE ACCOUNT NUMBER NOT EXIST ");
		printf("\n\n\t\tENTER THE CORRECT ACCOUNT NUMBER ");
		printf("\n\n\t\tPRESS KEY TO ENTER THE ACCOUNT NUMBER ");
		
		getch();
		
		
		 acc_details();
		
		}
		
	}
	


	void update(){char dc[14];	printf("\n\n\n\tHIIII this is bank management system");
printf("\n\t\t WELCOME you in account details update section");
printf("\n\t\tPLEASE enter the follwing details ");
printf("\n\n\t\tENTER THE ACCOUNT NUMBER :");
scanf("%s",dc);
if(strcmp(dc,bankacc)==0){

		printf("\n\t\tTO UPDATE THE ACCOUNT PRESS KEY :");
		printf("\n\t\tYOU HAVE TO ENTER ALL THE INFORMATION :");
		printf("\n\t\tENTER THE NAME :");
	fflush(stdin);
	gets(bank.name);
	printf("\n\t\tENTER THE FATHER`S NAME :");fflush(stdin);
	gets(bank.fname);
	printf("\n\t\tENTER THE MOTHER`S NAME :");fflush(stdin);
	gets(bank.mname);
	printf("\n\t\tENTER THE DATE OF BIRTH :");
	printf("\n\t\tENTER IN DD MM YYYY FORMAT :");
	printf("\n\tENTER THE DATE :");fflush(stdin);
	scanf("%d",&bank.DOB_dd);
	printf("\n\t\tENTER THE MONTH :");fflush(stdin);
	scanf("%d",&bank.DOB_mm);
	printf("\n\t\tENTER THE YEAR :");fflush(stdin);
	scanf("%d",&bank.DOB_yyyy);
	printf("\n\t\tENTER THE MOBILE NUMBER :");fflush(stdin);
	gets(bank.mobile_no);
	printf("\n\t\tENTER YOUR AADHAR NUMBER :");fflush(stdin);
	gets(bank.aadhar_no);
	printf("\n\t\tENTER YOUR PAN NUMBER :");fflush(stdin);
	gets(bank.pan_no);
	printf("\n\t\tENTER YOUR ADDRESS :");
	printf("\n\t\tENTER THE STREET NUMBER :");fflush(stdin);
	gets(bank.street);
		printf("\n\t\tENTER THE POST OFFICE  :");fflush(stdin);
		gets(bank.post);	
			printf("\n\t\tENTER THE POLICE STATION :");fflush(stdin);
		gets(bank.police_station);		
				printf("\n\t\tENTER THE DISTRICT :");fflush(stdin);
		gets(bank.district);
	printf("\n\t\tENTER THE STATE :");fflush(stdin);
	gets(bank.state);
	printf("\n\t\tENTER THE PIN CODE :");fflush(stdin); 
	gets(bank.pin);
	
	
	printf("\n\n\t\tTO SAVE THE ABOVE INFORMATION PRESS THE KEY ");
	getch();

	system("cls");fflush(stdin);
	printf("\n\n\n\n\n\t\t\t\t");
	printf("\n\t*******&&&&!!!!!!$$$$$CONGRATULATIONS$$$$$!!!!!&&&&******");
	printf("\n\t\t*****YOUR ACCOUNT IS UPDATED  !!!!*****");
		
		
		 getch();}
		else{printf("\n\n\n\t\tENTER THE CORRECT ACCOUNT NUMBER :");
		void update();
		getch();
		}
		
		
	}
	
	
	
	void deposit(){char t[13];
		printf("\n\n\n\tHIII this is bank management system ");
		printf("\n\n\tWELCOME you in account cash deposit section");
		("\n\t\tPLEASE enter the follwing details ");
	printf("\n\n\n\t\tENTER THE BANK ACCOUNT NUMBER :");
	scanf("%s",t);
	if(strcmp(t,bankacc)==0){
		

	printf("\n\n\t\tENTER THE AMOUNT YOU WANT TO DEPOSIT :");
	scanf("%d",&dep);
	printf("\n\n\t\tPRESS THE KEY TO KNOW THE TOTAL AMOUNT DEPOSIT :");
	getch();
	total+=dep;
	printf("%d",total);
	getch();}
	else{printf("\n\n\t\tTHIS ACCOUNT IS NOT CREATED IN THE BANK DATABASE");
	printf("\n\n\t\tENTER THE ACCOUNT NUMBER THAT HAD CREATED IN THE BANK "); 
	void deposit();
	getch();
	}
		
	}
	
	
	
	void withdraw()
	
	{char m[15];
		printf("\n\n\n\tHIII this is bank management system");
		printf("\n\t\tWELCOME you in account cash withdraw section");
		printf("\n\t\t PLEASE enter the follwing details ");
	printf("\n\n\t\tENTER THE ACCOUNT NUMBER :");
	scanf("%s",m);
	if(strcmp(m,bankacc)==0){
    printf("\n\n\t\t YES THE ACCOUNT EXIST :");
    getch();
	printf("\n\n\n\t\tENTER THE AMOUNT YOU WISH TO WITHDRAW :");
	scanf("%d",&amo);
	if(amo<=total){
		total-=amo;
		printf("\n\n\t\tTOTAL AMOUNT LEFT IS :%d",total);getch();
	}else{printf("\n\n\t\tWITHDRAWABLE AMOUNT IS NOT POSSIBLE ");
	
	}}
	else printf("\n\n\tSORRY YOU HAVE ENTERRED IN CORRECT ACCOUNT NUMBER  :"); 
	getch();
	 withdraw();
	}
	
	
	
	
	
	void transfer()
	{char fg[18],as[13],wd[12];int v;
		system("cls");
		printf("\n\n\t\tENTER THE UNIQUE TRANSACTION ID : ");
		scanf("%s",fg);
		if(strcmp(fg,tran)==0){
			printf("\n\n\t\t\tYOUR TRANSACTION ID IS BEING VERIFIED ");
			printf("\n\n\t\tPROCEED YOUR TRANSACTION :");
			printf("\n\n\t\tENTER YOUR ACCOUNT NUMBER :");
			scanf("%s",as);
			if(strcmp(as,bankacc)==0){
				printf("\n\n\t\tYOUR ACCOUNT EXIST :");
				printf("\n\n\t\tENTER THE AMOUNT TO TRANSFER :");
				scanf("%d",&v);
	if(v<=total){
		total-=v;
		printf("\n\n\t\tENTER THE ACCOUNT NO. TO WHOM TO TRANSFER");
			scanf("%s",wd);
			getch();
			system("cls");
			printf("\n\n\n\n\t\t\t\tAMOUNT TRANSFERRED !!");
			getch();		
		
		printf("\n\n\t\tTOTAL AMOUNT LEFT IS :%d",total);getch();
	}else{printf("\n\n\t\tTRANSFERABLE AMOUNT IS NOT POSSIBLE ");
	getch();
	}}
	else{
 printf("\n\n\tSORRY YOU HAVE ENTERRED IN CORRECT ACCOUNT NUMBER  :"); 
	getch();
	close();}
		
		
	}else {
		 printf("\n\n\t\tYOUR TRANSACTION ID DIDN`T MATCH ");
		getch();}
		}
		
		




	void bank_detail(){char q[15],e[20],s[17],z[30],p[30];
	system("cls");
	printf("\n\n\t\tENTER THE FOLLOWING DETAILS TO KNOW YOUR ACCOUNT NO &CUSTOMER ID &TRANSACTION ID");
if(count==1){

printf("\n\n\n\t\tYOUR MOST FAVOURITE COLOR :");
scanf("%s",q);
if(strcmp(q,col)==0){

printf("\n\n\n\t\tYOUR FAVOURITE HINDI SERIAL :");
scanf("%s",e);
if(strcmp(e,hind)==0){

printf("\n\n\n\t\tYOUR LIFE IDLE :");
scanf("%s",s);
if(strcmp(s,idle)==0){

printf("\n\n\n\t\tYOUR UNFORGETABLE LIFE MOMENT WHICH IS NOT KNOWN : ");
scanf("%s",z);
if(strcmp(z,life)==0){
	
printf("\n\n\n\t\tYOUR PERSONAL THING OR FEELING :");	
scanf("%s",p);	
if(strcmp(p,feel)==0){
	
	system("cls");
	printf("\n\n\n\n\t\t\tHURRRAHHHH!!!!!!!");
	
	printf("\n\n\n\t\tYOU HAVE ALREADY ANSWERRED ALL THE QUESTIONS CORRECTLY");
	printf("\n\n\t\tYOUR SENSITIVE INFORMATION IS .......");
	printf("\n\n\n\tYOUR ACCOUNT NUMBER IS :%s",bankacc);
	printf("\n\n\n\tYOUR CUSTOMER ID IS : %s",id);
printf("\n\n\n\t\tYOUR TRANSACTION ID IS : %s",tran);
getch();
}	} else{
	printf("\n\n\t\tYOU LEFT ONLY 1 STEP ");
	getch();
	close();
} 
 }
else{	
	
	printf("\n\n\n\tYOU LEFT 2 STEP");	getch();
	close();
	
} 

} else{ printf("\n\n\t\tYOU LEFT 3 STEP");
	getch();
	close();
	
 } 
     }
	 else{
printf("\n\n\tYOU HAVENT ANSWERRED CORRECTLY !!");	getch();
	close();

}
    } else
	{
    	printf("\n\n\n\n\t\tYOU HAVEN`T CREATED THE ACCOUNT ");
    	getch();
    	close();
	}close();
 
}
	
