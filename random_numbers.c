//=======================================================================
// Copyright (c) 2014 Kiriakos Velissariou
// Distributed under the MIT License.
// (See accompanying file LICENSE or copy at
//  http://opensource.org/licenses/MIT)
//=======================================================================

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int myrandom(){
	srand(time(NULL));
	return (rand()%10);
}

int main(){
	int number, input;
	
	number = myrandom();
	do{
		printf("\nGuess the number(0 to 10): ");
		scanf("%d", &input);
		if(input < number){
			printf("Higher!\n");
		}
		if(input > number){
			printf("Lower\n");
		}
	}while(number != input);
	printf("Correct number!\n");
	scanf("%d", input);
	return 0;
}
