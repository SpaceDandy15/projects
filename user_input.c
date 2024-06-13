#include <stdio.h>
#include <string.h>

int main()
{
	char name[26]; // bytes
	int age;

	printf("What is you're name?");

	//scanf("%s", &name);
	 // using %s to list appropriate format specifier for character arrays
	fgets(name, 26, stdin);
	 // if you type last name it wont show unless you use this because of the whitespace name of variable input size and standard input
	 name[strlen(name)-1] = '\0';
	printf("\nhow old are you?");
	 // display output
	scanf("%d", &age);
	// display input use "%d" to accept numbers follwed b &age to name the variable

	printf("\nHello %s, I LOVE YOU SO MUCH! <3", name); // outputting your name and age
	printf("\nYou are %d years old", age);

	return 0;
}