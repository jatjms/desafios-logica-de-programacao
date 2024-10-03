package com.maratonajava.estrutura_sequencial;

import java.util.Scanner;

public class exrc03 {
    //Faça um Programa que peça dois números e imprima a soma. 
    public static void main(String[] args){
        try(Scanner soma = new Scanner(System.in)){
            int num1,num2,somaFinal;
            System.out.println("Programa que pede 2 números e para fazer a Soma.");
            System.out.println("================================================");
            
            System.out.println("Informe seu 1° Número.");
            num1 = soma.nextInt();

            System.out.println("Informe o 2° Seu Número.");
            num2 = soma.nextInt();

            somaFinal = num1 + num2;

            System.out.println("A Soma dos números digitados é "+somaFinal);


        }

    }
}
