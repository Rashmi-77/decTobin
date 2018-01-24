#include <stdio.h>
#include <stdlib.h>

/* Divide the number by 2 continously till the remainder is 1 or 0.*/

int convert(int);
void single_dectobin();
void range_dectobin();

void single_dectobin()
{
	int dec_num,t;

	printf("Enter the decimal number\n");
	scanf("%d",&dec_num);
	t = convert(dec_num);
	printf("Decimal number = %d\t Binary number = %d",dec_num,t);
	return;
}

void range_dectobin()
{
	int fir_num,sec_num,i,temp,t;
	printf("Enter the range of decimal numbers\n");
	scanf("%d %d",&fir_num,&sec_num);
	
	if(fir_num > sec_num)
	{
		temp = fir_num;
		fir_num = sec_num;
		sec_num  = temp;
	}	
	
	for(i=fir_num;i<sec_num;i++)
	{
		t = convert(i);
		printf("Decimal number = %d\t Binary number = %d\n",i,t);
	}
	return;	
}

int convert(int dec_num)
{
	if(dec_num == 0)
		return 0;
	else	
	{
		return((dec_num %2) + 10 * convert(dec_num /2));
	} 
}

void main()
{
	int choice;

	printf("Enter the Choice\n 1:Single decimal number\n2:Range of numbers\n0:Exit\n");
	scanf("%d",&choice);
	
	switch(choice)
	{	
		case 0:
			break;
		case 1:
			single_dectobin();
			break;
		case 2:
			range_dectobin();
			break;
	}
}

