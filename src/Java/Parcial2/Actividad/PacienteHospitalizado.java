package Java.Parcial2.Actividad;

// Hereda de clase Paciente
public class PacienteHospitalizado extends Paciente {

    // Atributos
    private int habitacion;
    private String tipoCirugia;

    // Constructor
    public PacienteHospitalizado() { // Inicializa los parametros de la clase padre
        super("", "", "", 0, 0.0, 0.0);
    }

    // Constructor con parametros
    public PacienteHospitalizado(String nombre, String apellido, String genero, int edad,
            double altura, double peso, int habitacion, String tipoCirugia) {

        super(nombre, apellido, genero, edad, altura, peso); // Invvoca atributos de clase padre
        this.habitacion = habitacion;
        this.tipoCirugia = tipoCirugia;
    }

    // Metodo para imprimir en pantalla un mensaje relacionado con la actividad
    public void indicaciones() {
        System.out.println("Indicaciones médicas para el paciente hospitalizado:");
    }
}
