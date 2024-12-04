package estrutura_sequencial;

import java.util.Scanner;

public class exerc02 {
	public static void main(String[] args) {
		//Peça ao usuário para digitar a sua idade e informe se ele é maior ou menor de idade (18 anos).
		
		try(Scanner maiorIdade = new Scanner(System.in)){
			System.out.println("Digite sua idade.");
			int idade = maiorIdade.nextInt();
			
			if(idade >= 18) {
				System.out.print("Você é maior de Idade com "+idade+" Anos.");
			}else {
				System.out.print("Você é menor de Idade com "+idade+" Anos.");
			}			
		}
		
	}

}
