/*
Name:Angeline Kuvoji
Reg No:PA106/G/28716/25
Description: A CODE TO DISPLAY ELIGIBILITY FOR EXAMS.
*/
#include <stdio.h>
int main(){
    float Average;
    float attendance;
    
    printf("attendance>=70%:\n");
    printf("Average>=40:\n");

	printf("Enter attendance percentagee:\n");
	scanf("%f" ,&Average);
	
	if (attendance >=75&& Average >=40)
	{
		printf("Eligible for exams.\n");
	}
	else 
	{
		printf("Not eligible.\n");
	}
	return 0;
}