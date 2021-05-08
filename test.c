#include <stdio.h>

int x = 1;
int y = 2;
int addtwonum();

int main() {
	int result;
	result = addtwonum();
	printf("result: %lu\n",result);

	return 0;
}
