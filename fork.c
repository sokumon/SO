#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
int main()
{
 printf("Fork implementation.\n\n");
 if(fork()== 0 ){
 int mypid = getpid();
 int ppid = getppid();
 printf("Child: PID = %d,PPID = %d\n",mypid,ppid);
 } else{
 int mypid = getpid();
 int ppid = getppid();
 printf("Parent: PID = %d,PPID = %d\n",mypid,ppid);
 }
 return 0;
}