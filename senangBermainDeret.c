#include <stdio.h>
int main()
{
	int a, b, hasil, total;
	scanf("%d %d", &a, &b);
	
	for(int i=0; i<b; i++)
	{
		hasil=((a+i)*(a+i));
		total+=hasil;
	} 
	printf("%d\n", total);
	return 0;
}
