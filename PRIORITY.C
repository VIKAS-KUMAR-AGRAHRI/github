#include <stdio.h>
#include <conio.h>
#include <math.h>
void main(){
int bt[20],p[20],wt[20],tat[20],pr[20],i,j,n,total=0,pos,temp,avg_wt,avg_tat;
clrscr();
printf("Enter total no. of process");
scanf("%d",&n);
printf("enter the burst time and priority\n");
for(i=0;i<n;i++)
{
 scanf("\n p[%d]\n",i+1);
 printf("Burst time\n");
 scanf("%d",&bt[i]);
 printf("Priority\n");
 scanf("%d",&pr[i]);
 p[i]=i+1;
}
//sort the data using selection sort in ascending order......
for(i=0;i<n;i++)
{
 pos=i;
 for(j=i+1;j<n;j++)
 {
   if(pr[j]<pr[pos])
	pos=j;
 }
 temp=pr[i];
 pr[i]=pr[pos];
 pr[pos]=temp;
 temp=bt[i];
 bt[i]=bt[pos];
 bt[pos]=temp;
 temp=p[i];
 p[i]=p[pos];
 p[pos]=temp;
}
//calculate waiting time for first process i zero............
wt[0]=0;
for(i=1;i<n;i++)
{
 wt[i]=0;
 for(j=0;j<i;j++)
 {
  wt[i]+=bt[j];
 }
 total+=wt[i];
}
//average waiting  time
avg_wt=total/n;
total=0;
printf("\nprocess \t Burst time \t priority \t Waiting Time \tTurn arround time");
for(i=0;i<n;i++)
{
  tat[i]=bt[i]+wt[i];//calculate turn arround time.
  total+=tat[i];
  printf("\n p[%d]\t\t %d\t\t %d\t\t %d \t\t%d",p[i],bt[i],pr[i],wt[i],tat[i]);
}
avg_tat=total/n;//avg turn arround time..
printf("\n\n Average waiting time =%d",avg_wt);
printf("\n\n Average turn arround time=%d",avg_tat);
getch();
}