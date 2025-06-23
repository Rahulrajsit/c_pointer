#include <stdio.h>

int fun(int, int);
int main() {
	int (*fun_ptr)(int, int);
	fun_ptr = fun;
	int result = fun(10, 30);

	printf("Result is: %d", result);
	return 0;
}

int fun(int a, int b) {
	return a + b;
}
