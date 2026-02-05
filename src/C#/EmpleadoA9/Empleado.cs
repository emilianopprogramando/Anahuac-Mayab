using System;

public class Empleado
{
    // Atributos
    private string nombre;
    private int anioContratacion;
    private double salario;

    // Constructor
    public Empleado()
    {
        this.nombre = "NULL";
        this.anioContratacion = 0;
        this.salario = 0.0;
    }

    // Constructor con parametros
    public Empleado(string n, int a, double s)
    {
        this.nombre = n;
        this.anioContratacion = a;
        this.salario = s;
    }

    // Getters
    public string getNombre() 
    {
        return this.nombre;
    }

    public int getAnioContratacion()
    {
        return this.anioContratacion;
    }

    public double getSalario()
    {
        return this.salario;
    }

    // Setters
    public void setNombre(string n)
    {
        this.nombre = n;
    }

    public void setAnioContratacion(int a)
    {
        this.anioContratacion = a;
    }

    public void setSalario(double s)
    {
        this.salario = s;
    }

    // Métodos
    public override string ToString()
    {
        return this.nombre + " " + this.anioContratacion + " " + this.salario;
    }

    public double calcularSalario()
    {
        return this.salario * 12;
    }
}
