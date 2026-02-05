package Java.empleado;

public class Empleado {

    // Atributos
    private String nombre;
    private int anioContratacion;
    private double salario;

    // Constructor
    public Empleado() {
        this.nombre = "NULL";
        this.anioContratacion = 0;
        this.salario = 0.0;
    }

    // Constructor con parametros
    public Empleado(String n, int a, double s) {
        this.nombre = n;
        this.anioContratacion = a;
        this.salario = s;
    }

    // Getters
    public String getNombre() {
        return this.nombre;
    }

    public int getAnioContratacion() {
        return this.anioContratacion;
    }

    public double getSalario() {
        return this.salario;
    }

    public void setNombre(String n) {
        this.nombre = n;
    }

    public void setAnioContratacion(int a) {
        this.anioContratacion = a;
    }

    public void setSalario(double s) {
        this.salario = s;
    }

    // Métodos
    public String toString() {
        return this.nombre + " " + this.anioContratacion + " " + this.salario;
    }

    public double calcularSalario() {
        return this.salario * 12;
    }
}
