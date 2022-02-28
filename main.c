#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
    pid_t pid1, pid2;

    if ( (pid1=fork()) == 0 )
    { /* hijo */
        printf("Soy el primer hijo (%d, hijo de %d)\n",  getpid(), getppid());
    }
    else
    { /*  padre */
        if ( (pid2=fork()) == 0 )
        { /* segundo hijo  */
            printf("Soy el segundo hijo (%d, hijo de %d)\n",  getpid(), getppid());
        }
        else
        {
            printf("Soy el padre (%d, hijo de %d)\n", getpid(), getppid());
            sleep(20);
        }
    }

    return 0;
}