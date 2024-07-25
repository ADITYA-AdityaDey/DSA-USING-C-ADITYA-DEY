#include <stdio.h>

// Function to add two polynomials
void addPolynomials(int poly1[], int poly2[], int result[], int degree) {
    for (int i = 0; i <= degree; i++) {
        result[i] = poly1[i] + poly2[i];
    }
}

// Function to multiply two polynomials
void multiplyPolynomials(int poly1[], int poly2[], int result[], int degree) {
    for (int i = 0; i <= 2 * degree; i++) {
        result[i] = 0;
    }

    for (int i = 0; i <= degree; i++) {
        for (int j = 0; j <= degree; j++) {
            result[i + j] += poly1[i] * poly2[j];
        }
    }
}

// Function to print a polynomial
void printPolynomial(int poly[], int degree) {
    for (int i = degree; i >= 0; i--) {
        printf("%dx^%d", poly[i], i);
        if (i > 0) {
            printf(" + ");
        }
    }
    printf("\n");
}

int main() {
    int degree;
    printf("Enter the degree of the polynomials: ");
    scanf("%d", &degree);

    int poly1[degree + 1], poly2[degree + 1], resultAdd[degree + 1], resultMultiply[2 * degree + 1];

    printf("Enter the coefficients of the first polynomial:\n");
    for (int i = 0; i <= degree; i++) {
        printf("Coefficient for x^%d: ", i);
        scanf("%d", &poly1[i]);
    }

    printf("Enter the coefficients of the second polynomial:\n");
    for (int i = 0; i <= degree; i++) {
        printf("Coefficient for x^%d: ", i);
        scanf("%d", &poly2[i]);
    }

    addPolynomials(poly1, poly2, resultAdd, degree);
    multiplyPolynomials(poly1, poly2, resultMultiply, degree);

    printf("\nResult of addition: ");
    printPolynomial(resultAdd, degree);

    printf("Result of multiplication: ");
    printPolynomial(resultMultiply, 2 * degree);

    return 0;
}

