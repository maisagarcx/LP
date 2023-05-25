#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#define MAX 100
int readVector(int vector[], int size)
{
	for(int i=0;i<size;i++)
	{
		printf("vector[%d]: ", i+1);
		scanf("%d", &vector[i]);
	}
}
int findBiggestValue(int vector[], int size)
{
	int LargestOne=vector[0];
	for(int i=0;i<size;i++)
	{
		if(vector[i]>LargestOne)
		LargestOne=vector[i];	
	}
	return LargestOne;
}
int findLowestValue(int vector[], int size)
{
	int SmallestOne=vector[0];
	for(int i=0;i<size;i++)
	{
		if(vector[i]<SmallestOne)
		SmallestOne=vector[i];	
	}
	return SmallestOne;
}
double findMeanValue(int vector[], int size)
{
	double sum=0.0;
	for(int i=0;i<size;i++)
	{
		sum+=vector[i];	
	}
	return sum/size;
}
double findDeviation(int vector[], int size, double meanValue)
{
	double sum=0.0;
	for(int i=0;i<size;i++)
	{
		sum+=pow(vector[i]-meanValue, 2);
	}
	return sqrt(sum/(size-1));
}
int main()
{
	int size, vector[MAX];
	double meanValue;
	
	printf("Input the size of the vector.\n");
	scanf("%d", &size);
	readVector(vector, size);
	printf("The biggest value is: %d\n", findBiggestValue(vector, size));
	printf("The smallest value is: %d\n", findLowestValue(vector, size));
	printf("The mean value is: %f\n", findMeanValue(vector, size));
	printf("The deviaton value is: %f\n", findDeviation(vector, size, findMeanValue(vector, size)));
	return 0;

}
