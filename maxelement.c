//=======================================================================
// Copyright (c) 2014 Kiriakos Velissariou
// Distributed under the MIT License.
// (See accompanying file LICENSE or copy at
//  http://opensource.org/licenses/MIT)
//=======================================================================

#include<stdio.h>
#define MAX 100

int size;
int getMaxElement(int myarr[]){
	static int i = 0, max = -9999;
	if(i < size){
		if(max < myarr[i]){
			max = myarr[i];
		}
		i++;
		getMaxElement(myarr);
	}
	return max;
}

int getMinElement(int myarr[]){
	static int i = 0, min = 9999;
	if(i < size){
		if(min > myarr[i]){
			min = myarr[i];
		}
		i++;
		getMinElement(myarr);
	}
	return min;
}

int main(){
	int myarr[MAX], max, min, i;
	
	printf("Please enter the size of the array: ");
	scanf("%d", &size);
	printf("Enter the elements of the array: ");
	for(i = 0; i < size; i++){
		scanf("%d", &myarr[i]);
	}
	max = getMaxElement(myarr);
	min = getMinElement(myarr);
	printf("The largest element of the array is: %d\n", max);
	printf("The smallest element of the array is: %d", min);
}
