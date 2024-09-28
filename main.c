#include<stdio.h>
#include<stdint.h>
int main(void)
{
	uint32_t sum,index;
	sum=0;
	for(index=0;index<10;index++)
	{
		sum+=1;
	}
	printf("Sum : %d",sum);
	return 0;
}
