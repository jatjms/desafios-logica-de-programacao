package estrutura_sequencial;

import java.util.Scanner;

public class exerc06 {
	//Solicite ao usuário que digite um número e informe se ele é par ou ímpar.
	public static void main(String[] args) {
		try(Scanner imparPar = new Scanner(System.in)){
			System.out.println("Digite um número.");
			int num1 = imparPar.nextInt();
			
			int par = num1%2;
			
			if(par == 0) {
				System.out.println("O número informado "+num1+" é 'PAR'");
			}
			
			else if(par > 0) {
				System.out.println("O número informado "+num1+" é 'IMPAR'");
			}
			
			else {
				System.out.println("FIZ ALGO ERRADO.");
			}			
		}
	}

}
