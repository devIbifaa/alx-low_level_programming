#include <stdio.h>

int main(void)
{
int a[5] = {98, 97, 96, 95, 94};
int *p;

p = a;
printf("a[2] = %d\n", *(p + 2));
return (0);
}
