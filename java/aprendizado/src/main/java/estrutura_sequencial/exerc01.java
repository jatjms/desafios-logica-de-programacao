package estrutura_sequencial;

import java.util.Scanner;

public class exerc01 {
	public static void main(String[] args) {
		//Solicite ao usuário que digite dois números inteiros e mostre a soma deles.
		
		try(Scanner soma = new Scanner(System.in)){
		System.out.println("Programa que ira perdir 2 Números e como resultado sera sua soma.");
		System.out.println("========================================================");
		System.out.println("");
		
		System.out.println("Digite o 1° Número.");
		int num1 = soma.nextInt();
		
		System.out.println("Digite o 2° Número.");
		int num2 = soma.nextInt();
		
		int somaNumero = num1 + num2;
		
		System.out.println("O 1° Número informado é "+num1+", o 2° número é "+num2+", e a soma dos dois números é "+somaNumero);
		}
	}

}
