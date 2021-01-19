#include <stdio.h>

int main(){
	int p, x, n; //deklarasi variabel
	scanf("%d", &p); //baca nilai p
	while(1)
	{
		scanf("%d", &x);
		if(x==-9) //berhenti saat inputan -9
			break;
		else
		{
			switch(x)
			{
				case 1:
					scanf("%d", &n);
					p+=n; //menambahkan n ke dalam p
					break;
				case -1:
					scanf("%d", &n);
					p-=n; //menguragi p dengan n
					break;
				case 0:
					p=0; //p bernilai 0
					break;
				case 9:
					printf("%d\n", p); //tampilkan p
					break;
			}
		}
	}
	return 0;
}
