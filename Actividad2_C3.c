#include <stdio.h>

int main() {
    
    float BaseMayor, basemenor, altura, area;

    printf("Hallemos el area de un trapezio: ");

    printf("Ingrese la longitud de la base mayor del trapezoide: ");
    scanf("%f", &BaseMayor);

    printf("Ingrese la longitud de la base menor del trapezoide: ");
    scanf("%f", &basemenor);

    printf("Ingrese la altura del trapezoide: ");
    scanf("%f", &altura);

    area = ((BaseMayor + basemenor) * altura) / 2;
 
    printf("El área del trapezoide es: %.2f\n", area);

    return 0;
}
