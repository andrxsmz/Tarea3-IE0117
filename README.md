## T3_1_C34587.c

### Descripción

ESte programa le pide al usuario una cadena de texto y cuenta e immprime las apariciones de un carácter epecífico en el texto ingresado por el ususario. Finalmente, le muestra al usuario el texto ingresado incialmente en orden inverso. 

## T3_2_C34587.c

### Descripción

Este programa valida si las lineas de un archivo de texto plano representan numeros. 
Lee las lineas del archivo desde la entrada estándar(stdin) usando fgets(). Posteriormente verifica si las lineas contienen numeros validos(lineas con solo numeros) y las muestra con la salida estándar(stdout) en un archivo de texto plano.
Además, usando error estándar(stderr) para escribir en otro archivo de texto las lineas invalidas, que no contienen números, con un mensaje de error. 
Para ejecutar el código y escribir las salidas y los errores en archivos .txt se usa redireccionamiento. Con un arcchivo de entrada llamado "output.txt" se puede ejecutar de la siguiente manera: 

<div align="center">

```bash
./ejecutable < input.txt > output.txt 2> error.txt
```

Mostrando la salida(numeros validos) en el archivo "output.txt" y los errores en "error.txt". 