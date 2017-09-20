float meineFunktion(float x);
float ersteAbleitung(float x);
float newton(float x, int max_iterations, float epsilon, float (*pf) (float), float (*pfprim) (float));