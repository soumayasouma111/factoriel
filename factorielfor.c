#include<stdio.h>
int main(){
int x, i , r=1;
printf("put the nembers\n");
scanf("%d",&x);
for ( i = 1; i <= x; i++)
{
    r = r * i;
}
printf("factorielle de %d=%d\n",x,r);
return 0;
}
