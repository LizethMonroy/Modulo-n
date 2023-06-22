# Modulo-n Equipo 3 ICV4
//Descripcion//
En matemática, la aritmética modular es un sistema aritmético para clases de equivalencia de números enteros llamadas clases de congruencia. La aritmética modular fue introducida en 1801 por Carl Friedrich Gauss en su libro Disquisitiones Arithmeticae.​
Las congruencias modulo n definen una relación de equivalencia en Z. Demostración. Hay que ver que ser congruentes modulo n es una relación reflexiva, simétrica y transitiva: a≡a (mod n) ya que a-a=0 es divisible entre n para todo n.

//CODIGO FUENTE//
```
#include <iostream>

int main() {
    int numero, n, resultado;

    std::cout << "Ingrese el número: ";
    std::cin >> numero;

    std::cout << "Ingrese el valor de n: ";
    std::cin >> n;

    resultado = numero % n;

    std::cout << "La congruencia de " << numero << " modulo " << n << " es: " << resultado << std::endl;

    return 0;
}
```

//INDICACIONES//
Para poder ejecutar el programa es necesario descargarlo y utilizar cualquier compilador de lenguaje C, como lo son Dev C++, Visual estudio Code, entro otros. Tambien pueden usarse compiladores en línea como Programiz.
  1. Descargar el programa. Abrirlo en un compilador y ejecutar. Ingresar un numero entero como "primer numero". Dar "ENTERE. Ingresar un numero entero como "segundo numero". Dar otro "ENTER". El resultado aparecera en un segundo.
  2. En caso de no poder descargar el archivo del programa, copiar y pegar el codigo fuente en un compilador apto para lenguaje C, y realizar los mismos pasos descritos en el inciso 1.

//EJEMPLO DE VALORES DE ENTRADA Y SALIDA//
EJEMPLO 1
Ingrese el numero (4) y el valor de n (3)
La congruencia de (4) Modulo (3) es 1

EJEMPLO 2
Ingrese el numero (5) y el valor de n (4)
La congruencia de (5) Modulo (4) es 1
