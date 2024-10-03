package com.maratonajava.estrutura_sequencial;

import java.util.Scanner;

public class exerc05 {
    //Faça um Programa que converta metros para centímetros.
    public static void main(String[] args){
        try(Scanner convert = new Scanner(System.in)){
            float metro, convertCent;

            System.out.println("Programa Converter Metros para Centímetros.");
            System.out.println("================================================");

            System.out.println("Informe o valor em metros.");
            metro = convert.nextFloat();

            convertCent = metro*100;

            System.out.println("O Tamanho em centímetros "+convertCent+" cm.");

        }
    }
}
