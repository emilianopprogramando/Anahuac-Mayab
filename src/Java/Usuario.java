package Java;

public class Usuario {

    // Atributos
    String nombre;
    String apellidos;
    int edad;

    // Constructor
    public Usuario() {
        this.nombre = "";
        this.apellidos = "";
        this.edad = 0;
    }

    // Sobrecarga de constructores
    public Usuario(String nombre, String apellidos, int edad) {
        this.nombre = nombre;
        this.apellidos = apellidos;
        this.edad = edad;
    }

    // Métodos
    public void iniciarSesion() {
        System.out.println("El usuario " + this.nombre + " esta iniciando sesion.");
    }

    public void cerrarSesion() {
        System.out.println("El usuario " + this.nombre + " ha cerrado la sesion.");
    }

    public void hacerReporte() {
        System.out.println("Reporte de usuario");
        System.out.println("Nombre completo: " + this.nombre + " " + this.apellidos);
        System.out.println("Edad: " + this.edad);
    }
}