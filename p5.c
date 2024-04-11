#include<stdio.h>
#include<math.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<stdbool.h>

#define lli long long int
#define max_size 100000

int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main()
{
        int n,sum = 0;
        scanf("%d",&n);
        for (int i = 1; i <= n; i++) {
            sum+=i;
        }
        printf("%d\n",sum);
    return 0;
}