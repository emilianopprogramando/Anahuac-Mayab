package Java.Parcial2.Actividad;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {

        Scanner entrada = new Scanner(System.in);

        System.out.println("1. Paciente Externo");
        System.out.println("2. Paciente Hospitalizado");
        System.out.println("3. Medico");

        int opcion = entrada.nextInt();
        entrada.nextLine();

        System.out.print("Nombre: ");
        String nombre = entrada.nextLine();

        System.out.print("Apellido: ");
        String apellido = entrada.nextLine();

        System.out.print("Genero: ");
        String genero = entrada.nextLine();

        System.out.print("Edad: ");
        int edad = entrada.nextInt();

        if (opcion == 1) {

            System.out.print("Altura (m): ");
            double altura = entrada.nextDouble();

            System.out.print("Peso (kg): ");
            double peso = entrada.nextDouble();

            System.out.print("Consultorio: ");
            int consultorio = entrada.nextInt();

            System.out.print("Horario: ");
            int horario = entrada.nextInt();
            entrada.nextLine();

            System.out.print("Fecha: ");
            String fecha = entrada.nextLine();

            PacienteExterno p = new PacienteExterno(
                    nombre, apellido, genero, edad,
                    altura, peso, consultorio, horario, fecha);

            p.printPaciente();
            p.examenFisico();
        }

        else if (opcion == 2) {

            System.out.print("Altura: ");
            double altura = entrada.nextDouble();

            System.out.print("Peso: ");
            double peso = entrada.nextDouble();

            System.out.print("Habitacion: ");
            int habitacion = entrada.nextInt();
            entrada.nextLine();

            System.out.print("Tipo de cirugia: ");
            String cirugia = entrada.nextLine();

            PacienteHospitalizado p = new PacienteHospitalizado(
                    nombre, apellido, genero, edad,
                    altura, peso, habitacion, cirugia);

            p.printPaciente();
            p.indicaciones();
        }

        else if (opcion == 3) {

            entrada.nextLine();

            System.out.print("Especialidad: ");
            String especialidad = entrada.nextLine();

            System.out.print("Cedula: ");
            int cedula = entrada.nextInt();

            Medico m = new Medico(
                    nombre, apellido, genero, edad,
                    especialidad, cedula);

            m.printMedico();
        }

        entrada.close();
    }
}