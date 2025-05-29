#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main() {
    char string[100]; //Arreglo con capacidad para 100, el maximo de caracteres que pued eingresar el usuario
    char character; //variable para almacenar el caracter que el usuario quiere contar
    int counter = 0; //contador para contar el caracter en el string

    //Solicita al ususario el string de texto y lo lee 
    printf ("Ingrese un texto: "); 
    fgets(string, sizeof(string), stdin);

    string[strcspn(string, "\n")] = 0; //elimina el salto de linea que fgets inclye al final 

    while (strlen(string) == 0) { //ciclo para validar que el usuario ingrese un texto, si no ingresa un texto valido sigue pidiendo el texto
        printf("Error. Ingre un texto\n");
        printf ("Ingrese un texto: "); 
        fgets(string, sizeof(string), stdin);

        string[strcspn(string, "\n")] = 0;
    }

    //pide al usuario el carecter a buscar y lo lee
    printf("Ingrese el caracter que desea contar: ");
    scanf("%c", &character);

    char findChar = tolower(character); //se convierte el caracter que se quiere contar a minuscula para que no haya errores al compararlo con los del string

    for (int i = 0; string[i] != '\0'; i++) { //ciclo for para contar las aparaciones del caracter en el string
        if (tolower(string[i]) == findChar) { //compara cada caracter del string con el inidcado por el usuario
            counter++; //aumenta el contador cada vez que encuentra un caracter igual al indicado
        }
    }

    printf("El caracter '%c' aparcere %d veces en el texto\n", character, counter); //muestra el total del conteo 

    printf("El texto en orden inverso es: ");
    int longitud = strlen(string); //se obtiene la longitud del string con strlen
    
    for(int i = longitud - 1; i >= 0; i--) { //ciclo para recorrer el string desde el final hasta el comienzo
        printf("%c", string[i]); //imprime los carecteres del string en orden inverso
    }
    printf("\n");
    
    return 0;
}