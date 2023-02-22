#include<stdio.h>



int main(){

	int a = 0;
	int b = 0; 
	
	printf("Enter first number: ");
	scanf("%d", &a);
	printf("Enter second number: ");
	scanf("%d", &b);
	
	printf("%d", multiply(a, b));
	
	return 0;
}


int multiply(int a, int b) {
  
  int product = 0;
  product = a * b;
  return product;
}
