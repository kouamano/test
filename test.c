#include <stdio.h>


int f(int a){
	a = 1;
	printf("a@f:%d\n",a);
}
int g(int *a){
	*a = 1;
	printf("a@g:%d\n",*a);
}
void main(void){
	int a = 2;
	int b;
	f(b);
	printf("a:%d\n",a);
	f(a);
	printf("a:%d\n",a);
	g(&a);
	printf("a:%d\n",a);
}
