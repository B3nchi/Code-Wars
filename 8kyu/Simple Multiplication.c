#include<stdio.h>
#include<math.h>

int simple_multiplication(int number) {
    
    int product;
    
	if(number % 2 == 0){
		product = number * 8;
		printf("%d", product);
	}
	else{
		product = number * 9;
		printf("%d", product);
	}
	return product;
}

int main(){
	
	int number;
	
	printf("Enter a number: ");
	scanf("%d", &number);
	
	simple_multiplication(number);
	
	return 0;
}

