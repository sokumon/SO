#include<stdio.h>
void main()
{
int i,j,n,block[20],start;
printf("Enter the no. of file:\n");
scanf("%d",&n);
printf("Enter the number of blocks needed foreach file:\n");
for(i=0;i<n;i++)
scanf("%d",&block[i]);
start=0;
printf("\t\tFile name\tStart\tSize of file\t\t\n");
printf("\n\t\tFile1\t\t%d\t\t\t%d\n",start,block[0]);
for(i=2;i<=n;i++)
{
start=start+block[i-2];
printf("\t\tFile%d \t\t%d\t\t%d\n",i,start,block[i-1]);
}
}