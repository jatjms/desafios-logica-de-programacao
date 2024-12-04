package estrutura_sequencial;

import java.util.Scanner;

public class exerc04 {
	//Solicite dois números inteiros e informe qual é o maior entre eles.
	public static void main(String[] args) {
		try(Scanner maiorValor = new Scanner(System.in)){
			
			System.out.println("Informe o valor do 1° número inteiro.");
			int num1 = maiorValor.nextInt();
			
			System.out.println("Informe o valor do 2° número inteiro.");
			int num2 = maiorValor.nextInt();
			
			if(num1 > num2) {
				System.out.println("O valor do 1° número = "+num1+", é maior do 2° número = "+num2);
			}else if(num2 > num1){
				System.out.println("O valor do 2° número = "+num2+", é maior do 1° número = "+num1);
			}else {
				System.out.println("Algo esta errado neste dados.");
			}			
		}
	}

}
