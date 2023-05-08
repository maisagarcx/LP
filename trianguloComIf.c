#include <stdio.h>
int main ()
{
	int ang1, ang2, ang3;
	printf("Insira os tres angulos do triangulo que desejas analisar: \n");
	scanf("%d %d %d", &ang1, &ang2, &ang3);
	
	if(ang1+ang2+ang3 != 180)
		printf("Isso nao e um triangulo, tente novamente");
	else
	{
		if(ang1 == ang2 && ang2 == ang3 && ang3 == ang1)
			printf("Seu triangulo e equilatero");
		else if(ang1 == ang2 || ang2 == ang3 || ang3 == ang1)
			printf("Seu triangulo e isoceles");
		else
			printf("Seu triangulo e escaleno");
	}
	return 0;
}
