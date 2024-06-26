#include <stdio.h>

int main()
{
	// array = data structure that can store many values of the same data type.

	double prices[5] = {5.0, 10.0, 15.0, 20.0};

	for(int i = 0; i < 5; i++)
	{
		printf("$%lf\n", prices[i]);
	}
	return 0;
}