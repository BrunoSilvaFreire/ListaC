#include <stdio.h>
#include <stdbool.h>
#include <math.h>
//Sdd2s P.O.O.

void execute(int ex);

int main() {
    printf("Informe o exercicio...\n");
    int ex;
    scanf("%d", &ex);
    if (ex > 10 || ex < 0) {
        printf("Exercicio invalido.");
        return 1;
    }
    execute(ex);
    return 0;
}

bool isValid(float value) {
    return value > 0;
}

void ex1() {
    printf("Informe a base:\n");
    float base;
    scanf("%f", &base);
    if (!isValid(base)) {
        printf("Base invalida.");
        return;
    }
    printf("Informe a altura:\n");

    float height;
    scanf("%f", &height);
    if (!isValid(height)) {
        printf("Altura invalida.");
        return;
    }
    float area = height * base;
    printf("A area e: %f", area);
}

void ex2() {
    printf("Informe a idade da pessoa:\n");
    int idade;
    scanf("%d", &idade);
    if (!isValid(idade)) {
        printf("Idade invalida.");
        return;
    }
    if (idade >= 18) {
        if (idade >= 65) {
            printf("A pessoa e idosa.");

        } else {
            printf("A pessoa e maior de idade.");

        }
    } else {
        printf("A pessoa e menor de idade.");
    }

}

double calculateCilinderArea(float radius, float height) {
    return 2 * M_PI * radius * (radius + height);
}

void ex3() {
    printf("Informe o raio:\n");
    float radius;
    scanf("%f", &radius);
    if (!isValid(radius)) {
        printf("Raio invalida.");
        return;
    }
    printf("Informe a altura:\n");

    float height;
    scanf("%f", &height);
    if (!isValid(height)) {
        printf("Altura invalida.");
        return;
    }
    double area = calculateCilinderArea(radius, height);
    printf("A area e: %f", area);
}

void ex4() {

}

void ex5() {

}

void ex6() {

}

void ex7() {

}

void ex8() {

}

void ex9() {

}

void ex10() {

}

void execute(int ex) {
    switch (ex) {
        case 1:
            ex1();
            break;
        case 2:
            ex2();
        case 3:
            ex3();
        case 4:
            ex4();
        case 5:
            ex5();
        case 6:
            ex6();
        case 7:
            ex7();
        case 8:
            ex8();
        case 9:
            ex9();
        case 10:
            ex10();
        default:
            break;
    }
}