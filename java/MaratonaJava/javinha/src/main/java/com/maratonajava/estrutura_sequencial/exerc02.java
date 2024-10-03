package com.maratonajava.estrutura_sequencial;

import java.util.Scanner;

public class exerc02 {
    //Faça um Programa que peça um número e então mostre a mensagem O número informado foi [número]. 
    public static void main(String[] args){
        try(Scanner scan = new Scanner(System.in)){
            int num1;

            System.out.println("Digite um número.");
            num1 = scan.nextInt();

            System.out.println("O Número digitado foi: "+num1);
        }

    }
    
}
