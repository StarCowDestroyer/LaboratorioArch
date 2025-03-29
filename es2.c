#include <stdio.h>

int main() {
	unsigned int Num = 1089;
	unsigned int Radice;
	
	__asm {
		MOV EAX, Num
		MOV Radice, 0
		MOV EBX, 1    //EBX = S
iter:  
		SUB EAX, EBX
		CMP EAX, 0
		JL  fine
		INC Radice
		ADD EBX, 2
		JMP iter
		

fine:	//stampa radice
	}

	printf("Radice = %d\n", Radice);
	return 0;
}
