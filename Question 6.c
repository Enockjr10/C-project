#include <stdio.h>
#include <stdlib.h>
#include <string.h>
float balance=0;
char uname[50];
int pswd;
void atmregister()
{
	printf("===== WELCOME TO UoK STUDENT ATM MACHINE ===== \n");
	printf(" UoK ATM MACHINE Registration Form  \n ");
	printf("Enter Username: ");
	scanf("%s",uname);
	printf("Enter Pin: ");
	scanf("%d",&pswd);
	system("cls");
}
void atmlogin()
{
	char name[50];
	int pass;
	int success=0;
	while(!success)
	{
	printf("===== WELCOME TO UoK STUDENT ATM MACHINE ===== \n");
	printf("  UoK ATM MACHINE Login Form  \n ");
	printf("Enter Username: ");
	scanf("%s",name);
	printf("Enter Pin: ");
	scanf("%d",&pass);
	if(strcmp(name,uname)==0&&pass==pswd)
	{
		printf("Login Successfull");
		system("cls");
		success=1;
	}
	else
	{
		printf("Invalid User or Password Try Again ");
	}	
	}
	
}
void checkbalance()
{
	printf("===== WELCOME TO UoK STUDENT ATM MACHINE ===== \n");
	printf("Hello You Balance is %.2f ",uname,balance);
}
void deposit()
{
	float deposit;
	int done=0;
	printf("===== WELCOME TO UoK STUDENT ATM MACHINE ===== \n");
	printf("  Uok ATM DEPOSIT  \n");
	while(!done)
	{
	
	printf("Amount To Deposit: ");
	scanf("%f",&deposit);
	if(deposit>0)
	{
	balance+=deposit;
	printf("Deposit Successfull you Deposit %.2f Rf and new balance is %2.f Rf ",deposit,balance);
	done=1;
	}
	else
	{
		printf(" Invalid Amount ");
	}
    }
}
void withdrawal()
{
	float amount;
	int pass,attemp=1;
	int done=0;
	printf("===== WELCOME TO UoK STUDENT ATM MACHINE ===== \n");
	printf("  Uok ATM WITHDRAW  \n");
	while(!done)
	{
	
	printf("Amount To Withdraw: ");
	scanf("%f",&deposit);
	
	if(amount>0&&amount<balance)
	{
		while(attemp!=3)
		{
		
	printf("Enter Pin: ");
	scanf("%d",&pass);
	
	if (pass==pswd)
	{
	balance-=amount;
	printf("Hello %s You Withdrew %.2f Rf on your Account and New Balance is %.2f Rf",uname,amount,balance);
	done=1;
	attemp=3;
	}
	else
	{ 
	attemp++;
		printf("Invalid Password Try Again %d ",attemp);
		
	}
	}

	}
	else if (amount>=balance)
	{
		printf(" Insufiency Amount ");
	}
	else
	{
		printf("Invalid Amount");
	}
    }
}
int main() {
    int choice;
	atmregister();
	atmlogin();
	do{
	printf("===== WELCOME TO UoK STUDENT ATM MACHINE ===== \n");
    printf("Enter \n 0.Exit \n 1.Check Balance \n 2.Deposit Money \n 3.Withdraw Money \n Choose: ");
    scanf("%d",&choice);
    	
    switch(choice)
    {
    	case 0:
    		printf("Thank you for using UoK ATM Machine");
    	break;
		case 1:
    		checkbalance();
    	break;
    	case 2:

    		deposit();
    	break;
    	case 3:
    		
    		withdrawal();
    	break;
    	default:
    	printf("Invalid Choice");
	}
	}
		while(choice!=0);
		return 0;
}
