#include <stdio.h>
int main()
{
	int menit, tarif;
	scanf("%d", &menit);
	
	tarif=2000+(menit/60)*1000;
	
	if(tarif>=8000)
		printf("8000\n");
	else printf("%d\n", tarif);
	return 0;
}
