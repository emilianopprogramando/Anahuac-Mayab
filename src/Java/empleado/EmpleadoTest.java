package Java.empleado;

import java.util.Scanner;

public class EmpleadoTest {

    public static void main(String[] args) {

        Scanner entrada = new Scanner(System.in);

        Empleado objeto1 = new Empleado();
        System.out.println(objeto1.toString());
        System.out.println("Salario anual: " + objeto1.calcularSalario());

        System.out.println();

        Empleado objeto2 = new Empleado("Donald Trump", 2025, 400000.99);
        System.out.println(objeto2.toString());
        System.out.println("Salario anual: " + objeto2.calcularSalario());

        System.out.println();

        Empleado objeto3 = new Empleado();
        System.out.println("Ingrese el nombre del empleado: ");
        objeto3.setNombre(entrada.nextLine());

        System.out.println("Ingrese el anio de contratacion del empleado: ");
        objeto3.setAnioContratacion(entrada.nextInt());

        System.out.println("Ingrese el salario del empleado: ");
        objeto3.setSalario(entrada.nextDouble());

        System.out.println();

        System.out.println(objeto3.toString());
        System.out.println("Salario anual: " + objeto3.calcularSalario());

        entrada.close();
    }
}