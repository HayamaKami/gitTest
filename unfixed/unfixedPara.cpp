#include <stdio.h>
#include <stdarg.h>

double Sumdouble(int number, ...){
	va_list marker;
	double sum = 0;
	double f;
	int i;

	va_start(marker, number);
	while(number > 0){
		sum += va_arg(marker, double);
		number --;
	}
	va_end(marker);
	return sum;
}

int main(void){
	printf("Sum is %f\n", Sumdouble(2, 1.1f, 2.2f));
	printf("Sum is %f\n", Sumdouble(3, 1.1f, 2.2f, 3.3f));
}
