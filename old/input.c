#include <stdio.h>
#include <stdlib.h>

int main()
{
	int age;
	printf("Enter your age: ");
	scanf("%d", &age);
	printf("Your are %d years old\n", age);
	float gpa;
	printf("Enter your gpa: ");
	scanf("%f", &gpa);
	printf("This is your gpa: %f \n", gpa);
	//char name[25];
	//printf("Enter your name: \n");
	//fgets(name, 25, stdin);
	//printf("Your name is %s\n", name);	
	return 0;
}