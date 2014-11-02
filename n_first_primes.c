//=======================================================================
// Copyright (c) 2014 Kiriakos Velissariou
// Distributed under the MIT License.
// (See accompanying file LICENSE or copy at
//  http://opensource.org/licenses/MIT)
//=======================================================================

#include<stdio.h>

void main(void){	
	int primes_found, i, divisor, is_prime, k;
	
	printf("How many numbers do you want to find? ");
	scanf("%d", &k);
	primes_found = 0;
	i = 2;	
	while (primes_found < k){
		divisor = 2;
		is_prime = 1;
		while (divisor <= i / 2){
			if (i % divisor == 0){
				is_prime = 0;
				break;
			}
			divisor += 1;
		}
		if (is_prime == 1){
			printf("%d\n", i);
			primes_found += 1;
		}
		i = i + 1;
	}
	scanf("%d", &i);
}
