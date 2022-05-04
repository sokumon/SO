#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<signal.h>
void handler(int num){
write(STDOUT_FILENO, “I won’t die!\n”,13);
}
int main()
{
signal(SIGINT, handler);
while(1)
{
printf(“wasting your cycles. %d\n”, getpid());
sleep(1);}