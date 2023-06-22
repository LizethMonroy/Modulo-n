 #include<stdio.h>

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
