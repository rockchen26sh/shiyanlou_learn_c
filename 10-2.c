#include <stdio.h>
int main()
{
	int *p1,*p2,*p,a,b;
	printf("Please enter two integer number:");
	scanf("%d,%d",&a,&b);
	
	p1=&a;
	p2=&b;
	
	if (a<b)
	{
		p=p1;p1=p2;p2=p;
	}

	printf("a=%d,b=%d\nmax=%d,min=%d\n",a,b,*p1,*p2);
	return 0;
}
