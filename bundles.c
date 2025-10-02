/*
Name:Angeline Kuvoji
Reg No:PA106/G/28716/25
Description: A CODE TO ENABLE THE USER TO PURCHASE DATA BUNDLES.
*/
#include <stdio.h>
int main(){
    int choice;

	printf("select data bundles\n");
	printf("1.100MB = 50kes\n");
	printf("2.500MB = 200KES\n");
	printf("3.1GB = 350KES\n");
	printf("4.2GB = 600KES\n");
	
	printf("Enter your choice(1-4):\n");
	scanf("%d", &choice);
	
	if (choice=1)
	{
		printf("Your selected 100MB");
	}
	else if (choice=2)
	{
		printf("Your selected 500MB");
	}	
	else if (choice=3)
	{
		printf("Your selected 1GB");
	}
	else if (choice=4)
	{
		printf("Your selected 2GB");
	}		
	else {
		printf("invalid choice");
	}
return 0;
}