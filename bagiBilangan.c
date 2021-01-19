#include <stdio.h>
int main()
{
	long int n, a, b, x = 0;		  //n=banyak kartu, a&b = bilangan pembagi
	scanf("%ld %ld %ld", &n, &a, &b); //baca input data

	for (int i = 1; i <= n; i++) //banyaknya pengulangan
	{
		if (i % a == 0 || i % b == 0) //kondisi angka berurutan yang abis dibagi a & b
			x += 1;					  //tambah 1 apabila bernilai true
	}
	printf("%ld\n", x); //cetak jumlah bilangan yang habis dibagi a & b
	return 0;
}
