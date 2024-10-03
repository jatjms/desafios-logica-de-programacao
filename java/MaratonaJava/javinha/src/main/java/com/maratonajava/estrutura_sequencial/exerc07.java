package com.maratonajava.estrutura_sequencial;

import java.util.Scanner;

public class exerc07 {
    public static void main(String[] args){
        /*Faça um Programa que calcule a área de um quadrado, 
        em seguida mostre o dobro desta área para o usuário*/
        try(Scanner areaQuadrado = new Scanner(System.in)){
            double valorQuadrado, calcQuadrado, dobroQuadrado;

            System.out.println("Programa Calcular o Raio de um círculo.");
            System.out.println("================================================");
            System.out.println("");

            System.out.println("Informe o valor de um Quadrado.");
            valorQuadrado = areaQuadrado.nextDouble();

            calcQuadrado = (valorQuadrado*valorQuadrado);
            dobroQuadrado = calcQuadrado*2;

            System.out.println("O valor da área de um Quadrado é:"+calcQuadrado+", e seu dobro é: "+dobroQuadrado);
        }

    }
}
