#ifndef HEADER
#define HEADER
#include <stdio.h>
#include "func.h"
#endif

int main()
{

	float x;

	float (* pf) (float) = &meineFunktion; // pf is a pointer to a function with a float argument that return a float
	float (*pfprim) (float) = &ersteAbleitung;

	x = newton(-1, 30, 0.005, pf, pfprim);

	printf("I found:  %.2f\n", x);

    return 0;
}

