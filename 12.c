#include <stdio.h>
int main()
{
    int k,x = 2;
    scanf("%d", &k);
    while(k != 1)
        {
        while(k % x == 0){
            printf("%d\n", x);
            k = k / x;
        }
        x++;
        }
    printf("%d\n", k-1);
        return 0;
}

