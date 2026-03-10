package Java.Parcial2.Actividad;

public class Medico extends Persona { // Hereda de la clase Persona

    private String especialidad; // Atributos
    private int cedulaProfesional;

    public Medico() { // Constructor
    }

    public Medico(String nombre, String apellido, String genero, int edad, String especialidad, int cedulaProfesional) {
        // Constructor con parametros
        super(nombre, apellido, genero, edad);
        this.especialidad = especialidad;
        this.cedulaProfesional = cedulaProfesional;
    }

    public void printMedico() { // Metodo print
        super.printPersona(); // Invoca el metodo print de la clase padre
        System.out.println("Especialidad: " + especialidad);
        System.out.println("Cedula Profesional: " + cedulaProfesional);
    }
}
