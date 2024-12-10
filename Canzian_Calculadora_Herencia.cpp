/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include <cmath> // Biblioteca para funciones matemáticas avanzadas
using namespace std;

// Definición de la clase Calculadora
class Calculadora {
protected:
    int num1, num2; // Variables protegidas para almacenar los números

public:
    void establecerNumeros(int numero1, int numero2) {
        num1 = numero1;
        num2 = numero2;
    } // Método para establecer los valores de los números

    int sumar() {
        return num1 + num2;
    } // Método para calcular la suma de los números

    int restar() {
        return num1 - num2;
    } // Método para calcular la resta de los números
    
    int multiplicar() {
        return num1 * num2;
    }
    
    float dividir() {
        return static_cast<float>(num1) / static_cast<float>(num2);
    } // Con static_cast convierto los num1 y num2 de enteros a flotantes antes de hacer la división (para que sea de punto flotante).

    void mostrarResultadoSuma() {
        cout << "La suma de " << num1 << " y " << num2 << " es: " << sumar() << endl;
    } // Método para mostrar el resultado de la suma

    void mostrarResultadoResta() {
        cout << "La resta de " << num1 << " y " << num2 << " es: " << restar() << endl;
    } // Método para mostrar el resultado de la resta
    
    void mostrarResultadoMultiplicacion() {
        cout << "La multiplicación de " << num1 << " y " << num2 << " es " << multiplicar() << endl;
    }
    
    void mostrarResultadoDivision() {
        if (num2 != 0) {
            cout << "La división de " << num1 << " y " << num2 << " es: " << dividir() << endl;
        } else {
            cout << "Error: División por cero." << endl;
        }
    } // Método para mostrar el resultado de la división
};

// Definición de la clase CalculadoraCientifica que hereda de Calculadora
class CalculadoraCientifica : public Calculadora {
public:
    double potencia(int base, int exponente) {
        return pow(base, exponente);
    } // Método para calcular la potencia

    double raizCuadrada(int numero) {
        return sqrt(numero);
    } // Método para calcular la raíz cuadrada

    void mostrarResultadoPotencia(int base, int exponente) {
        cout << "La potencia de " << base << " elevado a " << exponente << " es: " << potencia(base, exponente) << endl;
    } // Método para mostrar el resultado de la potencia

    void mostrarResultadoRaizCuadrada(int numero) {
        cout << "La raíz cuadrada de " << numero << " es: " << raizCuadrada(numero) << endl;
    } // Método para mostrar el resultado de la raíz cuadrada
};

int main() {
    CalculadoraCientifica calcCientifica; // Crear un objeto de la clase CalculadoraCientifica
    int numero1, numero2; // Variables para almacenar los números ingresados por el usuario
    int eleccion; // Variable para elegir la operación
    
    // Preguntar al usuario qué operación desea realizar
    cout << "¿Qué operación quieres hacer?" << endl;
    cout << "1 es sumar - 2 es restar - 3 es multiplicar - 4 es dividir" << endl;
    cout << "5 es potencia - 6 es raíz cuadrada" << endl;
    cin >> eleccion;
    
    // Pedir al usuario que ingrese los números según la operación seleccionada
    if (eleccion >= 1 && eleccion <= 4) {
        cout << "Ingresa el primer número: ";
        cin >> numero1;
        cout << "Ingresa el segundo número: ";
        cin >> numero2;
        calcCientifica.establecerNumeros(numero1, numero2);
    } else if (eleccion == 5) {
        cout << "Ingresa la base: ";
        cin >> numero1;
        cout << "Ingresa el exponente: ";
        cin >> numero2;
    } else if (eleccion == 6) {
        cout << "Ingresa el número: ";
        cin >> numero1;
    } else {
        cout << "Opción no válida." << endl;
        return 1; // Terminar el programa si la opción no es válida
    }
    
    // Realizar la operación seleccionada y mostrar el resultado
    switch (eleccion) {
        case 1:
            calcCientifica.mostrarResultadoSuma();
            break;
        case 2:
            calcCientifica.mostrarResultadoResta();
            break;
        case 3:
            calcCientifica.mostrarResultadoMultiplicacion();
            break;
        case 4:
            calcCientifica.mostrarResultadoDivision();
            break;
        case 5:
            calcCientifica.mostrarResultadoPotencia(numero1, numero2);
            break;
        case 6:
            calcCientifica.mostrarResultadoRaizCuadrada(numero1);
            break;
        default:
            cout << "Opción no válida." << endl;
            break;
    };

    return 0; // Indicar que el programa terminó correctamente
}

/*
En este código, primero se pregunta al usuario qué operación desea realizar. Según la operación 
seleccionada, se piden los números necesarios y luego se ejecuta la operación correspondiente. 
Las operaciones de suma, resta, multiplicación y división requieren dos números, mientras que 
las operaciones de raíz cuadrada y potencia requieren uno o dos números según corresponda.

En este código, la clase CalculadoraCientifica hereda de Calculadora y añade dos nuevos métodos: 
potencia y raizCuadrada, junto con métodos para mostrar sus resultados. En el main, se agregan 
opciones para estas nuevas operaciones en el menú de selección.
*/