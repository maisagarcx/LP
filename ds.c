#include <stdio.h>
#include <stdlib.h>
float findHigher(double number1, double number2)
{
	float higher;
	if(number1>number2)
		higher=number1;
	else
		higher=number2;
	return higher;
}
int main()
{
	float number1, number2, higher;
	printf("Input two numbers. The program will say which one is higher.\n\n");
	scanf("%f %f", &number1, &number2);
	if(number1==number2)
	{
		printf("The numbers are equal. Try again");
	}
	printf("%f", findHigher(number1, number2));
}
