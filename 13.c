#include <stdio.h>
int main()
{
    int k,x = 2;
    scanf("%d",&k);
    if(k>0&&k<=1000)
    {
        if(k==1)
         printf("%d\n",k);
        else
        {
          while(k != 1)
        {
        while(k % x == 0){
            printf("%d\n", x);
            k = k / x;
        }
        x++;
        }
        }

        printf("%d\n",0);
    }

        return 0;
}

