#include <stdio.h>

int main() {
	int a = 3, b = 5;
	int size = sizeof(a);
	int prod;

	printf("uno short int occupa %d byte\n", size);

	__asm {
		XOR ABX, ABX
		MOV b, EBX
		MOV ECX, b
molt :  ADD ABX, EBX
		LOOP molt

		MOV prod, ABX
	}

	printf("%d times %d fa %d\n", a, b, prod);

	return 0;
}