#include <stdio.h>
int main()
{
  long long a;
  scanf("%lld",&a);
  if(a>=0&&a<=2000000000)
  {
  if(a==0||a==1||a==2)
  printf("%lld",2);
  if((a!=0&&a!=1&&a!=2)&&a%2==0)
  {
   printf("%lld",a-1);
  }
  else if(a!=0&&a!=1&&a!=2)
  printf("%lld",a);
  }

}
