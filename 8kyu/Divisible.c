#include <stdio.h>
#include <stdbool.h>

bool isDivisible(int n, int x, int y) {
    int flag = false;
    if(n % x == 0 && n % y == 0)
    {
        flag = true;
    }
    return flag;
}


void main() 
{
	int n = 0;
	int x = 0;
	int y = 0;
	
	printf("Enter a number: ");
	scanf("%d", &n);
	printf("Enter first divisor: ");
	scanf("%d", &x);
	printf("Enter second divisor: ");
	scanf("%d", &y);
	
	printf(isDivisible(n, x, y)? "true" : "false");
    
}


