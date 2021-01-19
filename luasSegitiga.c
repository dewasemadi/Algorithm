#include <stdio.h>

int main()
{
	float a, t, luas;
	scanf("%f %f", &a, &t); //baca alas & tinggi
	
	luas = (a*t)/2;
	
	printf("%.4f\n", luas); //4 angka dibelakang koma
	return 0;
}
