#include <stdio.h>

int main() {
	int a = 3, b = 5;
	int size = sizeof(a);
	int prod;

	printf("uno short int occupa %d byte\n", size);

	__asm {
		XOR EAX, EAX
		MOV EBX, a
		MOV ECX, b
molt :  ADD EAX, EBX
		LOOP molt

		MOV prod, EAX
	}

	printf("%d times %d fa %d\n", a, b, prod);

	return 0;
}