#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[]) {

    pid_t pid1, pid2;
    int numero;
    
    printf("Ingresa un numero: ");
    scanf("%d", &numero);

    if ((pid1 = fork()) == 0) { 
    
    	// Hijo 
        int n1 = 0;
        int n2 = 1;
        int n3;

        printf(" F: %d F: %d", n1, n2);

        for (int i = 2; i < numero; i++) {
            n3 = n1 + n2;
            printf(" F: %d", n3);
            n1 = n2;
            n2 = n3;
        }
        
    }
    
    printf("\n");

    return 0;
}
