/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
use std::io;

fn main() {
    println!("Por favor, ingrese un número (0 o 1):");

    // Leer la entrada del usuario
    let mut input = String::new();
    io::stdin().read_line(&mut input).expect("Error al leer la entrada");

    // Convierte la entrada a un número
    let input: u32 = input.trim().parse().expect("Por favor, ingrese un número válido");

    // Compara la entrada y muestra el mensaje
    if input == 1 {
        println!("Hola");
    } else if input == 0 {
        println!("Chau");
    } else {
        println!("Entrada no válida. Por favor, ingrese 0 o 1.");
    }
}