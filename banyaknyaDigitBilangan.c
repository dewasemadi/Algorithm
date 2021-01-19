#include <stdio.h>

int main() 
{
	long int angka;
	scanf("%ld", &angka);
	long int i = angka, c = 0;
	while(i>0)
	{
		i=(i-(i%10))/10; 
		c++;
	}
	printf("%ld\n", c);
	
	return 0;
}
