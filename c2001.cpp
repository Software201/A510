
#include <stdio.h>
int main() {
	int i,x,sum = 0;
	printf("输入一个数:");
    scanf("%d",&i);
    sum = i;
	for (x = 1; i >= 10 ;x++)
	{   sum = 0;
	   while(i > 0) {
		 sum += i % 10;
		 i = i/10;		
	  }
    if (sum >= 10)
	   i = sum;
	} 
	printf(" %d ",sum);
	return 0;
}



