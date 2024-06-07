#include <stdio.h>

int main()
{
	// variable = Allocated space in memory to store a value.
	//				we refer to a variable's name to access the stored value.
	//				That variable now behaves as if it was the value it contains.
	//				BUT we need to declare what type of data we are storing.

	int x; //declaration
	x = 1234; //intialization
	int y = 321; //declaration + intialization

	int age = 26; // integer
	float gpa = 2.05; //floating point number
	char grade = 'C'; //single character
	char name[] = "Bro"; //array of characters

	printf("Hello %s\n",name);
	printf("You are %d years old",age);
	printf("Your average grade is %c\n",grade);
	printf("Your gpa is %f\n",gpa);
	return 0;
}