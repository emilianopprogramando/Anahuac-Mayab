package Java.termometro;

import java.util.Scanner;

public class TermometroTest {

    public static void main(String[] args) {
        Scanner entrada = new Scanner(System.in);

        // Temperatura 1 aleatoria
        Termometro temp1 = new Termometro();
        System.out.println("Termómetro 1\n");
        temp1.MostrarTemperaturas();

        // Temperatura 2 usuario
        System.out.println("\nIngrese una temperatura en °C: ");
        float tempUsuario = entrada.nextFloat();

        Termometro temp2 = new Termometro(tempUsuario);
        System.out.println("Termómetro 2\n");
        temp2.MostrarTemperaturas();

        entrada.close();
    }
}
