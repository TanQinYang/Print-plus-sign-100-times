#include <stdio.h>
#include <stdlib.h>

int main()
{
int b;
printf("How many times do you wanna print '+' : ");
scanf("%d",&b);
int a;
int sum=0;
for(a=1;a<=b;a=a+1)
printf("+");
    return 0;
}
