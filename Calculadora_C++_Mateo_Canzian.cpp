/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;
// Definición de la clase Calculadora
class Calculadora {
private:
    int num1, num2; // Variables privadas para almacenar los números

public:
    void establecerNumeros(int numero1, int numero2) {
        num1 = numero1;
        num2 = numero2;
    }// Método para establecer los valores de los números

    int sumar() {
        return num1+num2;
    }// Método para calcular la suma de los números

    int restar() {
        return num1-num2;
    }// Método para calcular la resta de los números
    
    int multiplicar() {
        return num1*num2;
    }
    
    float dividir() {
        return static_cast<float>(num1) / static_cast<float>(num2);
    } //con static_cast convierto los num1 y num2 de enteros a flotantes antes de hacer la división (para que sea de punto flotante).

    void mostrarResultadoSuma() {
        cout << "La suma de " << num1 << " y " << num2 << " es: " << sumar() << endl;
    }// Método para mostrar el resultado de la suma

    void mostrarResultadoResta() {
        cout << "La resta de " << num1 << " y " << num2 << " es: " << restar() << endl;
    }// Método para mostrar el resultado de la resta
    
    void mostrarResultadoMultiplicación() {
        cout << "La multiplicación de " << num1 << " y " << num2 << " es " << multiplicar() << endl;
    }
    
    void mostrarResultadoDivisión() {
        if (num2 != 0) {
            cout << "La división de " << num1 << " y " << num2 << " es: " << dividir() << endl;
        } else {
            cout << "Error: División por cero." << endl;
        }
    }// Método para mostrar el resultado de la división
};

int main() {
    Calculadora calc;// Crear un objeto de la clase Calculadora
    int numero1, numero2;// Variables para almacenar los números ingresados por el usuario
    int eleccion; // Variable con la que voy a hacer el switch case luego para elegir la operación
    // Pedir al usuario que ingrese los números
    cout << "Ingresa el primer número: ";
    cin >> numero1;
    cout << "Ingresa el segundo número: ";
    cin >> numero2;
    
    calc.establecerNumeros(numero1, numero2); // Establecer los números en el objeto calculadora
    
    cout << "¿Que operación queres hacer?" << endl;
    cout << "1 es sumar - 2 es restar - 3 es multiplicar - 4 es dividir" << endl;
    cin >> eleccion;
    switch (eleccion){
        case 1:
            // Mostrar el resultado de la suma
            calc.mostrarResultadoSuma();
            break;
        case 2:
            // Mostrar el resultado de la resta
            calc.mostrarResultadoResta();
            break;
        case 3:
            //Resultado multiplicación
            calc.mostrarResultadoMultiplicación();
            break;
        case 4:
            //Resultado división
            calc.mostrarResultadoDivisión();
            break;
    };

    return 0; // Indicar que el programa terminó correctamente
}



