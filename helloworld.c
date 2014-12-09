#include <stdio.h>

int main(void) {
	for(int i = 0; i < 10; i++) {
		if(i % 3 == 0) {
			printf("%d\n", i);
		} else {
			printf("HelloWorld\n");
		}
	}
	return(0);
}
