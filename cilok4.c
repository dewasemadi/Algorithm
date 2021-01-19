#include <stdio.h>
int main()
{
	int a, b, diskon2, totaldiskon, total; //a adalah jenis pembayaran, b adalah jumlah cilok
	scanf("%d", &a); //1=kredit, 2=debit, 3=IPB-Pay
	scanf("%d", &b); //jumlah cilok
	
	b*=10000;
	if(a==1)
	{
		totaldiskon=0.1*b;
		if(b>=100000)
		{
			diskon2=0.1*b;
			totaldiskon+=diskon2;
		}
		total=b-totaldiskon;
	}
	if(a==2)
	{
		totaldiskon=0.2*b;
		if(b>=100000)
		{
			diskon2=0.1*b;
			totaldiskon+=diskon2;
		}
		total=b-totaldiskon;
	}
	if(a==3)
	{
		totaldiskon=0.5*b;
		total=b-totaldiskon;
	}
	printf("%d\n", b);
	printf("%d\n", totaldiskon);
	printf("%d\n", total);
	return 0;
}
