#include <stdio.h>

int main()
{
	// format specifier % = defines and formats a type of data to be displayed

	// %c = charcter
	// %s = string (array of characters)
	// %f = float
	// %lf = double
	// %d = integer
	
	// %.1 = decimal precison
	// %1 = minimum field width 
	// %- = left align

float item1 = 5.75;
float item2 = 10.00;
float item3 = 100.99;

printf("Item 1: $%f.2\n", item1);
printf("Item 1: $%f.2\n", item2);
printf("Item 1: $%f.2\n", item3);

return 0;
}