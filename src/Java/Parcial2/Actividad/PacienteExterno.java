package Java.Parcial2.Actividad;

public class PacienteExterno extends Paciente { // Hereda de la clase Paciente

    // Atributos
    private int noConsultorio;
    private int horario;
    private String fecha;

    // Constructor
    public PacienteExterno() {
        super("", "", "", 0, 0.0, 0.0); // Inicializa los parametros de la clase padre
    }

    // Constructor con parametros
    public PacienteExterno(String nombre, String apellido, String genero, int edad,
            double altura, double peso, int noConsultorio, int horario, String fecha) {

        super(nombre, apellido, genero, edad, altura, peso); // Invoca atributos de clase padre
        this.noConsultorio = noConsultorio;
        this.horario = horario;
        this.fecha = fecha;
    }

    // Metodo para imprimir en pantalla un mensaje relacionado con la actividad
    public void examenFisico() {
        System.out.println("Realizando examen fisico al paciente externo...");
    }
}
