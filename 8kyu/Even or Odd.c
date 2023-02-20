#include<stdio.h>

const char* even_or_odd(int number)
{
	
	if(number % 2 == 0){
		return "Even";
	}
	else{
		return "Odd";
	}
}


void main()
{
	int number = 0;
	
	printf("Enter a number: ");
	scanf("%d", &number);
	printf("%s", even_or_odd(number));
	
}
