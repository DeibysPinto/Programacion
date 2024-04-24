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

///////////////////////////////////////////////////////////////////////////////////


#include <stdio.h>

int main() {
    
    float radio, altura, area;

    printf("Hallemos el area de un cilindro\n");

    printf("Ingrese el radio de la base del cilindro: ");
    scanf("%f", &radio);

    printf("Ingrese la altura del cilindro: ");
    scanf("%f", &altura);

    area = (2 * 3.1416 * radio * radio) + (2 * 3.1416 * radio * altura);
 
    printf("El area del cilindro es: %.2f\n", area);

    return 0;
}
