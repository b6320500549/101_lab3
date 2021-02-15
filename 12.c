#include<stdio.h>
int main()
{
int i=0,num,k,j,time[48]={0},max=0,x;
scanf("%d",&num);
for(i=0;i<num;i++)
{
scanf("%d %d",&k,&j);
time[k-1]+=j;
}
for(i=0;i<48;i++)
{
if(max<time[i])
{
max=time[i];
x=i;
}
}
printf("%d %d",x+1,time[x]);
}


