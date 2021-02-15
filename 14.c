#include <stdio.h>
int main()
{
  long long a;
  scanf("%lld",&a);
  if(a>=0&&a<=2000000000)
  if(a%2 == 0)
  printf("%lld",a-1);
  else
  printf("%lld",a);
}
