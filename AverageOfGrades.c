/*An class has 5 students, each and one of them have 5 grades. Calculate the average of grades of the class*/
#include <stdio.h>
#define NUMBER_OF_STUDENTS 3
#define NUMBER_OF_GRADES 2
struct student{
	int cod;
	int grades[NUMBER_OF_GRADES];
};	
/*If you use (typedef struct student STS;), you can change, in the code, "struct student" for "STS"*/
void readCode(struct student *ST){
	for(int i=0;i<NUMBER_OF_STUDENTS;i++){
		printf("Student [%d]: ", i+1);
		scanf("%d", &ST[i].cod);
		fflush(stdin);
	}
}
void readGrade(struct student *ST){
	for(int i=0;i<NUMBER_OF_STUDENTS;i++){
	printf("Student [%d]:\n", ST[i].cod);
		for(int j=0;j<NUMBER_OF_GRADES;j++){
			printf("Grade[%d]: ", j+1);
			scanf("%d", &ST[i].grades[j]);
		}
	}
}
double sum(struct student *ST){
	int sum=0;
	double medium;
	for(int i=0;i<NUMBER_OF_STUDENTS;i++){
		for(int j=0;j<NUMBER_OF_GRADES;j++){
			sum+= ST[i].grades[j];
		}
	}
	medium = sum/(NUMBER_OF_STUDENTS*NUMBER_OF_GRADES);
	return medium;
}
void showResult(double medium){
	printf("The medium of the grades is: %f", medium);
}
int main() {
	struct student ST[NUMBER_OF_STUDENTS];
	printf("Input the number of the code of each student:\n");
	readCode(ST);
	printf("Input the notes of each student:\n");
	readGrade(ST);
	showResult(sum(ST));
	return 0;
}
