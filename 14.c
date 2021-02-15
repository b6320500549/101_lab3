#include<stdio.h>
int main()
{
	long long i=0,j=0,k=0;
	if(i>=0&&i<=2000000000)
		scanf("%lld",&i);
	if(i==0||i==1)
		printf("2");
    j=i;
    k=i;
	while(i>1)
	if((i%2==0||i%3==0||i%5==0||i%7==0)&&(i!=2 && i!=3 && i!=5 && i!=7))
		i--;
    else
    {
		break;
	}
    while(j<2000000000)
	if((j%2==0||j%3==0||j%5==0||j%7==0)&&(j!=2 && j!=3 && j!=5 && j!=7))
		j++;
	else
    {
		break;
	}
	if(k-i<j-k)
        printf("%lld",i);
    else
        printf("%lld",j);
	return 0;
}
