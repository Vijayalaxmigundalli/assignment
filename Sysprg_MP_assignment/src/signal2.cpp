
#include<header.h>

using namespace std;

void proc_exit()
{
                int wstatus;
                pid_t   pid;

                while ( 1 ) {
                        pid = wait3 (&wstatus,  WNOHANG, (struct rusage *)NULL );
                        if (pid == 0)
                                return;
                        else if (pid == -1)
                                return;
                        else
            {
                            if (WIFEXITED(wstatus)) {
                       printf("exited, status=%d\n", WEXITSTATUS(wstatus));
                   } else if (WIFSIGNALED(wstatus)) {
                       printf("killed by signal %d\n", WTERMSIG(wstatus));
                   }
                        }
                }
}
int main ()
{
                atexit(mycleanup);
                signal (SIGCHLD, proc_exit);
                switch (fork()) {
                        case -1:
                                perror ("main: fork");
                                exit (0);
                        case 0:
                                printf ("I'm alive  my pid:%d, ppid:%d\n", getpid(), getppid());
                                sleep(5);
                                exit (1);
                        default:
                                pause();
                }
                return 0;
}

