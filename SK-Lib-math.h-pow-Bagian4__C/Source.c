
#include <math.h>
#include <stdio.h>
#include <conio.h>

int main() {
	int a, x, y;

	x = 78;
	y = 2;

	a = (int)(pow(x, y) + 0.5);

	printf("x  = %i\n", x);
	printf("y  = %i\n\n", y);
	printf("Hasil  = %d", a);

	_getch();
	return 0;
}
