#include <stdio.h>
#include <stdbool.h>
#include <math.h>
//Sdds P.O.O.

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
    int age;
    scanf("%d", &age);
    if (!isValid(age)) {
        printf("Idade invalida.");
        return;
    }
    if (age >= 18) {
        if (age >= 65) {
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
    printf("Informe o total de cilindros");
    int total;
    scanf("%d", &total);
    if (!isValid(total)) {
        printf("Quantidade invalida.");
        return;
    }
    printf("Informe o preco unitario da lata de tinta:\n");
    float price;
    scanf("%f", &price);
    if (!isValid(price)) {
        printf("Preco invalido.");
        return;
    }
    //Can't use modulus on float, someone will have to find a store that sells 32.3 paint buckets
    float quantity = (float) (area / 5);
    float totalPrice = quantity * price;
    printf("A quantidade de latas e %f", quantity);
    printf("O preco total e %f", totalPrice);
}

void ex5() {
    printf("Informe o raio:\n");
    float radius;
    scanf("%f", &radius);
    if (!isValid(radius)) {
        printf("Raio invalida.");
        return;
    }
    double area = M_PI * pow(radius, 2);
    printf("A area e: %f", area);
}

float METERS_TO_INCHES_CONSTANT = 0.3937007874f;

void ex6() {
    printf("Informe a medida (m):\n");
    float distance;
    scanf("%f", &distance);
    float inch = distance * METERS_TO_INCHES_CONSTANT;
    float feet = inch * 12;
    float yard = feet * 3;
    printf("Polegadas = %f", distance);
    printf("Pes = %f", feet);
    printf("Yard = %f", yard);
}

void ex7() {
    printf("Informe a idade da pessoa:\n");
    int age;
    scanf("%d", &age);
    if (!isValid(age)) {
        printf("Idade invalida.");
        return;
    }
    if (age >= 16) {
        if (age >= 65) {
            printf("A pessoa e eleitor facultativo.");

        } else {
            printf("A pessoa e eleitor obrigatorio");

        }
    } else {
        printf("A pessoa nao pode ser eleitor.");
    }
}

void ex8() {
    printf("Informa a primeira nota do aluno");
    float s1;
    scanf("%f", &s1);
    if (!isValid(s1)) {
        printf("Primeira nota invalida.");
        return;
    }
    printf("Informa a segunda nota do aluno");
    float s2;
    scanf("%f", &s2);
    if (!isValid(s2)) {
        printf("Segunda nota invalida.");
        return;
    }
    float fs = (s1 + s2) / 2;
    printf("Nota final = %f", fs);
}

void ex9() {
}

void ex10() {
}

/**
 * I'm so sorry for this, so <b>so</b> sorry
 * @param ex Exercise to execute
 */
void execute(int ex) {
    switch (ex) {
        case 1:
            ex1();
            break;
        case 2:
            ex2();
            break;
        case 3:
            ex3();
            break;
        case 4:
            ex4();
            break;
        case 5:
            ex5();
            break;
        case 6:
            ex6();
            break;
        case 7:
            ex7();
            break;
        case 8:
            ex8();
            break;
        case 9:
            ex9();
            break;
        case 10:
            ex10();
            break;
        default:
            break;
    }
}