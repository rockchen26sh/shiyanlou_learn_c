#include <stdio.h>
int main()
{
	char a[]="I love shiyanlou!",b[20];
	int i;
	for (i=0;*(a+i)!='\0';i++)
		*(b+i)=*(a+i);
	*(b+i)='\0';

	printf("string a is:%s\nstart address is:%d",a,*a);
	printf("string b is:%s\nstart address is:%d",b,*b);

	for (i=0;b[i]!='\0';i++)
		printf("%c",b[i]);

	printf("\n");
	return 0;
}
