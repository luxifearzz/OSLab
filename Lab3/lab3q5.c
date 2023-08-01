#include <stdlib.h>
#include <stdio.h>
int main(int argc, char* argv[]) {
	int i, sum = 0;
	printf("argc = %d\n", argc);
	printf("Let's see what is in argv[]\n");
	printf("argv[0] = %s\n", argv[0]);
	if (argc > 1) {
		for (int i = 1; i < argc; i++) {
			printf("argv[%d] = %s\n", i, argv[i]);
			sum += atoi(argv[i]);
		}
	}
	return 0;
}
