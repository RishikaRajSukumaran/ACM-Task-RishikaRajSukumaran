#include <assert.h>
#include <ctype.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
int arr[1000],num;
scanf("%d",&num);
for(int i=0;i<num;i++)
scanf("%d",&arr[i]);
int sum=0;
for(int i=0;i<num;i++)
sum=sum+arr[i];
printf("%d\n",sum);
}
