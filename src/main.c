#include <stdio.h>

int main() {
    int a, b;

    // Kullanıcıdan iki sayı alıyoruz
    printf("Entrez le premier nombre: ");
    scanf("%d", &a);

    printf("Entrez le deuxième nombre: ");
    scanf("%d", &b);

    // Toplama işlemi
    printf("La somme est: %d\n", a + b);

    return 0;
}

