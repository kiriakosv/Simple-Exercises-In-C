#include<stdio.h>

int factorial(int i){
	if(i <= 1){
		return i;
	}
	else{
		return i + factorial(i - 1);
	}
}
	
int main(){
	int i;
	
	printf("Please give an integer number: ");
	scanf("%d", &i);
	printf("Factorial of %d is %d\n", i, factorial(i));
	return 0;
}