package com.maratonajava.estrutura_sequencial;

import java.util.Scanner;

public class exerc04 {
    //Faça um Programa que peça as 4 notas bimestrais e mostre a média. 
    public static void main(String[] args){
        try(Scanner notas = new Scanner(System.in)){
            float nota1,nota2,nota3,nota4,mediaNota;

            System.out.println("Programa Peça s notas e mostre a Média.");
            System.out.println("================================================");

            System.out.println("Digite o valor da sua 1° Nota.");
            nota1 = notas.nextFloat();

            System.out.println("Digite o valor da sua 2° Nota.");
            nota2 = notas.nextFloat();

            System.out.println("Digite o valor da sua 3° Nota.");
            nota3 = notas.nextFloat();

            System.out.println("Digite o valor da sua 4° Nota.");
            nota4 = notas.nextFloat();

            mediaNota = (nota1+nota2+nota3+nota4)/4;

            System.out.println("Sua Média é "+mediaNota);
        }
    } 
}
