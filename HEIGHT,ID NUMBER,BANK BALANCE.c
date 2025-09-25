/*
Name:
Reg No:
Description:
*/
#include<stdio.h>

int main(){
	float height,ac;
	int id;
	
	printf("Enter your height:");
	scanf("%f", &height);
	
	printf("Enter your account balance:");
	scanf("%f", &ac);
	
	printf("Enter your registration number:");
	scanf("%d", &id);
	
	printf("1.Your height is %f\n", height);
	printf("2.Your account balance is %f\n", ac);
	printf("3.Your ID number is %d\n", id);
	
	return 0;
}
