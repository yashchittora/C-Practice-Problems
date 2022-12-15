#include <stdio.h>

int main(){
	int n = 5;
	char alpha = 'A';
	for (int i = 1; i<=n; i++){
		for (int j = 1; j<=i; j++,alpha++){
			printf("%c",alpha);
		}
		printf("\n");
	}

	return 0;
}


// A
// BC
// DEF
// GHIJ
// KLMNO