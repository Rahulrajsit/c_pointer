#include <stdio.h>
int main()
{

	printf("===========================================================\n");
	int intP1= 20;
	float floatP1= 20.212222222222222222222222222;
	char charP1='A';
	double doubleP1=20.212222222222222222222222222;

	printf("Size of int pointer: %d bytes\n", (intP1));
	printf("Size of float pointer: %f bytes\n", (floatP1));
	printf("Size of char pointer: %c bytes\n", (charP1));
	printf("Size of double pointer: %lf bytes\n", (doubleP1));

	printf("Size of int pointer: %lu bytes\n", sizeof(intP1));
	printf("Size of float pointer: %lu bytes\n", sizeof(floatP1));
	printf("Size of char pointer: %lu bytes\n", sizeof(charP1));
	printf("Size of double pointer: %lu bytes\n", sizeof(doubleP1));


	printf("===========================================================\n");
	int* intP= &intP1;
	float* floatP= &floatP1;
	char* charP= &charP1;
	double* doubleP= &doubleP1;
	printf("Size of int pointer: %d bytes\n", (*intP));
	printf("Size of float pointer: %f bytes\n", (*floatP));
	printf("Size of char pointer: %c bytes\n", (*charP));
	printf("Size of double pointer: %lf bytes\n", (*doubleP));


	// Printing the sizes of pointers to different data types
	printf("Size of int pointer: %lu bytes\n", sizeof(intP));
	printf("Size of float pointer: %lu bytes\n", sizeof(floatP));
	printf("Size of char pointer: %lu bytes\n", sizeof(charP));
	printf("Size of double pointer: %lu bytes\n", sizeof(doubleP));


	printf("===========================================================\n");
	int**intP2 = &intP;
	float** floatP2 = &floatP;
	char** charP2 = &charP;
	double** doubleP2 = &doubleP;
	printf("Size of int pointer: %d bytes\n", (**intP2));
	printf("Size of float pointer: %f bytes\n", (**floatP2));
	printf("Size of char pointer: %c bytes\n", (**charP2));
	printf("Size of double pointer: %lf bytes\n", (**doubleP2));


	// Printing the sizes of pointers to different data types
	printf("Size of int pointer: %lu bytes\n", sizeof(intP2));
	printf("Size of float pointer: %lu bytes\n", sizeof(floatP2));
	printf("Size of char pointer: %lu bytes\n", sizeof(charP2));
	printf("Size of double pointer: %lu bytes\n", sizeof(doubleP2));

	return 0;
}
