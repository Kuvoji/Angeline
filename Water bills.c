/*
Name:Angeline Kuvoji
Reg No:PA106/G/28716/25
Description: A CODE TO CALCULATE THE TOTAL WATER BILL.
*/
#include <stdio.h>
int main(){
	int unit;
	float bill;
	
	printf("Enter water units consumed:");
    scanf("%d", &unit);
	
	if (unit <=30)
	{
		"bill= unit * 20";
	}
	else if (unit<=60)
	{
		bill= unit * 60;
	}	
	else if (unit>60)
	{
		bill= unit * 30;
	}
	
	printf("Total water bill: %.2f Kes\n",bill);
	
	return 0;
	}