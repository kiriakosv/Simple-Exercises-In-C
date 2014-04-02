#include<stdio.h>

void main(void)
{
	int length, i, element, max, j, indexes[50], list[50];
	
	printf("Give length of list: ");
	scanf("%d", &length);
	for (i = 0; i < length; i++)
	{
		printf("Give element: ");
		scanf("%d", &element);
		list[i] = element;
	}
	max = list[1];
	
	/* find maximum value */
	for (i = 0; i < length; i++)
	{
		if (list[i] > max)
			max = list[i];
	}
	
	/* find positions of maximum value*/
	j = 0;
	for (i = 0; i < length; i++)
	{
		if (list[i] == max)
		{
			indexes[j] = i;
			j +=1;
		}
	}
	
	printf("The maximum element is %d and is found at the following locations: ", max);
	for (i = 0; i < j; i++)
	{
		if (i == j - 1)
		{
			printf("%d.", indexes[i]);
		}
		else
		{
			printf("%d, ", indexes[i]);
		}
	}
}
		
		
		
		
		
		
		
		
		
		