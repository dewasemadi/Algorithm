#include <stdio.h>

int main()
{
	int usia, tahun, bulan; //usia dalam satuan bulan
	scanf("%d", &usia);
	
	tahun=usia/12;
	bulan=usia%12;
	
	printf("%d %d\n", tahun, bulan);
	return 0;
}	
