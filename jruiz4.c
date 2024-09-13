//Jesus D. Ruiz Aquino 
//CSC 341 
//Lab 4

#include <stdio.h>
#include <stdlib.h>

int x;
int y = 21;

int main (int argc, char *argv[]){

	int *values;
	int i;
	int z = 0;
	

	values = (int *)malloc(sizeof(int)*5);


	printf("The address of the argc is %p\n", &argc);
	printf("The address of the heap varible is %p\n", &values);
	printf("The address of  the unitialized variable x is %p\n", &x);
	printf("The address of the itialized variable y is %p\n", &y);

	int array1[5] = {0,1,2,3,4};

	int *pointer1;

	printf("The value of variable z is %d\n" , z);
	printf("The address of variable z is %p\n", &z);

	printf("The value of pointer1= %p which is the same as the address of z which is %p\n", pointer1,&z);

	for (i = 0; i < 5; i++){
		printf("array1[%d] = %d with address of %p\n",i,array1[i], &array1[i]);
	}

	return EXIT_SUCCESS;
}
