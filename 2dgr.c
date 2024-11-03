#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c,delta, S1, S2;
    printf("Entrez les coefficients a, b et c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    if (a == 0) {
        printf("Ce n'est pas une équation du deuxième degré.\n");
        return 1;
    }
    delta = b * b - 4 * a * c;
    if (delta > 0) {
        S1 = (-b + sqrt(delta)) / (2 * a);
        S2 = (-b - sqrt(delta)) / (2 * a);
        printf("Les racines sont : %.2lf et %.2lf\n", S1, S2);
    } else if (delta == 0) {
        S1 = -b / (2 * a);
        printf("La racine double est : %.2lf\n", S1);
    } else {
        printf("Pas de racines réelles.\n");
    }
}