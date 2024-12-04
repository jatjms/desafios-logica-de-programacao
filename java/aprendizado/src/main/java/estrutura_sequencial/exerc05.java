package estrutura_sequencial;

import java.util.Scanner;

public class exerc05 {
	//Pergunte ao usuário a temperatura em Celsius e converta para Fahrenheit (F = C * 9/5 + 32).
	public static void main(String[] args) {
		try(Scanner temperatura = new Scanner(System.in)){
			System.out.println("Informe a Temperatura atual em Celsius.");
			float tempaturaCelcius = temperatura.nextFloat();
			
			float Fahrenheit = (tempaturaCelcius*(9/5))+32;
			
			System.out.println("A Temperatura em Fahrenheit = "+Fahrenheit+" °F.");			
			
		}
	}

}
