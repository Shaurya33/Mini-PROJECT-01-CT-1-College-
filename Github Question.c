#include<stdio.h>
int main()
{
	int amountgiven,billedamount,quotient,remainder;
	scanf("%d\n%d",&billedamount,&amountgiven);
	
	quotient=billedamount/amountgiven;
	remainder=billedamount%amountgiven;
	
	printf("Quotient:- %d\n",quotient);
	printf("Remainder:- %d",remainder);
	return 0;
}
