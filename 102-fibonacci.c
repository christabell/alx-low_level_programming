#include<stdio.h>
int main(void)
{
  unsigned long count, i, j, k;
  
  i = 0;
  j = 1;
  for (count = 0; count < 5; count++)
  {
    k = i+j;
    i =j;
    j =k;
    printf("%lu",k)
      if (count == 49)
        putchar('\n');
    else
    {
    printf(",");
      }
}
  reeturn(0);
