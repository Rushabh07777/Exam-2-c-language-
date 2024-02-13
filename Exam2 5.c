#include<stdio.h>
main()
{
	int a;
	int b;
	int c;
	scanf("%d",&c);
	for (a=1; a<=10; a++){
		b=c*a;
		printf("%d * %d =%d\n",c,a,c*a);
	}
}