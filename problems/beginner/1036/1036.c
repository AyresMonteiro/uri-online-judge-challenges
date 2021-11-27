#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define error "Impossivel calcular\n"

double* readNumbers() {
    double* n = (double*)malloc(sizeof(double)*3);
    scanf("%lf %lf %lf", n, n + 1, n + 2);
    return n;
}

void printErrors() {
    printf(error);
}

void printAnswers(double* answers) {
    if(answers == NULL) return;
    
    printf("R1 = %.5lf\n", answers[0]);
    printf("R2 = %.5lf\n", answers[1]);
}

double* bhaskara(double a, double b, double c) {
    double* answers = (double*) malloc(sizeof(double)*2);
    double delta = pow(b, 2) - (4 * a * c);
    if(a == 0.0 || delta < 0.0) {
        printErrors();
        free(answers);
        return NULL;
    }
    
    answers[0] = (-b + sqrt(delta))/(2*a);
    answers[1] = (-b - sqrt(delta))/(2*a);
    
    return answers;
}


int main() {
    double* n = readNumbers();
    double* answers = bhaskara(n[0], n[1], n[2]);
    printAnswers(answers);
    free(n);
    if(answers != NULL) free(answers);
    return 0;
}

