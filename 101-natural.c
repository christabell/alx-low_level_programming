#include<stdio.h>

int main(void)
{
int i, res;

for(i =0; i < 1024; i++)
if(i % 3 ==0 || i % 5 == 0)
res += i;
printf("%d\n", res);
rturn(0);
}
