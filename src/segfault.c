#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>


int main(int argc, char const *argv[]) {
	int *p;
	//FIX:
	//p = malloc(sizeof(int));
	printf("Value at address %p is %d\n", p, *p);
	//FIX:
	//free(p);
	printf("Program executed successfully\n");
	return 0;
}
