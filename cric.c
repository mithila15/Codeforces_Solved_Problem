#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int main() {

int i,n,k,r;
int count=0;
scanf("%d %d",&n,&k);
for(i=1;i<=n;i++)
{
    scanf("%d",&r);
    if(r<k)
    {
        count++;
    }
}
printf("%d\n",count);
    return 0;
}

