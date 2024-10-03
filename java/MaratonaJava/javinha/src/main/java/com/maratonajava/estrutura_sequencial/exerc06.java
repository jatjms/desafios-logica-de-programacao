package com.maratonajava.estrutura_sequencial;

import java.util.Scanner;

public class exerc06 {
    public static void main(String[] args){
        // Faça um Programa que peça o raio de um círculo, calcule e mostre sua área.
        try(Scanner raio = new Scanner(System.in)){
            float valorRaio, calcRaio;

            System.out.println("Programa Calcular o Raio de um círculo.");
            System.out.println("================================================");

            System.out.println("Informe o do Raio de um Círculo em cm.");
            valorRaio = raio.nextFloat();

            //verificar depois mais detalhes desta configuração
            calcRaio =(float) ((valorRaio*valorRaio)*3.14);

            System.out.println("O Valor da área é: "+calcRaio+" cm");
        }
    }
}
