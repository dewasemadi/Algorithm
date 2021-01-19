#include <stdio.h>

int main()
{
	int jam1, menit1, detik1, total1, selisih;
	int jam2, menit2, detik2, total2;
	int jam3, menit3, detik3;
	
	scanf("%d %d %d", &jam1, &menit1, &detik1); //baca input
	scanf("%d %d %d", &jam2, &menit2, &detik2);
	
	total1= jam1*3600 + menit1*60 + detik1; //ubah ke detik
	total2= jam2*3600 + menit2*60 + detik2;
	
	if(total1>total2)
	total2+=86400;
	selisih = total2-total1; //itung selisih
	
	jam3 = selisih/3600; //konversi ke jam
	menit3 = (selisih%3600)/60; //sisa dari jam konversi ke menit
	detik3 = (selisih%3600)%60; //sisa dari jam dan menit
	
	printf("%d %d %d\n", jam3, menit3, detik3);
	return 0;
}
