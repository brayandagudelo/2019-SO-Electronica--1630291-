#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "common.h"

int main(int argc, char *argv[]) {
    if (argc != 2) { 
	fprintf(stderr, "usage: mem <value>\n"); 
	exit(1); 
    } 
    int *p; //apuntador pues tiene el "*". imprime p y duevuelve la dirección de memoria
    p = malloc(sizeof(int)); //para calcular los bits
    assert(p != NULL); 
    printf("(%d) addr pointed to by p: %p\n", (int) getpid(), p);
    *p = atoi(argv[1]); // assign value to addr stored in p
    while (1) {
	Spin(1);
	*p = *p + 1; //suma uno al valor que hay en p
	printf("(%d) value of p: %d\n", getpid(), *p);
    }
    return 0;
}
