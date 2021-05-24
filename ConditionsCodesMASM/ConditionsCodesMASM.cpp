#include <iostream>


extern "C" int SignedMinA(int a, int b, int c);
extern "C" int SignedMaxA(int a, int b, int c);

extern "C" int SignedMinB(int a, int b, int c);
extern "C" int SignedMaxB(int a, int b, int c);

int main()
{
	printf("%d\n", SignedMinA(11,22,33));
	printf("%d\n", SignedMaxA(11, 22, 33));
	printf("%d\n", SignedMinB(11, 22, 33));
	printf("%d\n", SignedMaxB(11, 22, 33));
}
