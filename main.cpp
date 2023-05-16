#include<stdio.h>
int main() {
	int* pa, * pb;
	int a = 5, b = 0;
	pa = &a;
	pb = &b;

	printf("a(整数値) = %d\n", a);
	printf("b(整数値) = %d\n", b);
	printf("pa(アドレス) = %p\n", pa);
	printf("pb(アドレス) = %p\n", pb);

	pa = pb;

	printf("pa(整数値) = %d\n", *pa);
	printf("pb(整数値) = %d\n", *pb);
	printf("pa(アドレス) = %p\n", pa);
	printf("pb(アドレス) = %p\n", pb);

	pb = &a;

	printf("a(整数値) = %d\n", a);
	printf("b(整数値) = %d\n", b);
	printf("pa(アドレス) = %p\n", pa);
	printf("pb(アドレス) = %p\n", pb);


	return 0;
}