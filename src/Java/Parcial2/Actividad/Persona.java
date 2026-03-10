package Java.Parcial2.Actividad;

public class Persona {
    private String nombre; // Atributos
    private String apellido;
    private String genero;
    private int edad;

    public Persona() { // Constructor
    }

    public Persona(String nombre, String apellido, String genero, int edad) { // Constructor con parametros
        this.nombre = nombre;
        this.apellido = apellido;
        this.genero = genero;
        this.edad = edad;
    }

    public void printPersona() { // Metodo print
        System.out.println("Nombre: " + nombre);
        System.out.println("Apellido: " + apellido);
        System.out.println("Genero: " + genero);
        System.out.println("Edad: " + edad);
    }

    // Setters y getters para atributos privados
    public void setNombre(String nombre) {
        this.nombre = nombre;
    }

    public String getNombre() {
        return nombre;
    }

    public void setApellido(String apellido) {
        this.apellido = apellido;
    }

    public String getApellido() {
        return apellido;
    }

    public void setGenero(String genero) {
        this.genero = genero;
    }

    public String getGenero() {
        return genero;
    }

    public void setEdad(int edad) {
        this.edad = edad;
    }

    public int getEdad() {
        return edad;
    }
}
