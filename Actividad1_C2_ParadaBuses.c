#include <stdio.h>

int main() {
   
    char *rutas[] = {"g23", "t43", "h75"};
    char *paradas[] = {"parada1", "parada2", "parada3"};

    printf("Bienvenido al sistema de buses\n");

    int numopcion;

    while (1) {
        printf("Si quiere conocer las paradas de una ruta, marque 1.\nSi quiere conocer las paradas en dias feriados, marque 2.\nSi quiere terminar la consulta marque uno distinto: ");
        scanf("%d", &numopcion);

        if (numopcion == 1) {
            printf("Las rutas disponibles son:\n");
            printf("%s\n", rutas[0]);
            printf("%s\n", rutas[1]);
            printf("%s\n", rutas[2]);

            char nombreruta[2];
            printf("Escriba la ruta de la que desea saber las paradas: ");
            scanf("%s", nombreruta);
            
            if (strcmp(nombreruta, "g23") == 0) {
                printf("Estas son las paradas de la ruta g23:\n");
                printf("%s\n", paradas[0]);
                printf("%s\n", paradas[1]);
                printf("%s\n", paradas[2]);
            } 
			
			else if (strcmp(nombreruta, "t43") == 0) {
                printf("Estas son las paradas de la ruta t43:\n");
                printf("%s\n", paradas[0]);
                printf("%s\n", paradas[1]);
            } 
			
			else if (strcmp(nombreruta, "h75") == 0) {
                printf("Estas son las paradas de la ruta h75:\n");
                printf("%s\n", paradas[1]);
                printf("%s\n", paradas[2]);
            } 
			
			else {
                printf("Ruta no encontrada.\n");
            }
            
        } else if (numopcion == 2) {
            printf("Estas son las rutas disponibles en dias feriados:\n");
            printf("%s\n", rutas[0]);
            printf("%s\n", rutas[2]);
            
            char nombreruta[1];
            printf("Escriba la ruta de la que desea saber las paradas: ");
            scanf("%s", nombreruta);
            
            if (strcmp(nombreruta, "g23") == 0) {
                printf("Estas son las paradas de la ruta g23:\n");
                printf("%s\n", paradas[0]);
                printf("%s\n", paradas[1]);
            } 
			
			else if (strcmp(nombreruta, "h75") == 0) {
                printf("Estas son las paradas de la ruta h75:\n");
                printf("%s\n", paradas[2]);
            } 
			
			else {
                printf("Ruta no encontrada.\n");
            }
        } 
		
		else {
            printf("Vuelva pronto.\n");
            break;
        }
    }

    return 0;
}
