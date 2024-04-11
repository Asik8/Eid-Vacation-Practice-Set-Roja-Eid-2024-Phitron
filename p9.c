#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdbool.h>

#define lli long long int
#define max_size 100000

int main()
{
    int t;
    scanf("%d",&t);

    for(int i=0;i<4;i++)
    {
        printf("%d",t%10);
        t/=10;
    }printf("\n");

    return 0;
}