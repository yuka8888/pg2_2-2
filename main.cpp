#include<stdio.h>
int main() {
	int* pa, * pb;
	int a = 5, b = 0;
	pa = &a;
	pb = &b;

	printf("a(�����l) = %d\n", a);
	printf("b(�����l) = %d\n", b);
	printf("pa(�A�h���X) = %p\n", pa);
	printf("pb(�A�h���X) = %p\n", pb);

	pa = pb;

	printf("pa(�����l) = %d\n", *pa);
	printf("pb(�����l) = %d\n", *pb);
	printf("pa(�A�h���X) = %p\n", pa);
	printf("pb(�A�h���X) = %p\n", pb);

	pb = &a;

	printf("a(�����l) = %d\n", a);
	printf("b(�����l) = %d\n", b);
	printf("pa(�A�h���X) = %p\n", pa);
	printf("pb(�A�h���X) = %p\n", pb);


	return 0;
}