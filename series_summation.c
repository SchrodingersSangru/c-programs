/*  
C program to find sum of following series
 1+ 1/2^2 + 1/3^3 + 1/4^4 + 1/5^5 + .. 1/N^N
*/

#include<stdio.h>
#include<math.h>
    
int main()
{
	int i,N;
	float sum;
	
	/read value of N/
	printf("Enter the value of N: ");
	scanf("%d",&N);
	
	/set sum by 0/
	sum=0.0f;
	
	/calculate sum of the series/
	for(i=1;i<=N;i++)
		sum = sum + ((float)1/((float)pow(i, i)));
	
	/print the sum/
	
	printf("Sum of the series is: %f\n",sum);
	
	return 0;
}
