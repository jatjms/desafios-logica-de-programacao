package estrutura_sequencial;

import java.util.Scanner;

public class exerc03 {
	public static void main(String[] args) {
		/*
		 * Solicite o preço de um produto e mostre o preço com 10% de desconto.
		 */
		try(Scanner desconto = new Scanner(System.in)){
			
			System.out.println("Informe o valor do produdo.");
			float produto = desconto.nextFloat();
			
			float produtoDesconto = (produto - ((produto*10)/100));
			
			System.out.println("O Valor do é de R$ "+produto+", "
					+ "com desconto de 10% vai ficar com valor de R$ "+produtoDesconto);		
			
		}
	}

}
