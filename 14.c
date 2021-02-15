#include<stdio.h>
int main(){

	long long  i;
	if(i>=0&&i<=2000000000)
		scanf("%ld",&i);
	if(i==0||i==1)
		printf("2");
	while(i>1)
	if((i%2==0||i%3==0||i%5==0||i%7==0)&&(i!=2 && i!=3 && i!=5 && i!=7))
		i--;

	else{
		printf("%ld ",i);
		break;
	}


	return 0;
}
