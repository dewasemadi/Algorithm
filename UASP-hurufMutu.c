#include <stdio.h>

int main(){
	int n, a, b, c;
	float nilai;
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		scanf("%d %d %d", &a, &b, &c);
		nilai=(a+b+c)/3.0;
		
		if(a>60 && b>60 && c>60 && (a+b+c)/3 > 75)
			printf("%.2f A\n", nilai);
		else if(a>40 && b>40 && c>40 && (a+b+c)/3 > 60)
			printf("%.2f B\n", nilai);
		else if(a!=0 && b!=0 && c!=0 && (a+b+c)/3 > 50)
			printf("%.2f C\n", nilai);
		else if(a!=0 && b!=0 && c!=0  && (a+b+c)/3 > 40)
			printf("%.2f D\n", nilai);
		else
			printf("%.2f E\n", nilai);
	}
	return 0;
}
