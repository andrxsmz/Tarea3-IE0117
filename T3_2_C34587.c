#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_LINE 100 //define el tamaño máximo de una linea de entrada

//función para verificar si una cadena representa un número válido 
int es_numero_valido(char const *linea) { 

    if (*linea == '\0' || *linea == '\n') { //verifica si la línea está vacía o que solo tengan saltos de línea usando el puntero *linea para acceder al primer caracter
        return 0;
    }

    if (*linea == '-' || *linea == '+'){ //permite numeros negativos y positivos, verificando si el primer caracter es + o - usando el puntero *linea
     linea++; //avanza el puntero al siguiente caracter
        if (*linea == '\0' || *linea == '\n') { //verifica si despues del signo hay digitos
            return 0;
        }    }

    int tiene_digitos = 0; //asegura que haya al menos un digito 

    //bucle para recorrer cada line hasta el final de la linea o hasta que haya un salto de línea usando aritmetica de punteros 
    while (*linea != '\0' && *linea != '\n') {
        //si el caracter actual no es un digito, entonces no es un número valido  
        if (!isdigit(*linea)) {
            return 0;
        }
        tiene_digitos = 1; //marca que al menos un digito fue encontrado 
        linea++; //mueve el puntero al siguiente caracter 
    }

    return tiene_digitos; //retorna verdadero solo si se encontró al menos un digito 
}

int main() {
    char linea[MAX_LINE]; //arreglo para almacenar la linea de entrada

    while (fgets(linea, MAX_LINE, stdin) != NULL) { //ciclo para leer linea por linea desde el stdin y almacena la lectura 
        //retorna NULL cuando no hay mas datos  y el puntero linea contiene la dirección dónde se almacena la entrada
        size_t longitud = strlen(linea); //calcula la longitud de la linea con strlen()
        if (longitud > 0 && linea[longitud - 1] == '\n') { //verifica si la linea tiene contenido con longtud >0 y accede al último carácter con linea[longitud-1]
            // y elimina los saltos linea 

            linea[longitud - 1] = '\0'; 
        }

        if (es_numero_valido(linea)) { //verifica si la linea es un numero válido 
            printf("Número: %s\n", linea);//si es valido lo imprime
        } else {
            fprintf(stderr, "Error-Línea inválida: %s\n", linea);// si no es valido, imprime un mensaje de error en stderr
        }
    }

    return 0;
}
