#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    pid_t pid1, pid2;
    int numero

    if ( (pid1=fork()) == 0 )
    { /* hijo */
        printf("Soy el primer hijo (%d, hijo de %d)\n",  getpid(), getppid());
        
        int n1 = 0;
        int n2 = 1;
        int n3;

        printf(" F:" + n1 + " F:" + n2);

        for (int i = 2; i < numero; i++) {
            n3 = n1 + n2;
            System.out.print(" F:" + n3);
            n1 = n2;
            n2 = n3;
        }
    }
    else
    { /*  padre */
        if ( (pid2=fork()) == 0 )
        { /* segundo hijo  */
            printf("Soy el segundo hijo (%d, hijo de %d)\n",  getpid(), getppid());
            for (int i = 1; numero >= i; i++) {
            if (numero % i == 0) {
                printf(" P:" + i);
            }
        }
        }
        else
        {
            printf("Soy el padre (%d, hijo de %d)\n", getpid(), getppid());
            sleep(20);
            
            int factorial = 1;

        for (int i = 1; numero >= i; i++) {


            factorial = factorial * i;


        }
        printf(" Fc:" + factorial);
            
        }
    }

    return 0;
}
