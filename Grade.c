#include <stdint.h>
#include <stdio.h>
#define main external_main // Ignore the main function in Main.c
#include "Main.c"
#undef main

int sendArray(int[],int);
int readAssemblyIntArray(int);
long readAssemblyQuadArray(int);
char readAssemblyCharArray(int);
uint8_t readAssemblyIntArrayByte(int);

int main() {

	int arr1[] = {5,10,3,75,23,1000,12,-22,-331,32324,-2301,-122};
	int i, result;
	for(i = 0; i < 12; i++) {
		result = sendArray(arr1,i);
		printf("arr[%d] = %d which is %X in hex\n",i,result,result);	
	}

	for(i = 0; i < 10; i++) {
		result = readAssemblyIntArray(i);
		printf("readAssemblyIntArray(%d) = %d which is %X in hex\n",i,result,result);	
	}

	loopIntArray();

	for(i = 0; i < 13; i++) {
		long hex = readAssemblyQuadArray(i);
		printf("readAssemblyQuadArray(%d) = %ld which is %lX in hex\n",i,hex,hex);	
	}

	loopQuadArray();

	for(i = 0; i < 78; i++) {
		char c = readAssemblyCharArray(i);
		printf("readAssemblyCharArray(%d) = %c which is %X in hex\n",i,c,c);	
	}

	loopCharArray();

	for(i = 0; i < 40; i++) {
		uint8_t byte = readAssemblyIntArrayByte(i);
		printf("readAssemblyIntArrayByte(%d) = %u which is %X in hex\n",i,byte,byte);
	}

	loopIntArrayBytes();
}