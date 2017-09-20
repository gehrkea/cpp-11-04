#include <stdio.h>
#include "cmath"
#include <stdlib.h>

float meineFunktion(float x) {

	return (x * x * x);
}

float ersteAbleitung(float x) {

	return (3*x*x);
}

float newton(float x, int max_iterations, float epsilon, float (*pf) (float), float (*pfprim) (float)) {


	int counter = 1;

	float x_old = x + 2*epsilon;

	while (abs(x - x_old) > epsilon) {

		x_old = x;

		x = x - (pf(x) / pfprim(x));

		printf("Iteration %d: x_old = %.2f, x_new = %2f\n", counter, x_old, x);

		counter++;
	}

		return x;
}
