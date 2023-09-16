#include<stdio.h>
int main()
{
	int nm[9],i,sum=0;
	printf("Enter the elements\n");
	for(i=1;i<=9;i++)
	{
    scanf("%d",&nm[i]);
	if(nm[i]%2==1)
	{
		sum+=nm[i];
	}
}
printf("Sum of Odd numbers is %d",sum);
return 0;
}
